//SALVICON Royal Guard
class TCU_SALV_MSL_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_SALV_MSL";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MSL_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard SquadLeader";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_GL_BL_SALV_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_GL_BL_SALV_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MTL_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_SALV_MSL";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MTL_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard TeamLeader";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_GL_BL_SALV_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_GL_BL_SALV_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Helmet1",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Helmet1",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };

class TCU_SALV_MOF_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MOF_BLU";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Officer";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
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
                        "V_TacVest_oli",
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
	
class TCU_SALV_MRM_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MRM_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Rifleman";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MRMAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MRMAT_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Rifleman (AT)";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
						"launch_NLAW_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
						"launch_NLAW_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MMKM_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MMKM_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Marksman/Spotter";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_FAL5061Rail_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_FAL5061Rail_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(10Rnd_93x64_DMR_05_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(10Rnd_93x64_DMR_05_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MSNP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MSNP_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Sniper";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"AWC_SRS_A1_Olive_F_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "AWC_SRS_A1_Olive_F_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(CUP_10x_303_M),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(CUP_10x_303_M),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MMMG_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MMMG_BLU";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Heavy Gunner";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"CUP_lmg_M240_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_lmg_M240_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MMMGA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MMMGA";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MMMGA_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Assist MMG";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MUAV_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MUAV_BLU";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard UAV Operator";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAMMO_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAMMO";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAMMO_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Ammo Bearer";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MEN_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MEN";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MEN_BLU";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "SALVICON Royal Guard Engineer";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MMD_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MMD";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MMD_BLU";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "SALVICON Royal Guard Medic";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAAR_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAAR";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAAR_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Assist AutoRifleman";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAR_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAAR";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAR_BLU";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard AutoRifleman";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"LMG_Zafir_F_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "LMG_Zafir_F_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(150Rnd_762x54_Box),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(150Rnd_762x54_Box),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAAT";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAAT_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Assist AT Missile Tech";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAT_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAT";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAT_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard AT Missile Tech";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
						"launch_B_Titan_short_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
						"launch_B_Titan_short_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAAA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAAA";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAAA_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Assist AA Missile Tech";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MAA_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	backpack = "CADPAT_Backpack_Kitbag_SALV_MAAA";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MAA_BLU";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard AA Missile Tech";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
						"launch_B_Titan_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
						"launch_B_Titan_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_T_AUG",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "CADPAT_Cap",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MHP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MHP_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Helicopter Pilot";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "H_PilotHelmetHeli_B",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "H_PilotHelmetHeli_B",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_SALV_MFP_BLU: I_Soldier_base_F
{
	side = 1;
	faction = "TCU_SALV_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "CADPAT_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_SALV_MFP_BLU";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SALVICON Royal Guard Fighter Pilot";
	vehicleClass = "TCU_SALV_MAR_BLU";

	weapons[] = {
						"hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_auga3_bl_SALV_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_556x45_T_AUG),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_oli",
                        "H_PilotHelmetFighter_B",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_oli",
                        "H_PilotHelmetFighter_B",
						"G_Bandanna_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };