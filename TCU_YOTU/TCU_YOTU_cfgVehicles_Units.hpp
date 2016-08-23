//Yotubonia Special Purpose Branch
class TCU_YOTU_MSL_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "tf_mr3000_YOTU_MSL";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MSL_OPF";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB SquadLeader";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12GL_YOTU_MAR",
                        //"RH_mateba",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12GL_YOTU_MAR",
                        //"RH_mateba",
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MTL_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "tf_mr3000_YOTU_MSL";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MTL_OPF";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB TeamLeader";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12GL_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12GL_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };

class TCU_YOTU_MOF_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MOF_OPF";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Officer";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "Laserdesignator",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(Laserbatteries),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
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
                        "SURPAT_Vest_4",
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
	
class TCU_YOTU_MRM_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MRM_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Rifleman";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MRMAT_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MRMAT_OPF";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Rifleman (AT)";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
						"CUP_launch_M136",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
						"CUP_launch_M136",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MMKM_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MMKM_OPF";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Marksman/Spotter";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"CUP_srifle_SVD_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_srifle_SVD_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(CUP_10Rnd_762x54_SVD_M),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(CUP_10Rnd_762x54_SVD_M),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MSNP_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_I_FullGhillie_sard";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MSNP_OPF";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Sniper";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_awmagnum_BL_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_awmagnum_BL_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(10Rnd_127x54_Mag),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(10Rnd_127x54_Mag),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MMMG_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MMMG_OPF";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Heavy Gunner";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"CUP_lmg_Pecheneg_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "CUP_lmg_Pecheneg_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MMMGA_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MMMGA";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MMMGA_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Assist MMG";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MUAV_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "I_UAV_01_backpack_F";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MUAV_OPF";
	icon = "iconManRecon";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB UAV Operator";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Cap",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"I_UavTerminal",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAMMO_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAMMO";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAMMO_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Ammo Bearer";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MEN_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MEN";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MEN_OPF";
	icon = "iconManEngineer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = true;
    engineer = true;
    attendant = 0;
    displayName = "Yotubonia SPB Engineer";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MMD_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MMD";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MMD_OPF";
	icon = "iconManMedic";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 1;
    displayName = "Yotubonia SPB Medic";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAAR_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAAR";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAAR_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Assist AutoRifleman";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAR_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAR";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAR_OPF";
	icon = "iconManMG";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB AutoRifleman";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_RPK12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_RPK12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_2(hlc_60Rnd_545x39_t_rpk),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_2(hlc_60Rnd_545x39_t_rpk),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAAT_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAAT";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAAT_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Assist AT Missile Tech";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAT_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAT";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAT_OPF";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB AT Missile Tech";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
						"launch_I_Titan_short_F",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
						"launch_I_Titan_short_F",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak",
						"RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak",
						"RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag",
						"Titan_AT",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAAA_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAAA";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAAA_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Assist AA Missile Tech";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MAA_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	backpack = "CUP_B_ACRPara_m95_YOTU_MAAA";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MAA_OPF";
	icon = "iconManAT";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB AA Missile Tech";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
						"launch_I_Titan_F",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
						"launch_I_Titan_F",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak",
						"RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };

        respawnMagazines[] = {
                        "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_t_ak",
						"RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag", "RH_6Rnd_44_Mag",
						"Titan_AA",
						"SmokeShellBlue", "SmokeShellBlue",
						"Chemlight_blue", "Chemlight_blue",
						"ACE_HandFlare_yellow", "ACE_HandFlare_yellow",
						"HandGrenade", "HandGrenade",
						"ACE_M84", "ACE_M84" 
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "SURPAT_Helmet3",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MHP_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MHP_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Helicopter Pilot";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "H_PilotHelmetHeli_O",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "H_PilotHelmetHeli_O",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };
	
class TCU_YOTU_MFP_OPF: I_Soldier_base_F
{
	side = 0;
	faction = "TCU_YOTU_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "SURPAT_Camo_Cyre";
    author = "VeZer0";
    _generalMacro = "TCU_YOTU_MFP_OPF";
	icon = "iconMan";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Yotubonia SPB Fighter Pilot";
	vehicleClass = "TCU_YOTU_MAR_OPF";

	weapons[] = {
						"hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hlc_rifle_ak12_YOTU_MAR",
                        ////mag_3(RH_6Rnd_44_Mag),
                        "ACE_Vector",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(hlc_30Rnd_545x39_t_ak),
						//mag_3(RH_6Rnd_44_Mag),
						mag_2(SmokeShellRed),
						mag_2(Chemlight_Red),
						mag_2(ACE_HandFlare_Red),
						mag_2(HandGrenade),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "SURPAT_Vest_4",
                        "H_PilotHelmetFighter_O",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };
        respawnLinkedItems[] = {
                        "SURPAT_Vest_4",
                        "H_PilotHelmetFighter_O",
						"G_Balaclava_oli",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS",
						"NVGoggles_INDEP"
                    };


    };