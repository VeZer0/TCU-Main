//BELKIN Panzers
class TCU_BELK_MSL_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_BELK_MSL";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MSL_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer SquadLeader";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36VAG36_BELK_MAR",
                        //"RH_m1911",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36VAG36_BELK_MAR",
                        //"RH_m1911",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MTL_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_BELK_MSL";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MTL_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer TeamLeader";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36VAG36_BELK_MAR",
                        //"RH_m1911",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36VAG36_BELK_MAR",
                        //"RH_m1911",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };

class TCU_BELK_MOF_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MOF_BLU";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Officer";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MRM_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MRM_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Rifleman";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MRMAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MRMAT_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Rifleman (AT)";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
						"launch_NLAW_F",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
						"launch_NLAW_F",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MMKM_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MMKM_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Marksman/Spotter";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36TAC_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36TAC_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(10Rnd_338_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(10Rnd_338_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MSNP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MSNP_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Sniper";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"srifle_LRR_F_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "srifle_LRR_F_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(7Rnd_408_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(7Rnd_408_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MMMG_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MMMG_BLU";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Heavy Gunner";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"MMG_02_sand_F_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "MMG_02_sand_F_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(130Rnd_338_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(130Rnd_338_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MMMGA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MMMGA";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MMMGA_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Assist MMG";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MUAV_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MUAV_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer UAV Operator";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Cap",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAMMO_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_oli_BELK_MAMMO";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAMMO_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Ammo Bearer";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MEN_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_oli_BELK_MEN";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MEN_BLU";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "BELKIN Panzer Engineer";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MMD_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MMD";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MMD_BLU";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "BELKIN Panzer Medic";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAAR_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MAAR";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAAR_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Assist AutoRifleman";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAR_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MAAR";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAR_BLU";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer AutoRifleman";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_MG36_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_MG36_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_100rnd_556x45_EPR_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_100rnd_556x45_EPR_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MAAT";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAAT_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Assist AT Missile Tech";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MAT";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAT_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer AT Missile Tech";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
						"launch_B_Titan_short_F",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
						"launch_B_Titan_short_F",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAAA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MAAA";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAAA_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Assist AA Missile Tech";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MAA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "Tiger_Backpack_Kitbag_BELK_MAAA";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MAA_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer AA Missile Tech";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
						"launch_B_Titan_F",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
						"launch_B_Titan_F",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_Tracers_G36",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "Tiger_Helmet1",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MHP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MHP_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Helicopter Pilot";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "H_PilotHelmetHeli_B",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "H_PilotHelmetHeli_B",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_BELK_MFP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_BELK_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "Tiger_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_BELK_MFP_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "BELKIN Panzer Fighter Pilot";
	vehicleClass = "TCU_BELK_MAR_BLU";

	weapons[] = {
						"hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36CV_BELK_MAR",
                        //"RH_m1911",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30rnd_556x45_Tracers_G36),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "H_PilotHelmetFighter_B",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "Tiger_MBSS_PACA",
                        "H_PilotHelmetFighter_B",
						"NeckTight_TanBLK",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };