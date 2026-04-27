// despawnManager.sqf
params ["_areaID"];

if (!isServer) exitWith {};

if (isNil "areaGroups") exitWith {};

private _groups = areaGroups getOrDefault [_areaID, []];

private _anyAlive = false;

{
    {
        if (alive _x) then {
            deleteVehicle _x;
            _anyAlive = true;
        };
    } forEach units _x;

    deleteGroup _x;
} forEach _groups;

areaGroups deleteAt _areaID;

// --- NEW: Track cleared areas ---
if (!_anyAlive) then {
    if (isNil "clearedAreas") then { clearedAreas = []; };
    clearedAreas pushBackUnique _areaID;
};
