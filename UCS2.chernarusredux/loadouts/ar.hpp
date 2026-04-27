class ar : rifleman
{
	name    = "Automatic Rifleman";
	picture =  __EVAL(MCCPATH +"mcc\roleSelection\data\AR.paa");
	minPlayersForKit = 0;
	maxKitsInGroup = 2;
	maxKitsInSide = 999;
	allowMg = 1;
	allowAT = 0;
	allowSniper = 0;
	allowPilot = 0;
	allowCrew = 0;

	class west : west
	{
		class primary
		{
			class CUP_lmg_m249 {
	unlockLevel = 0;
	cfgname = "CUP_lmg_m249";
	magazines[]= {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",6,"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2};
	attachments1[]= {{0,""},{4,"CUP_optic_Eotech533"},{6,"CUP_optic_ElcanM145"}};
	attachments2[]= {{0,""},{9,"CUP_muzzle_snds_M16"}};
	attachments3[]= {{0,""},{1,"CUP_acc_Flashlight"}};
	attachments4[]= {};
};

			class CUP_lmg_m249_para {
	unlockLevel = 10;
	cfgname = "CUP_lmg_m249_para";
	magazines[]= {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",6,"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2};
	attachments1[]= {{0,""},{4,"CUP_optic_CompM2_Black"},{6,"CUP_optic_ACOG"}};
	attachments2[]= {{0,""}};
	attachments3[]= {{0,""},{1,"CUP_acc_ANPEQ_2"}};
	attachments4[]= {};
};


			class CUP_lmg_Mk48_wdl {
	unlockLevel = 20;
	cfgname = "CUP_lmg_Mk48_wdl";
	magazines[]= {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",6,"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",2};
	attachments1[]= {{0,""},{4,"CUP_optic_ACOG"},{6,"CUP_optic_ElcanM145"}};
	attachments2[]= {{0,""}};
	attachments3[]= {{0,""},{1,"CUP_acc_Flashlight"}};
	attachments4[]= {};
};

			class CUP_lmg_M60E4 {
	unlockLevel = 30;
	cfgname = "CUP_lmg_M60E4";
	magazines[]= {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",6,"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",2};
	attachments1[]= {{0,""},{4,"CUP_optic_ElcanM145"}};
	attachments2[]= {{0,""}};
	attachments3[]= {{0,""},{1,"CUP_acc_Flashlight"}};
	attachments4[]= {};
};

			class CUP_lmg_M240 {
	unlockLevel = 40;
	cfgname = "CUP_lmg_M240";
	magazines[]= {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",6,"CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M",2};
	attachments1[]= {{0,""},{4,"CUP_optic_ElcanM145"}};
	attachments2[]= {{0,""}};
	attachments3[]= {{0,""}};
	attachments4[]= {};
};
			class arifle_MX_SW_F {
	unlockLevel = 60;
	cfgname = "arifle_MX_SW_F";
	magazines[]= {"100Rnd_65x39_caseless_mag",6,"100Rnd_65x39_caseless_mag_Tracer",2};
	attachments1[]= {{0,""},{4,"optic_Holosight"},{6,"optic_Hamr"}};
	attachments2[]= {{0,""},{9,"muzzle_snds_H"}};
	attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
	attachments4[]= {};
};
			class arifle_MX_SW_Black_F {
	unlockLevel = 70;
	cfgname = "arifle_MX_SW_Black_F";
	magazines[]= {"100Rnd_65x39_caseless_mag",6,"100Rnd_65x39_caseless_mag_Tracer",2};
	attachments1[]= {{0,""},{4,"optic_MRCO"},{6,"optic_Hamr"}};
	attachments2[]= {{0,""},{9,"muzzle_snds_H"}};
	attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
	attachments4[]= {};
};
			class LMG_Mk200_F {
	unlockLevel = 80;
	cfgname = "LMG_Mk200_F";
	magazines[]= {"200Rnd_65x39_cased_Box",6,"200Rnd_65x39_cased_Box_Tracer",2};
	attachments1[]= {{0,""},{4,"optic_Hamr"},{6,"optic_Arco"}};
	attachments2[]= {{0,""},{9,"muzzle_snds_H"}};
	attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
	attachments4[]= {};
};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[] = {{0,"H_Bandanna_khk"},{5,  "H_Bandanna_mcamo"},{10, "H_HelmetSpecO_blk"},{15, "CUP_H_USArmy_Helmet_ECH1_Sand"},{20, "CUP_H_USArmy_Helmet_ECH2_Sand"},{30, "CUP_H_USArmy_Helmet_ECH1_Black"},{40, "CUP_H_USArmy_Helmet_ECH2_GREEN"},{50, "CUP_H_PASGTv2_WDL"},{60, "CUP_H_USArmy_Helmet_M1_plain_M81"},{70, "CUP_H_USMC_MICH2000_DEF_ESS_WDL"},{80, "CUP_H_USMC_LWH_WDL"},{90, "H_HelmetB_grass"},{100, "CUP_H_USArmy_Helmet_ECH2_DES"},};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{10, "CUP_V_B_IOTV_rifleman_OEFCP"},{13,"G_Sport_Blackred"}};
		vests[] = {{0,"V_PlateCarrier1_rgr"},{5,  "CUP_V_B_Eagle_SPC_Rifleman"},{10, "V_PlateCarrierGL_rgr"},{15, "V_TacVest_oli"},{20, "V_PlateCarrier1_blk"},{30, "CUP_V_B_Interceptor_Rifleman"},{40, "CUP_V_B_Interceptor_Rifleman_M81"},{50, "CUP_V_B_Ciras_MCam"},{60, "CUP_V_B_Ciras_Coyote_USSF"},{70, "CUP_V_B_Ciras_Olive"},{80, "CUP_V_B_Ciras_Khaki"},{90, "CUP_V_B_Eagle_SPC_TL"},{100,"CUP_V_B_Eagle_SPC_MG"}};
		backpacks[] = {	{0,   "B_Carryall_mcamo"},{10,  "B_Kitbag_mcamo"},{20,  "CUP_B_USPack_Black"},{30,  "CUP_B_AlicePack_Khaki"},{40,  "CUP_B_US_Assault_OCP"},{50,  "CUP_B_AssaultPack_Coyote"},{60,  "CUP_B_USMC_MOLLE_WDL"},{70,  "CUP_B_US_IIID_OCP"},{80,  "CUP_B_US_IIID_UCP"},{90,  "B_Carryall_oli"},{100, "B_Kitbag_rgr"},{110, "B_HMG_01_weapon_F"},{115, "B_UGV_01_backpack_F"},{120, "B_HMG_01_support_F"} };
		uniforms[] = {{0,"U_B_CombatUniform_mcam"},{5,  "CUP_U_B_USMC_MCCUU"},{10, "U_B_CombatUniform_mcam_tshirt"},{15, "U_B_CombatUniform_mcam_vest"},{20, "CUP_U_B_USArmy_ACU_OEFCP"},{30, "CUP_U_B_USArmy_UBACS"},{40, "CUP_U_B_USMC_MARPAT_WDL_RolledUp"},{50, "CUP_U_B_USMC_FROG1_WMARPAT"},{60, "CUP_U_B_USMC_FROG2_WMARPAT"},{70, "CUP_U_B_USMC_FROG3_WMARPAT"},{80, "CUP_U_B_USMC_FROG4_WMARPAT"},{90, "CUP_U_B_USMC_MCCUU_WDL"},{100,"CUP_U_B_USMC_MCCUU_RolledUp"}};
		insigna[]= {{0,""},{0,"111thID"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};

	class east : east
	{
		class primary
		{
			class LMG_Mk200_F
			{
				unlockLevel = 0;
				cfgname = "LMG_Mk200_F";
				magazines[]= {"200Rnd_65x39_cased_Box",3,"200Rnd_65x39_cased_Box_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class arifle_MX_SW_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_SW_F";
				magazines[]= {"100Rnd_65x39_caseless_mag",6,"100Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};

			class LMG_Zafir_F
			{
				unlockLevel = 23;
				cfgname = "LMG_Zafir_F";
				magazines[]= {"150Rnd_762x51_Box",3,"150Rnd_762x51_Box_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_Bandanna_khk"},{12,"H_Bandanna_mcamo"},{18,"H_HelmetSpecO_blk"}};
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
			class LMG_Mk200_F
			{
				unlockLevel = 0;
				cfgname = "LMG_Mk200_F";
				magazines[]= {"200Rnd_65x39_cased_Box",3,"200Rnd_65x39_cased_Box_Tracer",2};
				attachments1[]= {{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{0,""}};
			};

			class arifle_MX_SW_F
			{
				unlockLevel = 13;
				cfgname = "arifle_MX_SW_F";
				magazines[]= {"100Rnd_65x39_caseless_mag",6,"100Rnd_65x39_caseless_mag_Tracer",2};
				attachments1[]= {{0,""},{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{0,""}};
			};

			class LMG_Zafir_F
			{
				unlockLevel = 23;
				cfgname = "LMG_Zafir_F";
				magazines[]= {"150Rnd_762x51_Box",3,"150Rnd_762x51_Box_Tracer",2};
				attachments1[]= {{0,""},{0,""},{3,"optic_ACO_grn"},{4,"optic_Holosight"},{6,"optic_MRCO"},{8,"optic_Hamr"},{10,"optic_Arco"}};
				attachments2[]= {{0,""},{0,""},{9,"muzzle_snds_h"}};
				attachments3[]= {{0,""},{1,"acc_flashlight"},{7,"acc_pointer_IR"}};
				attachments4[]= {{0,""}};
			};
		};

		class secondary
		{

		};

		class handgun
		{
			class none
			{
				unlockLevel = 0;
				cfgname = "";
				magazines[]= {};
				attachments1[]= {};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Rook40_F
			{
				unlockLevel = 4;
				cfgname = "hgun_Rook40_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_P07_F
			{
				unlockLevel = 8;
				cfgname = "hgun_P07_F";
				magazines[]= {"16Rnd_9x21_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_L"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_ACPC2_F
			{
				unlockLevel = 12;
				cfgname = "hgun_ACPC2_F";
				magazines[]= {"9Rnd_45ACP_Mag",2};
				attachments1[]= {};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_02_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_02_F";
				magazines[]= {"6Rnd_45ACP_Cylinder",2};
				attachments1[]= {{0,""},{2,"optic_Yorris"}};
				attachments2[]= {};
				attachments3[]= {};
				attachments4[]= {};
			};

			class hgun_Pistol_heavy_01_F
			{
				unlockLevel = 16;
				cfgname = "hgun_Pistol_heavy_01_F";
				magazines[]= {"11Rnd_45ACP_Mag",2};
				attachments1[]= {{0,""},{4,"optic_MRD"}};
				attachments2[]= {{0,""},{2,"muzzle_snds_acp"}};
				attachments3[]= {};
				attachments4[]= {};
			};
		};

		items1[]={{0,""},{20,"Binocular", {}},{40,"Rangefinder", {}}};
		items2[]={{0,"SmokeShell", 2},{3,"MiniGrenade", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		items3[]={{0,"MiniGrenade", 2},{3,"SmokeShell", 2},{7,"HandGrenade", 2},{11,"SmokeShellRed", 2},{13,"SmokeShellGreen", 2},{21,"Chemlight_green", 2},{22,"Chemlight_red", 2},{23,"Chemlight_yellow", 2},{25,"B_IR_Grenade", 2}};
		generalItems[]= {{0,"ItemMap",1},{0,"ItemCompass",1},{0,"ItemWatch",1},{0,"ItemRadio",1},{0,"FirstAidKit",2}};
		nightVision[]= {{0,""},{0,"NVGoggles"}};
		headgear[]= {{0,"H_Bandanna_khk"},{12,"H_Bandanna_mcamo"},{18,"H_HelmetSpecO_blk"}};
		googles[]= {{0,""},{0,"G_Combat"},{6,"G_Tactical_Black"},{13,"G_Sport_Blackred"}};
		vests[]= {{0,"V_PlateCarrier1_rgr"},{9,"V_PlateCarrierSpec_rgr"},{13,"V_TacVest_oli"},{19,"V_TacVestIR_blk"}};
		backpacks[]= {{0,"B_AssaultPack_mcamo"},{7,"B_Kitbag_mcamo"},{14,"B_Bergen_mcamo"},{18,"B_AssaultPack_blk"}};
		uniforms[]= {{0,"U_I_CombatUniform"},{8,"U_I_CombatUniform_tshirt"}};
		insigna[]= {{0,""},{0,"TFAegis"},{0,"BI"},{0,"Curator"},{0,"MANW"}};
	};
};