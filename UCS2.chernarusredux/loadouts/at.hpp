class at : rifleman
{
	name    = "Anti-Tank";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\AT.paa");
	minPlayersForKit = 0;
	maxKitsInGroup = 2;
	maxKitsInSide = 999;
	allowMg = 0;
	allowAT = 1;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{
		class primary
		{
			class CUP_arifle_M16A2 {
    unlockLevel = 0;
    cfgname = "CUP_arifle_M16A2";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_CompM2_Black"}};
    attachments2[]= {{0,""},{9,"CUP_muzzle_snds_M16"}};
    attachments3[]= {{0,""}};
    attachments4[]= {};
			};

			class CUP_arifle_M4A1 {
    unlockLevel = 10;
    cfgname = "CUP_arifle_M4A1";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{3,"CUP_optic_CompM4"},{6,"CUP_optic_ACOG"}};
    attachments2[]= {{0,""},{9,"CUP_muzzle_snds_M16"}};
    attachments3[]= {{0,""},{1,"CUP_acc_Flashlight"}};
    attachments4[]= {};
};

			class CUP_arifle_Mk16_STD {
    unlockLevel = 20;
    cfgname = "CUP_arifle_Mk16_STD";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_ACOG"}};
    attachments2[]= {{0,""},{9,"CUP_muzzle_snds_SCAR_L"}};
    attachments3[]= {{0,""},{1,"CUP_acc_ANPEQ_2"}};
    attachments4[]= {};
};

			class CUP_arifle_XM8_Railed {
    unlockLevel = 30;
    cfgname = "CUP_arifle_XM8_Railed";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_CompM2_Black"}};
    attachments2[]= {{0,""}};
    attachments3[]= {{0,""},{1,"CUP_acc_XM8_light_module"}};
    attachments4[]= {};
};


			class CUP_arifle_G36K {
    unlockLevel = 40;
    cfgname = "CUP_arifle_G36K";
    magazines[]= {"CUP_30Rnd_556x45_G36",8,"CUP_30Rnd_TE1_Red_Tracer_556x45_G36",2};
    attachments1[]= {{0,""},{4,"CUP_optic_RCO"}};
    attachments2[]= {{0,""}};
    attachments3[]= {{0,""}};
    attachments4[]= {};
};


			class CUP_arifle_L85A2 {
    unlockLevel = 50;
    cfgname = "CUP_arifle_L85A2";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_SUSAT"}};
    attachments2[]= {{0,""},{9,"CUP_muzzle_snds_L85"}};
    attachments3[]= {{0,""}};
    attachments4[]= {};
};

			class arifle_TRG20_F {
    unlockLevel = 60;
    cfgname = "arifle_TRG20_F";
    magazines[]= {"30Rnd_556x45_Stanag",8,"30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"optic_Holosight"},{6,"optic_MRCO"}};
    attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
    attachments3[]= {{0,""},{1,"acc_flashlight"}};
    attachments4[]= {};
};

			class arifle_MX_F {
    unlockLevel = 70;
    cfgname = "arifle_MX_F";
    magazines[]= {"30Rnd_65x39_caseless_mag",8,"30Rnd_65x39_caseless_mag_Tracer",2};
    attachments1[]= {{0,""},{4,"optic_Hamr"},{6,"optic_Arco"}};
    attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
    attachments3[]= {{0,""},{1,"acc_flashlight"}};
    attachments4[]= {};
};

			class CUP_arifle_Mk16_CQC {
    unlockLevel = 80;
    cfgname = "CUP_arifle_Mk16_CQC";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_Eotech533"}};
    attachments2[]= {{0,""}};
    attachments3[]= {{0,""},{1,"CUP_acc_ANPEQ_2"}};
    attachments4[]= {};
};

			class CUP_arifle_M4A1_BUIS_GL {
    unlockLevel = 90;
    cfgname = "CUP_arifle_M4A1_BUIS_GL";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_ElcanM145"}};
    attachments2[]= {{0,""}};
    attachments3[]= {{0,""},{1,"CUP_acc_Flashlight"}};
    attachments4[]= {};
};

			class CUP_arifle_XM8_Compact {
    unlockLevel = 100;
    cfgname = "CUP_arifle_XM8_Compact";
    magazines[]= {"CUP_30Rnd_556x45_Stanag",8,"CUP_30Rnd_556x45_Stanag_Tracer_Red",2};
    attachments1[]= {{0,""},{4,"CUP_optic_HoloWdl"}};
    attachments2[]= {{0,""}};
    attachments3[]= {{0,""}};
    attachments4[]= {};
};
		};

		class secondary
		{
			class CUP_launch_M72A6
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_M72A6";
				magazines[]= {"CBA_FakeLauncherMagazine"};
			};

			class CUP_launch_M72A6_Special
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_M72A6_Special";
				magazines[]= {"CBA_FakeLauncherMagazine"};
			};

			class CUP_launch_M136
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_M136";
				magazines[]= {"CBA_FakeLauncherMagazine"};
			};

			class CUP_launch_MAAWS
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_MAAWS";
				magazines[]= {"CUP_MAAWS_HEAT_M",2,"CUP_MAAWS_HEDP_M",2};
			};

			class CUP_launch_MAAWS_Scope
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_MAAWS_Scope";
				magazines[]= {"CUP_MAAWS_HEAT_M", 1,"CUP_MAAWS_HEDP_M", 1,"CUP_MAAWS_HE_44_M", 1,"CUP_MAAWS_HEAT_55_M", 1,"CUP_MAAWS_HEAT_75_M", 1};
			};

			class CUP_launch_Mk153Mod0
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_Mk153Mod0";
				magazines[]= {"CUP_SMAW_HEAA_M", 1, "CUP_SMAW_HEDP_M", 1, "CUP_SMAW_NE_M", 1};
			};

			class CUP_launch_M47
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_M47";
				magazines[]= {"CBA_FakeLauncherMagazine","CUP_Dragon_EP1_M", 2};
			};

			class CUP_launch_Javelin
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_Javelin";
				magazines[]= {"CBA_FakeLauncherMagazine","CUP_Javelin_M", 2};
			};

			class CUP_launch_NLAW
			{
				unlockLevel = 1;
				cfgname = "CUP_launch_NLAW";
				magazines[]= {"CBA_FakeLauncherMagazine"};
			};

			class CUP_launch_FIM92Stinger
			{
				unlockLevel = 2;
				cfgname = "CUP_launch_FIM92Stinger";
				magazines[]= {"CBA_FakeLauncherMagazine"};
			};

			class launch_NLAW_F
			{
				unlockLevel = 2;
				cfgname = "launch_NLAW_F";
				magazines[]= {"NLAW_F", 2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_short_F
			{
				unlockLevel = 1;
				cfgname = "launch_B_Titan_short_F";
				magazines[]= {"Titan_AT", 2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_F
			{
				unlockLevel = 1;
				cfgname = "launch_B_Titan_F";
				magazines[]= {"Titan_AA", 2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		class handgun
		{

		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[] = {{0,"H_Bandanna_khk"},{5,  "H_Bandanna_mcamo"},{10, "H_HelmetSpecO_blk"},{15, "CUP_H_USArmy_Helmet_ECH1_Sand"},{20, "CUP_H_USArmy_Helmet_ECH2_Sand"},{30, "CUP_H_USArmy_Helmet_ECH1_Black"},{40, "CUP_H_USArmy_Helmet_ECH2_GREEN"},{50, "CUP_H_PASGTv2_WDL"},{60, "CUP_H_USArmy_Helmet_M1_plain_M81"},{70, "CUP_H_USMC_MICH2000_DEF_ESS_WDL"},{80, "CUP_H_USMC_LWH_WDL"},{90, "H_HelmetB_grass"},{100, "CUP_H_USArmy_Helmet_ECH2_DES"},};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{10, "CUP_V_B_IOTV_rifleman_OEFCP"},{13,"G_Sport_Blackred"}};
		vests[] = {{0,"V_PlateCarrier1_rgr"},{5,  "CUP_V_B_Eagle_SPC_Rifleman"},{10, "V_PlateCarrierGL_rgr"},{15, "V_TacVest_oli"},{20, "V_PlateCarrier1_blk"},{30, "CUP_V_B_Interceptor_Rifleman"},{40, "CUP_V_B_Interceptor_Rifleman_M81"},{50, "CUP_V_B_Ciras_MCam"},{60, "CUP_V_B_Ciras_Coyote_USSF"},{70, "CUP_V_B_Ciras_Olive"},{80, "CUP_V_B_Ciras_Khaki"},{90, "CUP_V_B_Eagle_SPC_TL"},{100,"CUP_V_B_Eagle_SPC_MG"}};
		backpacks[] = {	{0,  "B_AssaultPack_mcamo"},{0,  "B_Carryall_mcamo"},{10, "CUP_B_Motherlode_MTP"},{20, "B_Kitbag_mcamo"},{30, "B_Bergen_mcamo"},{40, "B_AssaultPack_blk"},{50, "CUP_B_USPack_Coyote"},{60, "B_Carryall_oli"},{70, "CUP_B_AlicePack_Khaki"},{80, "B_UAV_01_backpack_F"},{90, "B_UGV_01_backpack_F"},{100, "CUP_B_USMC_MOLLE_WDL"},{110, "B_Static_AT_01_weapon_F"},{120, "B_Static_AT_01_support_F"}};
		uniforms[] = {{0,"U_B_CombatUniform_mcam"},{5,  "CUP_U_B_USMC_MCCUU"},{10, "U_B_CombatUniform_mcam_tshirt"},{15, "U_B_CombatUniform_mcam_vest"},{20, "CUP_U_B_USArmy_ACU_OEFCP"},{30, "CUP_U_B_USArmy_UBACS"},{40, "CUP_U_B_USMC_MARPAT_WDL_RolledUp"},{50, "CUP_U_B_USMC_FROG1_WMARPAT"},{60, "CUP_U_B_USMC_FROG2_WMARPAT"},{70, "CUP_U_B_USMC_FROG3_WMARPAT"},{80, "CUP_U_B_USMC_FROG4_WMARPAT"},{90, "CUP_U_B_USMC_MCCUU_WDL"},{100,"CUP_U_B_USMC_MCCUU_RolledUp"}};
		insigna[]= {{0,""},{0,"111thID"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class east : east
	{
		class primary
		{
			class arifle_Mk20_F
			{
				unlockLevel = 0;
				cfgname = "arifle_Mk20_F";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Green",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_Katiba_F
			{
				unlockLevel = 13;
				cfgname = "arifle_Katiba_F";
				magazines[]= {"30Rnd_65x39_caseless_green",9,"30Rnd_65x39_caseless_green_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_MX_Black_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_Black_F";
				magazines[]= {"30Rnd_65x39_caseless_mag",9,"30Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{
			class launch_RPG32_F
			{
				unlockLevel = 0;
				cfgname = "launch_RPG32_F";
				magazines[]= {"RPG32_F",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_F
			{
				unlockLevel = 15;
				cfgname = "launch_B_Titan_F";
				magazines[]= {"Titan_AA",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_short_F
			{
				unlockLevel = 25;
				cfgname = "launch_B_Titan_short_F";
				magazines[]= {"Titan_AT",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		class handgun
		{

		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_HelmetO_ocamo"},{12,"H_HelmetO_oucamo"},{18,"H_HelmetSpecO_blk"}};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{13,"G_Sport_Blackred"}};
		vests[]= {{0,"V_BandollierB_khk"},{9,"V_HarnessOGL_gry"},{13,"V_HarnessOSpec_gry"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_AssaultPack_ocamo"},{7,"B_FieldPack_ocamo"},{14,"B_Carryall_ocamo"},{18,"B_FieldPack_blk"}};
		uniforms[]= {{0,"U_O_CombatUniform_ocamo"},{8,"U_O_CombatUniform_oucamo"},{15,"U_O_OfficerUniform_ocamo"}};
		insigna[]= {{0,""},{0,"GryffinRegiment"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class guer : guer
	{
		class primary
		{
			class arifle_Mk20_F
			{
				unlockLevel = 0;
				cfgname = "arifle_Mk20_F";
				magazines[]= {"30Rnd_556x45_Stanag",9,"30Rnd_556x45_Stanag_Tracer_Green",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_MX_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_F";
				magazines[]= {"30Rnd_65x39_caseless_mag",9,"30Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_MX_Black_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_Black_F";
				magazines[]= {"30Rnd_65x39_caseless_mag",9,"30Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_Aco"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_M"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{
			class launch_NLAW_F
			{
				unlockLevel = 0;
				cfgname = "launch_NLAW_F";
				magazines[]= {"NLAW_F",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_F
			{
				unlockLevel = 15;
				cfgname = "launch_B_Titan_F";
				magazines[]= {"Titan_AA",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class launch_B_Titan_short_F
			{
				unlockLevel = 25;
				cfgname = "launch_B_Titan_short_F";
				magazines[]= {"Titan_AT",2};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		class handgun
		{

		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_HelmetIA"},{12,"H_HelmetIA_net"},{18,"H_HelmetIA_camo"}};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{13,"G_Sport_Blackred"}};
		vests[]= {{0,"V_PlateCarrier1_rgr"},{9,"V_PlateCarrierSpec_rgr"},{13,"V_TacVest_oli"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_AssaultPack_mcamo"},{7,"B_Kitbag_mcamo"},{14,"B_Bergen_mcamo"},{18,"B_AssaultPack_blk"}};
		uniforms[]= {{0,"U_I_CombatUniform"},{8,"U_I_CombatUniform_tshirt"}};
		insigna[]= {{0,""},{0,"TFAegis"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};
};