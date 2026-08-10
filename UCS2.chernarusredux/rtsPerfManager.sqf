/*
    rtsPerfManager.sqf
    Purpose: reduce server-side AI scheduling spikes (notably with heavy MCC/NR6 missions)
             by relying on Arma dynamic simulation and auto-registering spawned AI.
*/

if (!isServer) exitWith {};

// Core dynamic simulation settings for RTS-style mission load.
enableDynamicSimulationSystem true;
"Group" setDynamicSimulationDistance 1100;
"Vehicle" setDynamicSimulationDistance 1400;
"EmptyVehicle" setDynamicSimulationDistance 450;
"Prop" setDynamicSimulationDistance 250;
setDynamicSimulationDistanceCoef 1;

[] spawn {
    while {true} do {
        {
            if (!isPlayer _x && {!(_x getVariable ["UCS2_disableDynamicSimulation", false])}) then {
                _x enableDynamicSimulation true;
            };
        } forEach allUnits;

        {
            if (!(crew _x findIf { isPlayer _x } >= 0)
                && {!(_x getVariable ["UCS2_disableDynamicSimulation", false])}) then {
                _x enableDynamicSimulation true;
            };
        } forEach vehicles;

        sleep 20;
    };
};
