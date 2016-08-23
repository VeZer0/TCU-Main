#include "macros.hpp"
#include "cfgPatches.hpp"

class cfgFactionClasses
{
    #include "TCU_EMME\TCU_EMME_Factions.hpp"
	#include "TCU_OSEA\TCU_OSEA_Factions.hpp"
	#include "TCU_SALV\TCU_SALV_Factions.hpp"
	#include "TCU_BELK\TCU_BELK_Factions.hpp"
	#include "TCU_YOTU\TCU_YOTU_Factions.hpp"
	#include "TCU_TRID\TCU_TRID_Factions.hpp"

};

class CfgVehicleClasses
{
    #include "TCU_EMME\TCU_EMME_vehicleClasses.hpp"
	#include "TCU_OSEA\TCU_OSEA_vehicleClasses.hpp"
	#include "TCU_SALV\TCU_SALV_vehicleClasses.hpp"
	#include "TCU_YOTU\TCU_YOTU_vehicleClasses.hpp"
	#include "TCU_BELK\TCU_BELK_vehicleClasses.hpp"
	#include "TCU_TRID\TCU_TRID_vehicleClasses.hpp"

};
 
class CfgVehicles
{
	// Unit base defines:
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	
	#include "TCU_EMME\TCU_EMME_cfgVehicles_Units.hpp"
	#include "TCU_OSEA\TCU_OSEA_cfgVehicles_Units.hpp"
	#include "TCU_SALV\TCU_SALV_cfgVehicles_Units.hpp"
	#include "TCU_YOTU\TCU_YOTU_cfgVehicles_Units.hpp"
	#include "TCU_BELK\TCU_BELK_cfgVehicles_Units.hpp"
	#include "TCU_TRID\TCU_TRID_cfgVehicles_Units.hpp"

	
	// Asset base defines:
	
	class O_MRAP_02_F;
	class O_MRAP_02_hmg_F;
	class O_MRAP_02_gmg_F;
	class O_Truck_03_covered_F;
	class O_APC_Tracked_02_cannon_F;
	class O_MBT_02_cannon_F;
	class O_Heli_Light_02_F;
	class O_Heli_Transport_04_covered_F;
	class O_Heli_Transport_04_F;
	class O_Heli_Attack_02_black_F;
	class O_Heli_Light_02_unarmed_F;
	class O_Heli_Light_02_v2_F;
	class O_Plane_CAS_02_F;
	class O_T_LSV_02_unarmed_F;
	class O_T_LSV_02_armed_F;
	
	class Land_Pod_Heli_Transport_04_bench_F;
	class Land_Pod_Heli_Transport_04_medevac_F;
	class Land_Pod_Heli_Transport_04_covered_F;
	
	class B_Truck_01_covered_F;
	class B_Truck_01_transport_F;
	class B_Heli_Light_01_F;
	class B_Heli_Transport_03_F;
	class B_Heli_Transport_Gau19;
	class B_Plane_CAS_01_F;
	class B_Heli_Light_01_armed_F;
	class B_Boat_Transport_01_F;
	class B_Boat_Armed_01_minigun_F;
	class B_T_LSV_01_unarmed_F;
	class B_T_LSV_01_armed_F;
	
	class B_T_VTOL_01_armed_F;
	class B_T_VTOL_01_infantry_F;
	
	class B_G_Offroad_01_armed_F;
	
	class I_Heli_light_03_Gau19;
	class I_Heli_Transport_02_F;
	
	class C_Truck_02_transport_F;
	class C_Truck_02_covered_F;
	class C_Boat_Civil_01_F;
	class C_Offroad_01_F;
	
	class MELB_MH6M;
	class MELB_AH6M_M;
	
	class CUP_B_MV22_USMC_Rampgun;
	class CUP_B_HMMWV_Unarmed_USMC;
	class CUP_B_Dingo_GER_Wdl;
	class CUP_B_Dingo_GL_GER_Wdl;
	class CUP_B_AAV_USMC;
	class CUP_B_M2A3Bradley_USA_W;
	class CUP_B_AH64D_USA;
	class CUP_B_MV22_USMC;
	class CUP_B_A10_CAS_USA;
	class CUP_B_RHIB_USMC;
	class CUP_B_LR_Transport_GB_W;
	class CUP_B_Jackal2_L2A1_GB_W;
	class CUP_B_Jackal2_GMG_GB_W;
	class CUP_B_BAF_Coyote_L2A1_W;
	class CUP_B_FV432_Bulldog_GB_W;
	class CUP_B_FV510_GB_W;
	class CUP_B_AW159_Unarmed_GB;
	class CUP_B_Merlin_HC3A_GB;
	class CUP_B_AH1_MR_BAF;
	class CUP_B_C130J_GB;
	class CUP_B_F35B_CAS_BAF;
	class CUP_B_Ridgback_GMG_GB_D;
	class CUP_B_Mastiff_HMG_GB_D;
	class CUP_B_M1130_CV_M2_Desert;
	class CUP_B_M1128_MGS_Desert;
	class CUP_B_HMMWV_TOW_USMC;
	class CUP_B_HMMWV_M1114_USMC;
	class CUP_B_LAV25M240_USMC;
	class CUP_B_M1A2_TUSK_MG_USMC;
	class CUP_B_UH1Y_GUNSHIP_USMC;
	class CUP_B_UH60M_US;
	class CUP_B_AH1Z_Escort;
	class CUP_B_C130J_USMC;
	class CUP_B_AV8B_MK82_USMC;
	class CUP_B_HMMWV_Transport_USA;
	class CUP_B_HMMWV_M2_USA;
	class CUP_B_HMMWV_SOV_USA;
	class CUP_B_LR_Special_M2_GB_D;
	class CUP_B_LR_Special_GMG_GB_D;

	class CUP_I_SUV_ION;
	class CUP_I_SUV_Armored_ION;

	class CUP_O_GAZ_Vodnik_MedEvac_RU;
	class CUP_O_GAZ_Vodnik_PK_RU;
	class CUP_O_GAZ_Vodnik_AGS_RU;
	class CUP_O_Ural_RU;
	class CUP_O_BTR90_RU;
	class CUP_O_T72_RU;
	class CUP_O_Mi8_RU;
	class CUP_O_Mi24_P_RU;
	class CUP_O_Ka52_Blk_RU;
	class CUP_O_MI6A_RU;
	class CUP_O_SU34_LGB_RU;
	class CUP_O_UAZ_Unarmed_RU;
	class CUP_O_UAZ_MG_RU;
	class CUP_O_UAZ_AGS30_RU;

	class CUP_C_LR_Transport_CTK;

	#include "TCU_EMME\TCU_EMME_cfgVehicles_assets.hpp"
	#include "TCU_OSEA\TCU_OSEA_cfgVehicles_assets.hpp"
	#include "TCU_SALV\TCU_SALV_cfgVehicles_assets.hpp"
	#include "TCU_YOTU\TCU_YOTU_cfgVehicles_assets.hpp"
	#include "TCU_BELK\TCU_BELK_cfgVehicles_assets.hpp"
	#include "TCU_TRID\TCU_TRID_cfgVehicles_assets.hpp"

	
	// Backpack and item base defines:
	class B_AssaultPack_blk;
	class B_AssaultPack_ocamo;
	class B_Carryall_khk;
	class B_Carryall_oli;
	class MC_Backpack_Kitbag;
	class MCB_Backpack_Kitbag;
	class MCB_Backpack_Compact;
	class CADPAT_Backpack_Kitbag;
	class CUP_B_ACRPara_m95;
	class M81_Backpack_Kitbag;
	class M90_Backpack_Kitbag;
	class OGA_G_Backpack_Kitbag;
	class Tiger_Backpack_Kitbag;
	class tf_mr3000;
	class tf_anprc155;
	class tf_bussole;
	class tf_rt1523g_black;
	class tf_rt1523g_big_bwmod;
	class B_FieldPack_khk;
	class B_ViperHarness_blk_F;
	class B_ViperLightHarness_blk_F;
	class VSM_OGA_carryall;
	class VSM_OGA_Backpack_Kitbag;
	
	#include "TCU_EMME\TCU_EMME_cfgVehicles_Packs.hpp"
	#include "TCU_OSEA\TCU_OSEA_cfgVehicles_Packs.hpp"
	#include "TCU_SALV\TCU_SALV_cfgVehicles_Packs.hpp"
	#include "TCU_YOTU\TCU_YOTU_cfgVehicles_Packs.hpp"
	#include "TCU_BELK\TCU_BELK_cfgVehicles_Packs.hpp"
	#include "TCU_TRID\TCU_TRID_cfgVehicles_Packs.hpp"

	
	//Ammo Boxes defines:
	class NATO_Box_Base;
	class B_SupplyCrate_F;
	
	#include "TCU_OSEA\TCU_OSEA_cfgVehicles_AmmoBox.hpp"
	#include "TCU_SALV\TCU_SALV_cfgVehicles_AmmoBox.hpp"
	#include "TCU_EMME\TCU_EMME_cfgVehicles_AmmoBox.hpp"
	#include "TCU_YOTU\TCU_YOTU_cfgVehicles_AmmoBox.hpp"
	#include "TCU_BELK\TCU_BELK_cfgVehicles_AmmoBox.hpp"
	#include "TCU_TRID\TCU_TRID_cfgVehicles_AmmoBox.hpp"

};

class CfgWeapons
{
	// Weapon base defines:
	class arifle_TRG21_GL_F;
	class arifle_SPAR_01_GL_blk_F;
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_03_blk_F;
	class arifle_SPAR_02_blk_F;
	class CUP_srifle_LeeEnfield_rail;
	class hlc_rifle_awcovert;
	class LMG_Mk200_F;
	class LMG_Zafir_F;
	class CUP_lmg_m249_SQuantoon;
	class CUP_lmg_M60E4;
	class CUP_lmg_minimi_railed;
	class CUP_arifle_CZ805_GL;
	class CUP_arifle_CZ805_A1;
	class CUP_arifle_CZ805_B;
	class CUP_lmg_Pecheneg;
	class CUP_srifle_SVD;
	class CUP_lmg_M240;
	class CUP_lmg_UK59;
	class CUP_arifle_L85A2_NG;
	class CUP_arifle_L85A2_GL;
	class CUP_arifle_L86A2;
	class CUP_sgun_AA12;
	class MMG_01_tan_F;
	class MMG_02_sand_F;
	class hlc_rifle_G36VAG36;
	class hlc_rifle_G36CV;
	class hlc_rifle_G36TAC;
	class hlc_rifle_MG36;
	class hlc_rifle_M4;
	class hlc_rifle_RU556;
	class hlc_rifle_RPK12;
	class hlc_rifle_ak12;
	class hlc_rifle_ak12GL;
	class hlc_rifle_awmagnum_BL;
	class hlc_rifle_Bushmaster300;
	class hlc_lmg_mk48;
	class HLC_wp_M134Painless;
	class hlc_rifle_auga3_GL;
	class hlc_rifle_auga3_bl;
	class hlc_rifle_FAL5061Rail;
	class hlc_rifle_stgw57_commando;
	class prpl_famas_g2;
	class prpl_famas_g2_gl;
	class RH_g17;
	class CAG_HK416;
	class SC_SCAR_H_blk;
	class SC_SCAR_H_Long_blk;
	class SMG_01_F;
	class SMG_03_TR_black;
	class arifle_TRG21_F;
	class srifle_DMR_01_F;
	class srifle_DMR_06_olive_F;
	class srifle_DMR_02_camo_F;
	class srifle_DMR_05_blk_F;
	class srifle_DMR_04_F;
	class srifle_DMR_02_F;
	class srifle_DMR_03_F;
	class hlc_rifle_awmagnum_FDE;
	class srifle_LRR_F;
	class srifle_GM6_F;

	#include "TCU_EMME\TCU_EMME_cfgWeapons.hpp"
	#include "TCU_OSEA\TCU_OSEA_cfgWeapons.hpp"
	#include "TCU_SALV\TCU_SALV_cfgWeapons.hpp"
	#include "TCU_YOTU\TCU_YOTU_cfgWeapons.hpp"
	#include "TCU_BELK\TCU_BELK_cfgWeapons.hpp"
	#include "TCU_ZENT\TCU_ZENT_cfgWeapons.hpp"
};

class CfgGroups
{
	#include "cfgGroupsBLU.hpp"		
	#include "cfgGroupsIND.hpp"
	#include "cfgGroupsOPF.hpp"
};