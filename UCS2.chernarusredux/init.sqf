if (isServer) then {
    [] execVM "airdropLoop.sqf";
    [] execVM "rtsPerfManager.sqf";
};

if (hasInterface) then {
    [] spawn {
        waitUntil { !isNull player };

        player enableStamina true;
        player addEventHandler ["Respawn", {
            params ["_unit"];
            _unit enableStamina true;
        }];

        while {true} do {
            if (!isStaminaEnabled player) then {
                player enableStamina true;
            };
            sleep 120;
        };
    };
};

// Ravage + WebKnight Melee Compatibility (Self-contained init.sqf)

// Melee damage handler
if (hasInterface) then {
    [] spawn {
        waitUntil { !isNull player };

        private _meleeGestures = createHashMapFromArray [
            ["WBK_MeleeAttack1", true], ["WBK_MeleeAttack2", true],
            ["WBK_Heavy_1", true], ["WBK_Heavy_2", true], ["WBK_Heavy_3", true],
            ["WBK_FISTS_ATTACK_1_actions", true], ["WBK_FISTS_ATTACK_2_actions", true],
            ["WBK_FISTS_ATTACK_2_moveL_actions", true], ["WBK_FISTS_ATTACK_2_moveF_actions", true],
            ["WBK_FISTS_ATTACK_3_actions", true],
            ["fp_onehanded_swing_1", true], ["fp_onehanded_swing_2", true], ["fp_onehanded_swing_3", true], ["fp_onehanded_swing_4", true],
            ["fp_outofstamina_onehanded_1", true], ["fp_outofstamina_onehanded", true],
            ["fp_onehanded_kick", true],
            ["fp_kulak_swing_1", true], ["fp_kulak_swing_2", true], ["fp_kulak_swing_3", true], ["fp_kulak_swing_4", true]
        ];

        private _meleeWeapons = createHashMapFromArray [
            ["WBK_Knife", true], ["WBK_Machete", true], ["WBK_Axe", true], ["WBK_Sledgehammer", true], ["WBK_BrassKnuckles", true],
            ["WBK_brush_axe", true], ["WBK_craftedAxe", true], ["WBK_Katana", true], ["WBK_pipeStyledSword", true],
            ["WBK_SmallHammer", true], ["WBK_survival_weapon_1", true], ["WBK_survival_weapon_2", true],
            ["WBK_survival_weapon_3", true], ["WBK_survival_weapon_3_r", true], ["WBK_survival_weapon_4", true],
            ["WBK_survival_weapon_4_r", true], ["WBK_ww1_Club", true], ["Weap_melee_knife", true], ["WBK_FISTS", true], ["Rod", true],
            ["Bat_Clear", true], ["Bat_Spike", true]
        ];

        private _zombieTypes = createHashMapFromArray [
            ["zombie_bolter", true], ["zombie_runner", true], ["zombie_walker", true]
        ];

        private _lastGesture = "";
        private _lastHitTime = -10;

        while {true} do {
            private _gesture = gestureState player;

            if (_gesture != _lastGesture) then {
                _lastGesture = _gesture;

                if (_meleeGestures getOrDefault [_gesture, false]) then {
                    private _weapon = currentWeapon player;
                    if ((_weapon isEqualTo "") || {_meleeWeapons getOrDefault [_weapon, false]}) then {
                        if ((diag_tickTime - _lastHitTime) >= 0.25) then {
                            _lastHitTime = diag_tickTime;
                            {
                                if (
                                    alive _x &&
                                    ((_x getVariable ["isZombie", false]) || {_zombieTypes getOrDefault [typeOf _x, false]})
                                ) then {
                                    _x setDamage ((damage _x) + 0.5);
                                };
                            } forEach (player nearEntities ["CAManBase", 2]);
                        };
                    };
                };
            };

            sleep 0.15;
        };
    };
};


if (isServer) then {
_idapCrate = createVehicle ["C_IDAP_CargoNet_01_supplies_F", [13695.6,11103.9,0], [], 0, "NONE"];
_idapCrate addMagazineCargo ["VA_Bloodbag", 40];
_idapCrate addMagazineCargo ["VA_SurgeryKit", 40];
_idapCrate addMagazineCargo ["VA_IV_Full", 40];
_idapCrate addMagazineCargo ["VA_Injector", 40];
_idapCrate addMagazineCargo ["VA_Bandages", 85];
_idapCrate addMagazineCargo ["VA_Pills", 45];
_idapCrate addMagazineCargo ["VA_BakedBeans", 120];
_idapCrate addMagazineCargo ["VA_Canteen_full_c", 40];
_idapCrate addMagazineCargo ["VA_Tire", 10];
_idapCrate addMagazineCargo ["VA_fuelCan", 20];
_idapCrate addMagazineCargo ["VA_CanOpener", 40];
_idapCrate addMagazineCargo ["VA_GeigerCounter", 10];
_idapCrate addMagazineCargo ["VA_Antimalaria", 10];
_idapCrate addMagazineCargo ["VA_FishRod", 2];
_idapCrate addMagazineCargo ["VA_Waterbottle_full_c", 80];
_idapCrate addMagazineCargo ["VA_Rice", 80];
_idapCrate addMagazineCargo ["VA_Apple", 40];
_idapCrate addMagazineCargo ["VA_CookedMeal", 40];
_idapCrate addMagazineCargo ["VA_HotSoup", 35];
_idapCrate addMagazineCargo ["VA_Painkillers", 40];
_idapCrate addMagazineCargo ["VA_Vitamins", 40];

_idapCrateDM = createVehicle ["C_IDAP_CargoNet_01_supplies_F", [16381,16417.3,0], [], 0, "NONE"];
clearItemCargoGlobal _idapCrateDM;
clearMagazineCargoGlobal _idapCrateDM;
clearWeaponCargoGlobal _idapCrateDM;
clearBackpackCargoGlobal _idapCrateDM;
_idapCrateDM addMagazineCargo ["VA_Bloodbag", 10];
_idapCrateDM addMagazineCargo ["VA_SurgeryKit", 5];
_idapCrateDM addMagazineCargo ["VA_IV_Full", 10];
_idapCrateDM addMagazineCargo ["VA_Injector", 10];
_idapCrateDM addMagazineCargo ["VA_Bandages", 25];
_idapCrateDM addMagazineCargo ["VA_Pills", 10];
_idapCrateDM addMagazineCargo ["VA_impBandages", 10];
_idapCrateDM addMagazineCargo ["VA_Antibiotics", 10];
_idapCrateDM addMagazineCargo ["VA_Defib", 10];
_idapCrateDM addMagazineCargo ["VA_Disinfectant", 10];
_idapCrateDM addMagazineCargo ["VA_AidKit", 20];
_idapCrateDM addMagazineCargo ["VA_DiagnosticsKit", 10];
_idapCrateDM addMagazineCargo ["VA_Painkillers", 10];
_idapCrateDM addMagazineCargo ["VA_Vitamins", 10];
_idapCrateDM addMagazineCargo ["VA_Adrenaline", 10];
_idapCrateDM addMagazineCargo ["VA_Morphine", 10];
_idapCrateDM addMagazineCargo ["VA_GeigerCounter", 10];
_idapCrateDM addMagazineCargo ["VA_ARPills", 10];
_idapCrateDM addMagazineCargo ["VA_Splint", 10];
_idapCrateDM addMagazineCargo ["VA_Antimalaria", 10];
_idapCrateDM addMagazineCargo ["VA_Rice", 10];
_idapCrateDM addMagazineCargo ["VA_Waterbottle_full_c", 20];
_idapCrateDM addMagazineCargo ["VA_Hose", 10];
_idapCrateDM addMagazineCargo ["VA_TireRepairKit", 10];
_idapCrateDM addMagazineCargo ["VA_fuelCan", 8];
_idapCrateDM addMagazineCargo ["VA_Crowbar", 4];
_idapCrateDM addMagazineCargo ["VA_CanOpener", 10];
_idapCrateDM addMagazineCargo ["VA_CannedVegetable", 10];
_idapCrateDM addMagazineCargo ["VA_RawBeans", 10];

_idapCrateBS = createVehicle ["C_IDAP_supplyCrate_F", [16417.1,16399.4,0], [], 0, "NONE"];
_idapCrateBS addMagazineCargo ["VA_Waterbottle_full_c", 10];
_idapCrateBS addMagazineCargo ["VA_Rice", 10];
_idapCrateBS addMagazineCargo ["VA_AidKit", 5];
_idapCrateBS addMagazineCargo ["VA_Ducttape", 4];
_idapCrateBS addMagazineCargo ["VA_Matches", 6];
_idapCrateBS addMagazineCargo ["VA_Knife", 4];
_idapCrateBS addMagazineCargo ["VA_Flashlight", 2];
_idapCrateBS addMagazineCargo ["VA_Batteries", 2];
_idapCrateBS addMagazineCargo ["VA_Injector", 15]; 

_idapCrateE = createVehicle ["Land_PlasticCase_01_small_idap_F", [16385,16417.3,0], [], 0, "NONE"];
_idapCrateE addMagazineCargo ["VA_Batteries", 4];
_idapCrateE addMagazineCargo ["VA_Earplugs", 2];
_idapCrateE addMagazineCargo ["VA_LightBulp", 2];
_idapCrateE addMagazineCargo ["VA_Screwdriver", 1];
_idapCrateE addMagazineCargo ["VA_Elecomp", 4];
_idapCrateE addMagazineCargo ["VA_Flashlight", 2];

_idapCrateTC = createVehicle ["Land_PlasticCase_01_large_idap_F", [16390,16417.3,0], [], 0, "NONE"];
_idapCrateTC addMagazineCargo ["VA_Hammer", 2];
_idapCrateTC addMagazineCargo ["VA_Screwdriver", 2];
_idapCrateTC addMagazineCargo ["VA_Pliers", 1];
_idapCrateTC addMagazineCargo ["VA_Ducttape", 10];
_idapCrateTC addMagazineCargo ["VA_ScrapMetal", 5];
_idapCrateTC addMagazineCargo ["VA_Nails", 15];
_idapCrateTC addMagazineCargo ["VA_Rope", 5];
_idapCrateTC addMagazineCargo ["VA_Wire", 5];

_fullCrate = createVehicle ["MCC_crateSupplyBigEast", [16384.7,16380.6,0], [], 0, "NONE"];
clearMagazineCargo _fullCrate;
_fullCrate addMagazineCargo ["VA_SoundGrenade", 1];
_fullCrate addMagazineCargo ["VA_Molotov", 1];
_fullCrate addMagazineCargo ["VA_batteries", 1];
_fullCrate addMagazineCargo ["VA_Notebook", 1];
_fullCrate addMagazineCargo ["VA_CookingRecipes", 1];
_fullCrate addMagazineCargo ["VA_CraftingRecipes", 1];
_fullCrate addMagazineCargo ["VA_Earplugs", 1];
_fullCrate addMagazineCargo ["VA_Blueprint01", 1];
_fullCrate addMagazineCargo ["VA_Knife", 1];
_fullCrate addMagazineCargo ["VA_CanOpener", 1];
_fullCrate addMagazineCargo ["VA_Crowbar", 1];
_fullCrate addMagazineCargo ["VA_Saw", 1];
_fullCrate addMagazineCargo ["VA_Hammer", 1];
_fullCrate addMagazineCargo ["VA_Pliers", 1];
_fullCrate addMagazineCargo ["VA_Multim", 1];
_fullCrate addMagazineCargo ["VA_Axe", 1];
_fullCrate addMagazineCargo ["VA_Shovel", 1];
_fullCrate addMagazineCargo ["VA_ShovelSur", 1];
_fullCrate addMagazineCargo ["VA_FishRod", 1];
_fullCrate addMagazineCargo ["VA_Wrench", 1];
_fullCrate addMagazineCargo ["VA_Drill", 1];
_fullCrate addMagazineCargo ["VA_File", 1];
_fullCrate addMagazineCargo ["VA_Toolbox", 1];
_fullCrate addMagazineCargo ["VA_Screwdriver", 1];
_fullCrate addMagazineCargo ["VA_Grinder", 1];
_fullCrate addMagazineCargo ["VA_Sledgehammer", 1];
_fullCrate addMagazineCargo ["VA_WorkGloves", 1];
_fullCrate addMagazineCargo ["VA_Ducttape", 1];
_fullCrate addMagazineCargo ["VA_GasCooker", 1];
_fullCrate addMagazineCargo ["VA_MeasTape", 1];
_fullCrate addMagazineCargo ["VA_Butanetorch", 1];
_fullCrate addMagazineCargo ["VA_ExtCord", 1];
_fullCrate addMagazineCargo ["VA_Foil", 1];
_fullCrate addMagazineCargo ["VA_Bandages", 1];
_fullCrate addMagazineCargo ["VA_impBandages", 1];
_fullCrate addMagazineCargo ["VA_Antibiotics", 1];
_fullCrate addMagazineCargo ["VA_Bloodbag", 1];
_fullCrate addMagazineCargo ["VA_Bloodbag_Empty", 1];
_fullCrate addMagazineCargo ["VA_IV_Empty", 1];
_fullCrate addMagazineCargo ["VA_IV_Full", 1];
_fullCrate addMagazineCargo ["VA_Defib", 1];
_fullCrate addMagazineCargo ["VA_Disinfectant", 1];
_fullCrate addMagazineCargo ["VA_AidKit", 1];
_fullCrate addMagazineCargo ["VA_DiagnosticsKit", 1];
_fullCrate addMagazineCargo ["VA_AidKit_Used", 1];
_fullCrate addMagazineCargo ["VA_Heatpack", 1];
_fullCrate addMagazineCargo ["VA_Painkillers", 1];
_fullCrate addMagazineCargo ["VA_Vitamins", 1];
_fullCrate addMagazineCargo ["VA_WaterPureT", 1];
_fullCrate addMagazineCargo ["VA_Adrenaline", 1];
_fullCrate addMagazineCargo ["VA_Morphine", 1];
_fullCrate addMagazineCargo ["VA_SurgeryKit", 1];
_fullCrate addMagazineCargo ["VA_Injector", 1];
_fullCrate addMagazineCargo ["VA_Pills", 1];
_fullCrate addMagazineCargo ["VA_GeigerCounter", 1];
_fullCrate addMagazineCargo ["VA_ARPills", 1];
_fullCrate addMagazineCargo ["VA_Splint", 1];
_fullCrate addMagazineCargo ["VA_Charcoal", 1];
_fullCrate addMagazineCargo ["VA_Antimalaria", 1];
_fullCrate addMagazineCargo ["VA_TunaFish", 1];
_fullCrate addMagazineCargo ["VA_SalemaFish", 1];
_fullCrate addMagazineCargo ["VA_OrnateFish", 1];
_fullCrate addMagazineCargo ["VA_MulletFish", 1];
_fullCrate addMagazineCargo ["VA_MackerelFish", 1];
_fullCrate addMagazineCargo ["VA_Catshark", 1];
_fullCrate addMagazineCargo ["VA_Turtle", 1];
_fullCrate addMagazineCargo ["VA_Snake", 1];
_fullCrate addMagazineCargo ["VA_rawMeat", 1];
_fullCrate addMagazineCargo ["VA_rawMeatInfected", 1];
_fullCrate addMagazineCargo ["VA_MeatCookedInfected", 1];
_fullCrate addMagazineCargo ["VA_MeatCooked", 1];
_fullCrate addMagazineCargo ["VA_FishCooked", 1];
_fullCrate addMagazineCargo ["VA_Orange", 1];
_fullCrate addMagazineCargo ["VA_Rice", 1];
_fullCrate addMagazineCargo ["VA_Apple", 1];
_fullCrate addMagazineCargo ["VA_Apricot", 1];
_fullCrate addMagazineCargo ["VA_Blueberries", 1];
_fullCrate addMagazineCargo ["VA_Redberries", 1];
_fullCrate addMagazineCargo ["VA_Greenberries", 1];
_fullCrate addMagazineCargo ["VA_Pumpkin", 1];
_fullCrate addMagazineCargo ["VA_Vodka", 1];
_fullCrate addMagazineCargo ["VA_Bedrull", 1];
_fullCrate addMagazineCargo ["VA_Waterbottle_full_d", 1];
_fullCrate addMagazineCargo ["VA_Waterbottle_full_s", 1];
_fullCrate addMagazineCargo ["VA_Waterbottle_full_c", 1];
_fullCrate addMagazineCargo ["VA_Waterbottle_empty", 1];
_fullCrate addMagazineCargo ["VA_Canteen_full_c", 1];
_fullCrate addMagazineCargo ["VA_Canteen_full_d", 1];
_fullCrate addMagazineCargo ["VA_Canteen_full_s", 1];
_fullCrate addMagazineCargo ["VA_Canteen_empty", 1];
_fullCrate addMagazineCargo ["VA_BakedBeans", 1];
_fullCrate addMagazineCargo ["VA_RawBeans", 1];
_fullCrate addMagazineCargo ["VA_CanFranta", 1];
_fullCrate addMagazineCargo ["VA_CanRusty", 1];
_fullCrate addMagazineCargo ["VA_CannedVegetable", 1];
_fullCrate addMagazineCargo ["VA_CannedMushrooms", 1];
_fullCrate addMagazineCargo ["VA_CanSpirit", 1];
_fullCrate addMagazineCargo ["VA_CerealBox", 1];
_fullCrate addMagazineCargo ["VA_DentedCan", 1];
_fullCrate addMagazineCargo ["VA_PowderedMilk", 1];
_fullCrate addMagazineCargo ["VA_TacticalBacon", 1];
_fullCrate addMagazineCargo ["VA_CookingUtil", 1];
_fullCrate addMagazineCargo ["VA_Pan", 1];
_fullCrate addMagazineCargo ["VA_CookedMeal", 1];
_fullCrate addMagazineCargo ["VA_HotSoup", 1];
_fullCrate addMagazineCargo ["VA_DomeTentPacked", 1];
_fullCrate addMagazineCargo ["VA_SleepingBagPacked", 1];
_fullCrate addMagazineCargo ["VA_Matches", 1];
_fullCrate addMagazineCargo ["VA_SMatches", 1];
_fullCrate addMagazineCargo ["VA_TrMap", 1];
_fullCrate addMagazineCargo ["VA_WoodenLogs", 1];
_fullCrate addMagazineCargo ["VA_WoodenBranches", 1];
_fullCrate addMagazineCargo ["VA_CampfireKit", 1];
_fullCrate addMagazineCargo ["VA_StorageCrateKit", 1];
_fullCrate addMagazineCargo ["VA_RazorwireKit", 1];
_fullCrate addMagazineCargo ["VA_SurvDiaClosed", 1];
_fullCrate addMagazineCargo ["VA_SurvDiaOpened", 1];
_fullCrate addMagazineCargo ["VA_Wire", 1];
_fullCrate addMagazineCargo ["VA_Pipe", 1];
_fullCrate addMagazineCargo ["VA_ScrapMetal", 1];
_fullCrate addMagazineCargo ["VA_MetalCasing", 1];
_fullCrate addMagazineCargo ["VA_BarbedWire", 1];
_fullCrate addMagazineCargo ["VA_Rope", 1];
_fullCrate addMagazineCargo ["VA_Nails", 1];
_fullCrate addMagazineCargo ["VA_Glue", 1];
_fullCrate addMagazineCargo ["VA_Cement", 1];
_fullCrate addMagazineCargo ["VA_WoodenboardS", 1];
_fullCrate addMagazineCargo ["VA_WoodenboardL", 1];
_fullCrate addMagazineCargo ["VA_Screws", 1];
_fullCrate addMagazineCargo ["VA_Elecomp", 1];
_fullCrate addMagazineCargo ["VA_Rags", 1];
_fullCrate addMagazineCargo ["VA_Burlap", 1];
_fullCrate addMagazineCargo ["VA_Burlapsack", 1];
_fullCrate addMagazineCargo ["VA_Sandbag", 1];
_fullCrate addMagazineCargo ["VA_Tire", 1];
_fullCrate addMagazineCargo ["VA_TireDam", 1];
_fullCrate addMagazineCargo ["VA_TireRepairKit", 1];
_fullCrate addMagazineCargo ["VA_Hose", 1];
_fullCrate addMagazineCargo ["VA_BigGasTank", 1];
_fullCrate addMagazineCargo ["VA_smallgastank", 1];
_fullCrate addMagazineCargo ["VA_oilCan", 1];
_fullCrate addMagazineCargo ["VA_fuelCan", 1];
_fullCrate addMagazineCargo ["VA_fuelCanEmpty", 1];
_fullCrate addMagazineCargo ["VA_LightBulp", 1];
_fullCrate addMagazineCargo ["VA_CarBattery", 1];
_fullCrate addMagazineCargo ["VA_MotorParts", 1];
_fullCrate addMagazineCargo ["VAMR_RoundsSmallCal", 1];
_fullCrate addMagazineCargo ["VAMR_RoundsMedCal", 1];
_fullCrate addMagazineCargo ["VAMR_RoundsBigCal", 1];
_fullCrate addMagazineCargo ["VASG_muzzle", 1];
_fullCrate addMagazineCargo ["VA_Flashlight", 1];
};

if (hasInterface) then {
    [] spawn {
        waitUntil { !isNull player };

        GOM_fnc_actionConditionRecruit = {
            params ["_self", "_target"];

            (_target isEqualTo _self
            && {_target isEqualTo vehicle _target}
            && {cursorObject != objNull}
            && {cursorObject isKindOf "CAManBase"}
            && {alive cursorObject}
            && {side cursorObject in ([side _self] call BIS_fnc_friendlySides)}
            && {_target distance cursorObject <= 15})
        };

        player addAction [
            "Recruit",
            { [cursorObject] join group player; },
            [],
            0,
            true,
            true,
            "",
            "[_this,_target] call GOM_fnc_actionConditionRecruit"
        ];
    };
};

if (isServer) then {
    [] spawn {
        private _eastGroup = createGroup east;
        private _civilianGroup = createGroup civilian;
        private _playerSlots = [
            "player1", "player2", "player3", "player4", "player5", "player6", "player7", "player8", "player9",
            "player10", "player11", "player12", "player13", "player14", "player15", "player16", "player17", "player18"
        ];

        while {true} do {
            {
                private _playerUnit = missionNamespace getVariable [_x, objNull];
                if (!isNull _playerUnit && {alive _playerUnit} && {(side _playerUnit) != west}) then {
                    private _targetSide = civilian;
                    if ((primaryWeapon _playerUnit != "") || (handgunWeapon _playerUnit != "") || (secondaryWeapon _playerUnit != "")) then {
                        _targetSide = east;
                    };

                    if ((side _playerUnit) != _targetSide) then {
                        if (_targetSide isEqualTo east) then {
                            if (isNull _eastGroup) then {
                                _eastGroup = createGroup east;
                            };
                            [_playerUnit] joinSilent _eastGroup;
                        } else {
                            if (isNull _civilianGroup) then {
                                _civilianGroup = createGroup civilian;
                            };
                            [_playerUnit] joinSilent _civilianGroup;
                        };
                    };
                };
            } forEach _playerSlots;

            sleep 8;
        };
    };
};
