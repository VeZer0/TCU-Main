		
	
	class TCU_YOTU_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Yotubonia SPB Supply Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
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
			
			class _xx_150Rnd_762x54_Box {
				magazine = "150Rnd_762x54_Box";
				count = 2;
			};
			
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M {
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 2;
			};

			class _xx_hlc_5rnd_300WM_FMJ_AWM {
				magazine = "hlc_5rnd_300WM_FMJ_AWM";
				count = 6;
			};
			
			class _xx_10Rnd_338_Mag {
				magazine = "10Rnd_338_Mag";
				count = 6;
			};
			
			class _xx_RH_6Rnd_44_Mag {
				magazine = "RH_6Rnd_44_Mag";
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

			class _XX_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 2;
			};
			
			class _xx_hlc_VOG25_AK {
				magazine = "hlc_VOG25_AK";
				count = 6;
			};
			
			class _xx_hlc_GRD_Red {
				magazine = "hlc_GRD_Red";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 2;
			};

			class _xx_Chemlight_Red {
				magazine = "Chemlight_Red";
				count = 5;
			};

			class _xx_ACE_HandFlare_Red {
				magazine = "ACE_HandFlare_Red";
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
			
			class _xx_hlc_rifle_ak12_YOTU_MAR {
				weapon = "hlc_rifle_ak12_YOTU_MAR";
				count = 2;
			};
			
			class _xx_CUP_launch_M136 {
				weapon = "CUP_launch_M136";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_CUP_B_ACRPara_m95 {
				backpack = "CUP_B_ACRPara_m95";
				count = 2;
			};
			class _xx_tf_mr3000 {
				backpack = "tf_mr3000";
				count = 1;
			};
		};
	};
	
	class TCU_YOTU_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Yotubonia SPB Weapons Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
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
			
			class _xx_150Rnd_762x54_Box {
				magazine = "150Rnd_762x54_Box";
				count = 2;
			};

			class _xx_hlc_5rnd_300WM_FMJ_AWM {
				magazine = "hlc_5rnd_300WM_FMJ_AWM";
				count = 6;
			};
			
			class _xx_RH_6Rnd_44_Mag {
				magazine = "RH_6Rnd_44_Mag";
				count = 6;
			};
			
			class _xx_hlc_VOG25_AK {
				magazine = "hlc_VOG25_AK";
				count = 6;
			};
			
			class _xx_hlc_GRD_Red {
				magazine = "hlc_GRD_Red";
				count = 2;
			};

			class _XX_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 2;
			};		

		};
		
		class Transportweapons {
			
			class _xx_hlc_rifle_ak12_YOTU_MAR {
				weapon = "hlc_rifle_ak12_YOTU_MAR";
				count = 2;
			};
			
			class _xx_hlc_rifle_ak12GL_YOTU_MAR {
				weapon = "hlc_rifle_ak12GL_YOTU_MAR";
				count = 1;
			};
			
			class _xx_hlc_rifle_RPK12_YOTU_MAR {
				weapon = "hlc_rifle_RPK12_YOTU_MAR";
				count = 1;
			};
		};
	};
	
	
	
	
	