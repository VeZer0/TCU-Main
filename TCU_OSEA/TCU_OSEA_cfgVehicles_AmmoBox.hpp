
	class TCU_OSEA_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] OSEA Supply Crate";
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
			
			class _xx_130Rnd_338_Mag{
				magazine = "130Rnd_338_Mag";
				count = 2;
			};

			class _xx_7Rnd_408_Mag {
				magazine = "7Rnd_408_Mag";
				count = 6;
			};
			
			class _xx_hlc_100Rnd_762x51_M_M60E4 {
				magazine = "hlc_100Rnd_762x51_M_M60E4";
				count = 3;
			};
			
			class _xx_RH_15Rnd_9x19_SIG {
				magazine = "RH_15Rnd_9x19_SIG";
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
			
			class _xx_CUP_arifle_CZ805_A1_OSEA_MAR {
				weapon = "CUP_arifle_CZ805_A1_OSEA_MAR";
				count = 2;
			};
			
			class _xx_launch_NLAW_F {
				weapon = "launch_NLAW_F";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_OGA_G_Backpack_Kitbag {
				backpack = "OGA_G_Backpack_Kitbag";
				count = 2;
			};
			class _xx_tf_rt1523g_big_bwmod {
				backpack = "tf_rt1523g_big_bwmod";
				count = 1;
			};
		};
	};
	
	class TCU_OSEA_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] OSEA Weapons Crate";
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
			
			class _xx_hlc_100Rnd_762x51_M_M60E4 {
				magazine = "hlc_100Rnd_762x51_M_M60E4";
				count = 3;
			};
			
			class _xx_RH_15Rnd_9x19_SIG {
				magazine = "RH_15Rnd_9x19_SIG";
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
			
			class _xx_CUP_arifle_CZ805_A1_OSEA_MAR {
				weapon = "CUP_arifle_CZ805_A1_OSEA_MAR";
				count = 2;
			};
			
			class _xx_CUP_arifle_CZ805_GL_OSEA_MAR {
				weapon = "CUP_arifle_CZ805_GL_OSEA_MAR";
				count = 1;
			};
			
			class _xx_hlc_lmg_mk48_OSEA_MAR {
				weapon = "hlc_lmg_mk48_OSEA_MAR";
				count = 1;
			};
			
			class _xx_launch_NLAW_F {
				weapon = "launch_NLAW_F";
				count = 2;
			};
		};
	};