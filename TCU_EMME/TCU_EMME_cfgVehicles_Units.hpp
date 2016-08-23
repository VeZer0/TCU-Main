//Emmeria Marines
class TCU_EMME_MSL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_anprc155_EMME_MSL";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MSL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine SquadLeader";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_gl_EMME_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_gl_EMME_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MTL_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "tf_anprc155_EMME_MSL";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MTL_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine TeamLeader";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_gl_EMME_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_gl_EMME_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };

class TCU_EMME_MOF_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MOF_IND";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Officer";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
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
                        "M90_Vest_1",
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
	
class TCU_EMME_MRM_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "M90_Camo_BDU";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MRM_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Rifleman";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MRMAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MRMAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Rifleman (AT)";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
						"launch_NLAW_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
						"launch_NLAW_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MMKM_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MMKM_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Marksman/Spotter";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"srifle_DMR_06_olive_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "srifle_DMR_06_olive_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(20Rnd_762x51_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MSNP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MSNP_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Sniper";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"srifle_GM6_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "srifle_GM6_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(5Rnd_127x108_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(5Rnd_127x108_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MMMG_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MMMG_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Heavy Gunner";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"MMG_01_tan_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "MMG_01_tan_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(150Rnd_93x64_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(150Rnd_93x64_Mag),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MMMGA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MMMGA";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MMMGA_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Assist MMG";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MUAV_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MUAV_IND";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine UAV Operator";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Boonie",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAMMO_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_oli_EMME_MAMMO";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAMMO_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Ammo Bearer";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MEN_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "B_Carryall_oli_EMME_MEN";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MEN_IND";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "Emmeria Marine Engineer";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MMD_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MMD";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MMD_IND";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "Emmeria Marine Medic";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAAR_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MAAR";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAAR_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Assist AutoRifleman";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAR_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MAR";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAR_IND";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine AutoRifleman";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"LMG_Zafir_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "LMG_Zafir_F_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MAAT";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAAT_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Assist AT Missile Tech";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAT_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MAT";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAT_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine AT Missile Tech";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
						"launch_I_Titan_short_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
						"launch_I_Titan_short_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAAA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MAAA";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAAA_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Assist AA Missile Tech";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MAA_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	backpack = "M90_Backpack_Kitbag_EMME_MAAA";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MAA_IND";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine AA Missile Tech";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
						"launch_I_Titan_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
						"launch_I_Titan_F",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Green",
						"RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9", "RH_15Rnd_9x19_M9",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "M90_Helmet1",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MHP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MHP_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Helicopter Pilot";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "H_PilotHelmetHeli_I",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "H_PilotHelmetHeli_I",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_EMME_MFP_IND: I_Soldier_base_F
{
	side = 2;
	faction = "TCU_EMME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "M90_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_EMME_MFP_IND";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Emmeria Marine Fighter Pilot";
	vehicleClass = "TCU_EMME_MAR_IND";

	weapons[] = {
						"prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "prpl_famas_g2_EMME_MAR",
                        //"RH_m9",
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						//mag_3(RH_15Rnd_9x19_M9),
						mag_2(SmokeShellGreen),
						mag_2(Chemlight_green),
						mag_2(ACE_HandFlare_green),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "M90_Vest_1",
                        "H_PilotHelmetFighter_I",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "M90_Vest_1",
                        "H_PilotHelmetFighter_I",
						"PU_shemagh_OD",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };