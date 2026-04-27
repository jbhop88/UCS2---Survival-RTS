// spawnManagerPG.sqf
params [
    "_areaID",
    "_spawnPos",
    "_side",
    "_unitPool",
    "_unitCount",
    "_patrolRatio",     // New! e.g., 0.6 means 60% patrol
    "_garrisonRadius",  // New! how far to search for buildings
    "_patrolRadius"     // New! how far patrols can wander
];

if (!isServer) exitWith {};

if (!isNil "clearedAreas" && {_areaID in clearedAreas}) exitWith {};
if (isNil "areaGroups") then { areaGroups = createHashMap; };
if (!isNil { areaGroups get _areaID }) exitWith {};

// -- Weighted random selector --
private _pickUnit = {
    params ["_unitPool"];
    private _roll = random 1;
    private _cumulative = 0;
    {
        _cumulative = _cumulative + (_x select 1);
        if (_roll <= _cumulative) exitWith { _x select 0 };
    } forEach _unitPool;
};

// -- Spawn logic --
private _groupSizeLimit = 8;
private _currentGroup = createGroup _side;
private _allGroups = [_currentGroup];
private _currentCount = 0;
private _spawnedUnits = [];

for "_i" from 1 to _unitCount do {
    if (_currentCount >= _groupSizeLimit) then {
        _currentGroup = createGroup _side;
        _allGroups pushBack _currentGroup;
        _currentCount = 0;
    };
    private _unitType = [_unitPool] call _pickUnit;
    private _unit = _currentGroup createUnit [_unitType, _spawnPos, [], 5, "NONE"];
    _spawnedUnits pushBack _unit;
    _currentCount = _currentCount + 1;
};

// -- Behavior logic --
{
    private _rand = random 1;
    if (_rand <= _patrolRatio) then {
        [_x, _spawnPos, _patrolRadius] spawn {
            params ["_unit", "_centerPos", "_radius"];
            while {alive _unit} do {
                private _patrolPoint = [
                    (_centerPos select 0) + (random (_radius * 2)) - _radius,
                    (_centerPos select 1) + (random (_radius * 2)) - _radius,
                    0
                ];
                _unit doMove _patrolPoint;
                sleep (15 + random 15);
            };
        };
    } else {
        [_x, _spawnPos, _garrisonRadius] spawn {
            params ["_unit", "_centerPos", "_radius"];
            private _nearBuildings = nearestObjects [_centerPos, ["House"], _radius];
            if (count _nearBuildings > 0) then {
                private _house = selectRandom _nearBuildings;
                private _positions = [_house] call BIS_fnc_buildingPositions;
                if (count _positions > 0) then {
                    private _chosenPos = selectRandom _positions;
                    _unit setPosATL _chosenPos;
                    _unit disableAI "PATH";
                };
            };
        };
    };
} forEach _spawnedUnits;

// Save
areaGroups set [_areaID, _allGroups];
