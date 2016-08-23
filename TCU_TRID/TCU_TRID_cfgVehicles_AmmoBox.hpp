
	class TCU_TRID_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] TRID Supply Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			
			class _xx_hlc_200rnd_556x45_M_SAW{
				magazine = "hlc_200rnd_556x45_M_SAW";
				count = 2;
			};

			class _xx_20Rnd_762x51_Mag {
				magazine = "20Rnd_762x51_Mag";
				count = 6;
			};
			
			class _xx_hlc_100Rnd_762x51_M_M60E4 {
				magazine = "hlc_100Rnd_762x51_M_M60E4";
				count = 3;
			};
			
			class _xx_RH_RH_7Rnd_45cal_m1911 {
				magazine = "RH_7Rnd_45cal_m1911";
				count = 6;
			};
			
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 6;
			};
			
			class _xx_SmokeShellOrange {
				magazine = "SmokeShellOrange";
				count = 2;
			};

			class _XX_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 2;
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F{
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 2;
			};

			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 5;
			};

			class _xx_ACE_HandFlare_yellow {
				magazine = "ACE_HandFlare_yellow";
				count = 2;
			};
			
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
				count = 2;
			};
			
			class _xx_Laserbatteries {
				magazine = "Laserbatteries";
				count = 2;
			};
			
			class _xx_CUP_SMAW_HEAA_M {
				magazine = "CUP_SMAW_HEAA_M";
				count = 2;
			};

		};
		
		class TransportItems {

			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 20;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 10;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 10;
			};

			class _xx_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 5;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 5;
			};
		};
		
		class Transportweapons {
			
			class _xx_SC_SCAR_L_Short_blk {
				weapon = "SC_SCAR_L_Short_blk";
				count = 2;
			};
			
			class _xx_CUP_launch_Mk153Mod0 {
				weapon = "CUP_launch_Mk153Mod0";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_CUP_B_ACRPara_m95 {
				backpack = "CUP_B_ACRPara_m95";
				count = 2;
			};
			class _xx_tf_rt1523g_big_bwmod {
				backpack = "tf_rt1523g_big_bwmod";
				count = 1;
			};
		};
	};
	
	class TCU_TRID_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] TRID Weapons Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			
			class _xx_hlc_200rnd_556x45_M_SAW {
				magazine = "hlc_200rnd_556x45_M_SAW";
				count = 3;
			};
			
			class _xx_RH_7Rnd_45cal_m1911 {
				magazine = "RH_7Rnd_45cal_m1911";
				count = 6;
			};
			
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};

		};
		
		class Transportweapons {
			
			class _xx_SC_SCAR_EGLM_L_Short_blk {
				weapon = "SC_SCAR_EGLM_L_Short_blk";
				count = 2;
			};
			
			class _xx_SC_SCAR_L_Short_blk {
				weapon = "SC_SCAR_L_Short_blk";
				count = 1;
			};
			
			class _xx_hlc_lmg_minimi_railed {
				weapon = "hlc_lmg_minimi_railed";
				count = 1;
			};
			
			class _xx_launch_NLAW_F {
				weapon = "launch_NLAW_F";
				count = 2;
			};
		};
	};
	
	