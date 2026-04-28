// spawnManagerPG.sqf
params [
    "_areaID",
    "_spawnPos",
    "_side",
    "_unitPool",
    "_unitCount",
    "_patrolRatio",
    "_garrisonRadius",
    "_patrolRadius"
];

if (!isServer) exitWith {};
if (!isNil "clearedAreas" && {_areaID in clearedAreas}) exitWith {};
if (isNil "areaGroups") then { areaGroups = createHashMap; };
if (!isNil { areaGroups get _areaID }) exitWith {};

private _pickUnit = {
    params ["_pool"];
    private _roll = random 1;
    private _cumulative = 0;
    private _selected = (_pool select 0) select 0;

    {
        _cumulative = _cumulative + (_x select 1);
        if (_roll <= _cumulative) exitWith {
            _selected = _x select 0;
        };
    } forEach _pool;

    _selected
};

private _groupSizeLimit = 8;
private _spawnedUnits = [];
private _allGroups = [];
private _currentGroup = grpNull;
private _currentCount = 0;

for "_i" from 1 to _unitCount do {
    if (isNull _currentGroup || {_currentCount >= _groupSizeLimit}) then {
        _currentGroup = createGroup _side;
        _allGroups pushBack _currentGroup;
        _currentCount = 0;
    };

    private _unitType = [_unitPool] call _pickUnit;
    private _unit = _currentGroup createUnit [_unitType, _spawnPos, [], 5, "NONE"];
    _spawnedUnits pushBack _unit;
    _currentCount = _currentCount + 1;
};

private _nearBuildings = nearestObjects [_spawnPos, ["House"], _garrisonRadius];
private _buildingSlots = [];
{
    {
        _buildingSlots pushBack _x;
    } forEach ([_x] call BIS_fnc_buildingPositions);
} forEach _nearBuildings;

private _patrolGroup = createGroup _side;
_allGroups pushBack _patrolGroup;

{
    if (random 1 <= _patrolRatio) then {
        [_x] joinSilent _patrolGroup;
    } else {
        if (_buildingSlots isNotEqualTo []) then {
            private _slotIndex = floor (random (count _buildingSlots));
            private _chosenPos = _buildingSlots deleteAt _slotIndex;
            _x setPosATL _chosenPos;
            _x disableAI "PATH";
        };
    };
} forEach _spawnedUnits;

if ((count units _patrolGroup) > 0) then {
    [_patrolGroup, _spawnPos, _patrolRadius] call BIS_fnc_taskPatrol;
} else {
    deleteGroup _patrolGroup;
    _allGroups deleteAt ((count _allGroups) - 1);
};

areaGroups set [_areaID, _allGroups];
