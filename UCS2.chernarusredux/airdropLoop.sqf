if (!isServer) exitWith {};

private _dropMarkers = ["DZ1", "DZ2", "DZ3", "DZ4", "DZ5"];
private _planeStartMarkers = ["PS1", "PS2"];
private _planeEndMarkers = ["PE1", "PE2"];

private _dropChanceInit = 0.15;
private _interval = 3600;
private _chanceIncrement = 0.1;

private _crates = [
    [
        0.5,
        {
            private _crate = createVehicle ["C_IDAP_CargoNet_01_supplies_F", [0,0,0], [], 0, "NONE"];
            clearItemCargoGlobal _crate;
            clearMagazineCargoGlobal _crate;
            clearWeaponCargoGlobal _crate;
            clearBackpackCargoGlobal _crate;

            _crate addMagazineCargo ["VA_Bloodbag", 10];
            _crate addMagazineCargo ["VA_SurgeryKit", 10];
            _crate addMagazineCargo ["VA_IV_Full", 10];
            _crate addMagazineCargo ["VA_Injector", 10];
            _crate addMagazineCargo ["VA_Bandages", 20];
            _crate addMagazineCargo ["VA_Pills", 15];
            _crate addMagazineCargo ["VA_Waterbottle_full_s", 25];
            _crate addMagazineCargo ["VA_Vodka", 2];
            _crate addMagazineCargo ["VA_Antimalaria", 4];
            _crate addMagazineCargo ["VA_Morphine", 5];
            _crate addMagazineCargo ["VA_Painkillers", 10];
            _crate addMagazineCargo ["VA_Antibiotics", 10];
            _crate addMagazineCargo ["VA_Defib", 1];
            _crate addMagazineCargo ["VA_Splint", 10];
            _crate addMagazineCargo ["VA_CookedMeal", 15];
            _crate addMagazineCargo ["VA_Disinfectant", 20];

            _crate
        }
    ],
    [
        0.05,
        {
            private _crate = createVehicle ["Box_IND_Wps_F", [0,0,0], [], 0, "NONE"];
            clearWeaponCargoGlobal _crate;
            _crate addWeaponCargo ["arifle_MX_Black_F", 1];
            _crate addMagazineCargo ["30Rnd_65x39_caseless_mag", 2];
            _crate addWeaponCargo ["hgun_P07_F", 2];
            _crate addMagazineCargo ["16Rnd_9x21_Mag", 6];
            _crate addMagazineCargo ["HandGrenade", 2];
            _crate addMagazineCargo ["VA_Bandages", 10];
            _crate addMagazineCargo ["VA_Rice", 10];
            _crate addMagazineCargo ["VA_SoundGrenade", 12];
            _crate
        }
    ],
    [
        0.10,
        {
            private _crate = createVehicle ["C_IDAP_supplyCrate_F", [0,0,0], [], 0, "NONE"];
            clearItemCargoGlobal _crate;
            clearMagazineCargoGlobal _crate;
            clearWeaponCargoGlobal _crate;
            clearBackpackCargoGlobal _crate;

            _crate addMagazineCargo ["VA_Bandages", 10];
            _crate addMagazineCargo ["VA_Rice", 10];
            _crate addMagazineCargo ["VA_Waterbottle_full_c", 20];
            _crate addMagazineCargo ["VA_RawBeans", 20];
            _crate addMagazineCargo ["VA_Knife", 2];
            _crate addMagazineCargo ["VA_Matches", 10];
            _crate addMagazineCargo ["VA_Flashlight", 5];
            _crate addMagazineCargo ["VA_Batteries", 8];

            _crate
        }
    ],
    [
        0.15,
        {
            private _crate = createVehicle ["Land_PlasticCase_01_large_idap_F", [0,0,0], [], 0, "NONE"];
            clearItemCargoGlobal _crate;
            clearMagazineCargoGlobal _crate;
            clearWeaponCargoGlobal _crate;
            clearBackpackCargoGlobal _crate;

            _crate addMagazineCargo ["VA_Hammer", 2];
            _crate addMagazineCargo ["VA_Pliers", 2];
            _crate addMagazineCargo ["VA_Ducttape", 15];
            _crate addMagazineCargo ["VA_Nails", 25];
            _crate addMagazineCargo ["VA_WoodenboardS", 10];
            _crate addMagazineCargo ["VA_Screwdriver", 2];
            _crate addMagazineCargo ["VA_Screws", 25];
            _crate addMagazineCargo ["VA_Wire", 10];
            _crate addMagazineCargo ["VA_ScrapMetal", 10];
            _crate addMagazineCargo ["VA_Rope", 10];
            _crate addMagazineCargo ["VA_fuelCan", 2];
            _crate addMagazineCargo ["VA_Saw", 2];
            _crate addMagazineCargo ["VA_Shovel", 2];
            _crate addMagazineCargo ["VA_Axe", 2];

            _crate
        }
    ],
    [
        0.10,
        {
            private _crate = createVehicle ["Land_PlasticCase_01_small_idap_F", [0,0,0], [], 0, "NONE"];
            clearItemCargoGlobal _crate;
            clearMagazineCargoGlobal _crate;
            clearWeaponCargoGlobal _crate;
            clearBackpackCargoGlobal _crate;

            _crate addMagazineCargo ["VA_Elecomp", 4];
            _crate addMagazineCargo ["VA_LightBulp", 2];
            _crate addMagazineCargo ["VA_Screwdriver", 1];
            _crate addMagazineCargo ["VA_Earplugs", 2];
            _crate addMagazineCargo ["VA_Bandages", 10];
            _crate addMagazineCargo ["VA_Rice", 10];
            _crate addMagazineCargo ["VA_Waterbottle_full_s", 10];
            _crate addMagazineCargo ["VA_RawBeans", 10];
            _crate addMagazineCargo ["VA_SoundGrenade", 2];

            _crate
        }
    ]
];

[
    _dropChanceInit,
    _interval,
    _chanceIncrement,
    _dropMarkers,
    _crates,
    _planeStartMarkers,
    _planeEndMarkers
] spawn {
    params ["_dropChance", "_interval", "_chanceIncrement", "_dropMarkers", "_crates", "_starts", "_ends"];
    private _currentChance = _dropChance;

    while {true} do {
        if (random 1 < _currentChance) then {
            private _dropMkr = selectRandom _dropMarkers;
            private _dropPos = getMarkerPos _dropMkr;

            private _roll = random 1;
            private _cumulative = 0;
            private _selectedCrateFunc = {
                createVehicle ["Box_NATO_Ammo_F", [0,0,0], [], 0, "NONE"]
            };

            {
                _cumulative = _cumulative + (_x select 0);
                if (_roll < _cumulative) exitWith {
                    _selectedCrateFunc = _x select 1;
                };
            } forEach _crates;

            private _startPos = getMarkerPos (selectRandom _starts);
            private _endPos = getMarkerPos (selectRandom _ends);
            _startPos set [2, 280];
            _dropPos set [2, 280];
            _endPos set [2, 280];

            private _plane = createVehicle ["Aegis_C_IDAP_Plane_Transport_01_civil_F", _startPos, [], 0, "FLY"];
            private _pilotGroup = createGroup civilian;
            private _pilot = _pilotGroup createUnit ["C_man_pilot_F", _startPos, [], 0, "NONE"];
            _plane setVariable ["UCS2_disableDynamicSimulation", true];
            _pilot setVariable ["UCS2_disableDynamicSimulation", true];
            _plane enableDynamicSimulation false;
            _pilot enableDynamicSimulation false;
            _pilot moveInDriver _plane;
            _pilot setCaptive true;

            _pilotGroup addWaypoint [_dropPos, 0];
            _pilotGroup addWaypoint [_endPos, 0];

            [_plane, _dropPos, _selectedCrateFunc] spawn {
                params ["_plane", "_dropPos", "_crateFunc"];
                waitUntil { sleep 0.25; (_plane distance2D _dropPos) < 200 || !alive _plane };
                if (!alive _plane) exitWith {};

                private _cratePos = [(_dropPos select 0), (_dropPos select 1), ((getPosASL _plane) select 2)];
                private _crate = call _crateFunc;
                _crate setPosASL _cratePos;

                private _chute = createVehicle ["B_Parachute_02_F", _cratePos, [], 0, "NONE"];
                _chute setVelocity velocity _plane;
                _crate attachTo [_chute, [0,0,0]];

                waitUntil { sleep 0.5; (getPos _crate select 2) < 5 || isNull _crate };
                if (isNull _crate) exitWith {};

                detach _crate;
                deleteVehicle _chute;

                private _markerId = format ["drop_%1", diag_tickTime];
                private _marker = createMarker [_markerId, position _crate];
                _marker setMarkerShape "ICON";
                _marker setMarkerType "mil_box";
                _marker setMarkerColor "ColorBlue";
                _marker setMarkerText "Supply Drop";

                _crate setVariable ["UCS2_dropMarker", _markerId, true];
                _crate addEventHandler ["ContainerOpened", {
                    params ["_container"];
                    private _dropMarker = _container getVariable ["UCS2_dropMarker", ""];
                    if (_dropMarker != "") then {
                        deleteMarker _dropMarker;
                        _container setVariable ["UCS2_dropMarker", "", true];
                    };
                }];

                [_crate, _markerId] spawn {
                    params ["_crate", "_markerId"];
                    sleep 5400;

                    deleteMarker _markerId;
                    if (!isNull _crate) then {
                        deleteVehicle _crate;
                    };
                };
            };

            [_plane, _pilot, _pilotGroup, _endPos] spawn {
                params ["_plane", "_pilot", "_pilotGroup", "_endPos"];
                waitUntil { sleep 0.5; (_plane distance2D _endPos) < 300 || !alive _plane };
                sleep 5;
                if (!isNull _plane) then { deleteVehicle _plane; };
                if (!isNull _pilot) then { deleteVehicle _pilot; };
                if (!isNull _pilotGroup) then { deleteGroup _pilotGroup; };
            };

            _currentChance = _dropChance;
        } else {
            _currentChance = _currentChance + _chanceIncrement;
        };

        sleep _interval;
    };
};
