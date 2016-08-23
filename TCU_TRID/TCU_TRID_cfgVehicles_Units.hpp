//Trident PMC

//Forward Element Group
class TCU_TRID_MSL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Compact_TRID_MSL";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MSL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Element SquadLeader";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"SC_SCAR_EGLM_L_Short_blk",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_EGLM_L_Short_blk",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "H_Beret_blk",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "H_Beret_blk",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MTL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_TRID_MTL";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MTL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Element TeamLeader/JTAC";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"SC_SCAR_EGLM_L_Short_blk",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_EGLM_L_Short_blk",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
	class TCU_TRID_MMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_TRID_MMD";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMD_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "TRID Element Medic";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"SC_SCAR_L_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_L_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet2",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet2",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MEN_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MEN";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MEN_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "TRID Element Engineer";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"SC_SCAR_L_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_L_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet2",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet2",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };

class TCU_TRID_MRMAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAT";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MRMAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Element Rifleman (AT)";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"SC_SCAR_L_Short_blk",
						"CUP_launch_Mk153Mod0",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_L_Short_blk",
						"CUP_launch_Mk153Mod0",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow",
						"30Rnd_556x45_Stanag_Tracer_Yellow",
						"30Rnd_556x45_Stanag_Tracer_Yellow",
						"RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp",
						"CUP_SMAW_HEAA_M" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Tracer_Yellow",
						"30Rnd_556x45_Stanag_Tracer_Yellow",
						"30Rnd_556x45_Stanag_Tracer_Yellow",
						"RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp",
						"CUP_SMAW_HEAA_M" 
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet1",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet1",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MAR_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAR";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MAR_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Element AutoRifleman";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"hlc_lmg_minimi_railed",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_lmg_minimi_railed",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_200rnd_556x45_M_SAW),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_200rnd_556x45_M_SAW),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet1",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Helmet1",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };

	
//TRID Overwatch Unit	

class TCU_TRID_MTL_OW_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_TRID_MTL_OW";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MTL_OW_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Overwatch TeamLeader/JTAC";
	vehicleClass = "TCU_TRID_MAR_OW_IND";

	weapons[] = {
						"SC_SCAR_EGLM_H_Short_blk",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_EGLM_H_Short_blk",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MMD_OW_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_TRID_MMD_OW";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMD_OW_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "TRID Overwatch Medic";
	vehicleClass = "TCU_TRID_MAR_OW_IND";

	weapons[] = {
						"SC_SCAR_H_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_H_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MUAV_OW_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "B_UAV_01_backpack_F";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MUAV_OW_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Overwatch UAV Operator";
	vehicleClass = "TCU_TRID_MAR_OW_IND";

	weapons[] = {
						"SC_SCAR_H_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_H_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"B_UavTerminal",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"B_UavTerminal",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MMKM_OW_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Compact_TRID_MMKM_OW";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMKM_OW_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Overwatch Marksman";
	vehicleClass = "TCU_TRID_MAR_OW_IND";

	weapons[] = {
						"arifle_ARX_blk_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_ARX_blk_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_3(10Rnd_50BW_Mag_F),
						mag_3(30Rnd_65x39_caseless_green),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_3(10Rnd_50BW_Mag_F),
						mag_3(30Rnd_65x39_caseless_green),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MMMG_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAR_OW";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMMG_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Overwatch Heavy Gunner";
	vehicleClass = "TCU_TRID_MAR_OW_IND";

	weapons[] = {
						"hlc_lmg_mk48",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_lmg_mk48",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_100Rnd_762x51_M_M60E4),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_100Rnd_762x51_M_M60E4),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MAT_OW_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAT_OW";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MAT_OW_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Overwatch AT Missile Tech";
	vehicleClass = "TCU_TRID_MAR_OW_IND";

	weapons[] = {
						"SC_SCAR_H_Short_blk",
						"launch_B_Titan_short_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_H_Short_blk",
						"launch_B_Titan_short_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT"
                    };

        respawnMagazines[] = {
                        "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT"
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };


//TRID Anti-Asset Team
class TCU_TRID_MTL_AAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_TRID_MTL_AAT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MTL_AAT_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Anti-Asset TeamLeader/JTAC";
	vehicleClass = "TCU_TRID_MAR_AAT_IND";

	weapons[] = {
						"hlc_smg_9mmar",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_9mmar",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
	class TCU_TRID_MMD_AAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_TRID_MMD_AAT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMD_AAT_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "TRID Anti-Asset Medic";
	vehicleClass = "TCU_TRID_MAR_AAT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_5",
                        "MCB_Helmet2",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_5",
                        "MCB_Helmet2",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MAAT_AAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAT_AAT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MAAT_AAT_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Assist AT Missile Tech";
	vehicleClass = "TCU_TRID_MAR_AAT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAT_AAT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID AT Missile Tech";
	vehicleClass = "TCU_TRID_MAR_AAT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
						"launch_I_Titan_short_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
						"launch_I_Titan_short_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT"
                    };

        respawnMagazines[] = {
                        "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AT"
                    };
        linkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MAAA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAA_AAT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MAAA_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Assist AA Missile Tech";
	vehicleClass = "TCU_TRID_MAR_AAT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MAA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MAAA_AAT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MAA_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID AA Missile Tech";
	vehicleClass = "TCU_TRID_MAR_AAT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
						"launch_B_Titan_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
						"launch_B_Titan_F",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AA"
                    };

        respawnMagazines[] = {
                        "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5", "hlc_30Rnd_9x19_B_MP5",
						"RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911", "RH_7Rnd_45cal_m1911",
						"Titan_AA"
                    };
        linkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_5",
                        "H_HelmetCrew_B",
						"G_Balaclava_combat",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };


//TRID Logistics Team
class TCU_TRID_MTL_LT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_TRID_MTL_LT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MTL_LT_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Logistics TeamLeader/JTAC";
	vehicleClass = "TCU_TRID_MAR_LT_IND";

	weapons[] = {
						"hlc_smg_9mmar",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_9mmar",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Helmet1",
						"G_Bandanna_khk",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Helmet1",
						"G_Bandanna_khk",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
	class TCU_TRID_MMD_LT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_TRID_MMD_LT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMD_LT_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "TRID Logistics Medic";
	vehicleClass = "TCU_TRID_MAR_LT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Helmet2",
						"G_Bandanna_khk",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Helmet2",
						"G_Bandanna_khk",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MEN_LT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MEN_LT";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MEN_LT_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "TRID Logistics Engineer";
	vehicleClass = "TCU_TRID_MAR_LT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Helmet1",
						"G_Bandanna_khk",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "MCB_LBT_vest",
                        "MCB_Helmet1",
						"G_Bandanna_khk",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MHP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MHP_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Logistic Helicopter Pilot";
	vehicleClass = "TCU_TRID_MAR_LT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "G_Bandanna_khk",
                        "H_PilotHelmetHeli_B",
						"MCB_LBT_vest",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "G_Bandanna_khk",
                        "H_PilotHelmetHeli_B",
						"MCB_LBT_vest",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	
class TCU_TRID_MFP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_TS_Camo";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MFP_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Logistic Fighter Pilot";
	vehicleClass = "TCU_TRID_MAR_LT_IND";

	weapons[] = {
						"hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_smg_MP5N",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_9x19_B_MP5),
						mag_3(RH_16Rnd_9x19_CZ),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "G_Bandanna_khk",
                        "H_PilotHelmetFighter_B",
						"MCB_LBT_vest",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };
        respawnLinkedItems[] = {
                        "G_Bandanna_khk",
                        "H_PilotHelmetFighter_B",
						"MCB_LBT_vest",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"dsk_nsv"
                    };


    };
	

//TRID General Units
class TCU_TRID_MRM_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MRM_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID General Rifleman (STD)";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"SC_SCAR_L_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SC_SCAR_L_Short_blk",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_TRID_MRMB_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_Camo_SS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MRMB_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID General Rifleman (BRC)";
	vehicleClass = "TCU_TRID_MAR_IND";

	weapons[] = {
						"CUP_sgun_AA12",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_sgun_AA12",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_4(CUP_20Rnd_B_AA12_Pellets),
						mag_2(CUP_20Rnd_B_AA12_74Slug), 
						mag_2(CUP_20Rnd_B_AA12_HE),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_4(CUP_20Rnd_B_AA12_Pellets),
						mag_2(CUP_20Rnd_B_AA12_74Slug), 
						mag_2(CUP_20Rnd_B_AA12_HE),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_1",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
//TRID Spectre Unit
class TCU_TRID_G_MTL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_G_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_TRID_G_MSL";
	uniformClass = "MCB_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_G_MTL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Spectre TeamLeader";
	vehicleClass = "TCU_TRID_G_MAR_IND";

	weapons[] = {
						"hlc_rifle_G36MLIAG36",
                        "RH_fnp45",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_G36MLIAG36",
                        "RH_fnp45",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_4(ACE_100Rnd_65x39_caseless_mag_Tracer_Dim),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_4(ACE_100Rnd_65x39_caseless_mag_Tracer_Dim),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_3",
                        "H_Beret_blk",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"B_UavTerminal",
						"CUP_NVG_HMNVS"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_3",
                        "H_Beret_blk",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"B_UavTerminal",
						"CUP_NVG_HMNVS"
                    };


    };
	
class TCU_TRID_G_MRMAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_G_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_G_MAAT";
	uniformClass = "MCB_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_G_MRMAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Spectre Rifleman (AT)";
	vehicleClass = "TCU_TRID_G_MAR_IND";

	weapons[] = {
						"CAG_HK416AFG",
						"CUP_launch_Mk153Mod0",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CAG_HK416AFG",
						"CUP_launch_Mk153Mod0",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red",
						"30Rnd_556x45_Stanag_Tracer_Red",
						"30Rnd_556x45_Stanag_Tracer_Red",
						"RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp",
						"CUP_SMAW_HEAA_M" 
						
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Red",
						"30Rnd_556x45_Stanag_Tracer_Red",
						"30Rnd_556x45_Stanag_Tracer_Red",
						"RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp", "RH_15Rnd_45cal_fnp",
						"CUP_SMAW_HEAA_M" 
                    };
        linkedItems[] = {
                        "MCB_Vest_3",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_3",
                        "MCB_Cap",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };


    };
	
class TCU_TRID_G_MMKM_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_G_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_G_MXM";
	uniformClass = "MCB_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_G_MMKM_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Spectre Marksman";
	vehicleClass = "TCU_TRID_G_MAR_IND";

	weapons[] = {
						"hlc_rifle_falosw",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_falosw",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_20Rnd_762x51_T_fal),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_20Rnd_762x51_T_fal),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_3",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_3",
                        "MCB_Boonie",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };


    };
		
class TCU_TRID_G_MEN_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_G_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_G_MEN";
	uniformClass = "MCB_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_G_MEN_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "TRID Spectre Engineer";
	vehicleClass = "TCU_TRID_G_MAR_IND";

	weapons[] = {
						"hlc_rifle_honeybadger",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_honeybadger",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_3",
                        "CUP_H_PMC_Cap_EP_Grey",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_3",
                        "CUP_H_PMC_Cap_EP_Grey",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };


    };
	
class TCU_TRID_G_MMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_G_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_TRID_G_MMD";
	uniformClass = "MCB_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_G_MMD_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "TRID Spectre Medic";
	vehicleClass = "TCU_TRID_G_MAR_IND";

	weapons[] = {
						"hlc_rifle_honeybadger",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_honeybadger",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(29rnd_300BLK_STANAG_T),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_3",
                        "H_Watchcap_blk",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_3",
                        "H_Watchcap_blk",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };


    };
	
class TCU_TRID_G_MAR_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_G_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_G_MAAR";
	uniformClass = "MCB_Camo_Cyre_GS";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_G_MAR_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Spectre AutoRifleman";
	vehicleClass = "TCU_TRID_G_MAR_IND";

	weapons[] = {
						"hlc_m249_SQuantoon",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_m249_SQuantoon",
                        "RH_fnp45",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_200rnd_556x45_M_SAW),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_200rnd_556x45_M_SAW),
						mag_3(RH_15Rnd_45cal_fnp),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "MCB_Vest_3",
                        "H_Bandanna_gry",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };
        respawnLinkedItems[] = {
                        "MCB_Vest_3",
                        "H_Bandanna_gry",
						"G_Balaclava_TI_G_blk_F",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"CUP_NVG_HMNVS"
                    };


    };
	
//TRID Command Unit
class TCU_TRID_MOF_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MOF_CMD_IND";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Command Officer";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk",
                        "H_Beret_blk",
						"G_Aviator",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_TRID_MTL_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_rt1523g_big_bwmod_TRID_MTL_CMD";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MTL_CMD_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Command TeamLeader/JTAC";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
						"SMG_03C_black",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_03C_black",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_TRID_MEN_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_TRID_MEN_CMD";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MEN_CMD_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "TRID Command Engineer";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
						"CUP_sgun_AA12",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_sgun_AA12",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_4(CUP_20Rnd_B_AA12_Pellets),
						mag_2(CUP_20Rnd_B_AA12_74Slug), 
						mag_2(CUP_20Rnd_B_AA12_HE),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_4(CUP_20Rnd_B_AA12_Pellets),
						mag_2(CUP_20Rnd_B_AA12_74Slug), 
						mag_2(CUP_20Rnd_B_AA12_HE),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
	class TCU_TRID_MMD_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "MCB_Backpack_Kitbag_TRID_MMD_CMD";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MMD_CMD_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "TRID Command Medic";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
						"SMG_03C_black",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_03C_black",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_TRID_MUAV_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	backpack = "B_UAV_01_backpack_F";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MUAV_CMD_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Command UAV Operator";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
						"SMG_03C_black",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_03C_black",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"B_UavTerminal"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"B_UavTerminal"
                    };


    };	
	
	

	
class TCU_TRID_MPP_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MPP_CMD_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "TRID Command Guard (STD)";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
						"SMG_03C_black",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_03C_black",
                        //"RH_kimber_nw",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(50Rnd_570x28_SMG_03),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_TRID_MPB_CMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_TRID_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "MCB_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_TRID_MPB_CMD_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "TRID Command Guard (BRC)";
	vehicleClass = "TCU_TRID_MAR_CMD_IND";

	weapons[] = {
						"CUP_sgun_AA12",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_sgun_AA12",
                        //"RH_kimber_nw",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_4(CUP_20Rnd_B_AA12_Pellets),
						mag_2(CUP_20Rnd_B_AA12_74Slug), 
						mag_2(CUP_20Rnd_B_AA12_HE),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_4(CUP_20Rnd_B_AA12_Pellets),
						mag_2(CUP_20Rnd_B_AA12_74Slug), 
						mag_2(CUP_20Rnd_B_AA12_HE),
						//mag_3(RH_7Rnd_45cal_m1911),
						mag_2(SmokeShellBlue),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_yellow),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "MCB_Cap",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };