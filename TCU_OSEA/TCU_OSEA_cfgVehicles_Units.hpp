//Osea Rangers
class TCU_OSEA_MSL_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_OSEA_MSL";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MSL_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger SquadLeader";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_GL_OSEA_MAR",
                        //"RH_cz75",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_GL_OSEA_MAR",
                        //"RH_cz75",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MTL_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_OSEA_MSL";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MTL_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger TeamLeader";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_GL_OSEA_MAR",
                        //"RH_cz75",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_GL_OSEA_MAR",
                        //"RH_cz75",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };

class TCU_OSEA_MOF_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MOF_BLU";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Officer";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MRM_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MRM_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Rifleman";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MRMAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MRMAT_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Rifleman (AT)";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
						"launch_NLAW_F",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
						"launch_NLAW_F",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MMKM_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MMKM_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Marksman/Spotter";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_B_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_B_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MSNP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MSNP_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Sniper";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"srifle_LRR_F_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "srifle_LRR_F_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(5Rnd_127x108_Mag),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(5Rnd_127x108_Mag),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MMMG_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MMMG_BLU";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Heavy Gunner";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"MMG_02_sand_F_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "MMG_02_sand_F_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(130Rnd_338_Mag),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(130Rnd_338_Mag),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MMMGA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MMMGA";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MMMGA_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Assist MMG";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MUAV_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MUAV_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger UAV Operator";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_Bowman_cap_Tan",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAMMO_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_oli_OSEA_MAMMO";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAMMO_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Ammo Bearer";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MEN_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_oli_OSEA_MEN";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MEN_BLU";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "OSEA Ranger Engineer";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MMD_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MMD";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MMD_BLU";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "OSEA Ranger Medic";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAAR_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MAAR";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAAR_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Assist AutoRifleman";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAR_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MAAR";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAR_BLU";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger AutoRifleman";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"hlc_lmg_mk48_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_lmg_mk48_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_100Rnd_762x51_M_M60E4),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_100Rnd_762x51_M_M60E4),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MAAT";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAAT_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Assist AT Missile Tech";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MAT";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAT_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger AT Missile Tech";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
						"launch_B_Titan_short_F",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
						"launch_B_Titan_short_F",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow",
						"RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow",
						"RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAAA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MAAA";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAAA_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Assist AA Missile Tech";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MAA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "OGA_G_Backpack_Kitbag_OSEA_MAAA";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MAA_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger AA Missile Tech";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
						"launch_B_Titan_F",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
						"launch_B_Titan_F",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow",
						"RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow",
						"RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ", "RH_16Rnd_9x19_CZ",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "VSM_OGA_OD_Helmet1",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MHP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MHP_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Helicopter Pilot";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "H_PilotHelmetHeli_B",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "H_PilotHelmetHeli_B",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_OSEA_MFP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_OSEA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "VSM_OGA_Crye_SS_od_pants_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_OSEA_MFP_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "OSEA Ranger Fighter Pilot";
	vehicleClass = "TCU_OSEA_MAR_BLU";

	weapons[] = {
						"CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_arifle_CZ805_A1_OSEA_MAR",
                        //"RH_cz75",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "H_PilotHelmetFighter_B",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "VSM_OGA_Vest_1",
                        "H_PilotHelmetFighter_B",
						"G_Lowprofile",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };