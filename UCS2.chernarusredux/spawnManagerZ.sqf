// spawnManagerZ.sqf
// Handles spawning and despawning AI groups per area dynamically.

params ["_areaID", "_spawnPos", "_faction", "_unitTypes", "_unitCount"];

if (!isServer) exitWith {};

// Initialize storage if needed
if (isNil "areaGroups") then {
    areaGroups = createHashMap;
};

// Check if already spawned (don't spawn twice)
if (!isNil { areaGroups get _areaID }) exitWith {};

// Create the group
private _side = independent; // You can adjust side based on faction if needed
private _group = createGroup _side;

// Spawn units
for "_i" from 1 to _unitCount do {
    private _unitType = selectRandom _unitTypes;
    private _unit = _group createUnit [_unitType, _spawnPos, [], 5, "NONE"];
};

// Save group in hashmap
areaGroups set [_areaID, _group];
