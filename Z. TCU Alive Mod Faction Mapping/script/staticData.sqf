// TCU OSEA Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_osea_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_osea_mappings, "Side", "WEST"] call ALIVE_fnc_hashSet;
[tcu_osea_mappings, "GroupSideName", "WEST"] call ALIVE_fnc_hashSet;
[tcu_osea_mappings, "FactionName", "TCU_OSEA_BLU"] call ALIVE_fnc_hashSet;
[tcu_osea_mappings, "GroupFactionName", "TCU_OSEA_MAR"] call ALIVE_fnc_hashSet;
 
tcu_osea_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_osea_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_osea_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_osea_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_osea_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_osea_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_osea_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_osea_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_osea_mappings, "GroupFactionTypes", tcu_osea_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_OSEA_BLU", tcu_osea_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_OSEA_BLU", ["TCU_OSEA_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------

// TCU TRID PMC
// ---------------------------------------------------------------------------------------------------------------------
tcu_TRID_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_TRID_mappings, "Side", "WEST"] call ALIVE_fnc_hashSet;
[tcu_TRID_mappings, "GroupSideName", "WEST"] call ALIVE_fnc_hashSet;
[tcu_TRID_mappings, "FactionName", "TCU_TRID_BLU"] call ALIVE_fnc_hashSet;
[tcu_TRID_mappings, "GroupFactionName", "TCU_TRID_MAR"] call ALIVE_fnc_hashSet;
 
tcu_TRID_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_TRID_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_TRID_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_TRID_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_TRID_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_TRID_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_TRID_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_TRID_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_TRID_mappings, "GroupFactionTypes", tcu_TRID_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_TRID_BLU", tcu_TRID_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_TRID_BLU", ["TCU_TRID_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------
 
// TCU BELK Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_belk_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_belk_mappings, "Side", "WEST"] call ALIVE_fnc_hashSet;
[tcu_belk_mappings, "GroupSideName", "WEST"] call ALIVE_fnc_hashSet;
[tcu_belk_mappings, "FactionName", "TCU_SALV_BLU"] call ALIVE_fnc_hashSet;
[tcu_belk_mappings, "GroupFactionName", "TCU_SALV_BLU"] call ALIVE_fnc_hashSet;
 
tcu_belk_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_belk_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_belk_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_belk_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_belk_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_belk_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_belk_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_belk_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_belk_mappings, "GroupFactionTypes", tcu_belk_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_SALV_BLU", tcu_belk_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_SALV_BLU", ["TCU_BELK_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------

// TCU EMME Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_emme_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_emme_mappings, "Side", "INDEP"] call ALIVE_fnc_hashSet;
[tcu_emme_mappings, "GroupSideName", "INDEP"] call ALIVE_fnc_hashSet;
[tcu_emme_mappings, "FactionName", "TCU_EMME_IND"] call ALIVE_fnc_hashSet;
[tcu_emme_mappings, "GroupFactionName", "TCU_EMME_IND"] call ALIVE_fnc_hashSet;
 
tcu_emme_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_emme_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_emme_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_emme_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_emme_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_emme_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_emme_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_emme_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_emme_mappings, "GroupFactionTypes", tcu_emme_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_EMME_IND", tcu_emme_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_EMME_IND", ["TCU_EMME_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------

// TCU Yotubana Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_yotu_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_yotu_mappings, "Side", "EAST"] call ALIVE_fnc_hashSet;
[tcu_yotu_mappings, "GroupSideName", "EAST"] call ALIVE_fnc_hashSet;
[tcu_yotu_mappings, "FactionName", "TCU_YOTU_OPF"] call ALIVE_fnc_hashSet;
[tcu_yotu_mappings, "GroupFactionName", "TCU_YOTU_OPF"] call ALIVE_fnc_hashSet;
 
tcu_yotu_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_yotu_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_yotu_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_yotu_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_yotu_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_yotu_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_yotu_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_yotu_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_yotu_mappings, "GroupFactionTypes", tcu_yotu_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_YOTU_OPF", tcu_yotu_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_YOTU_OPF", ["TCU_YOTU_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------

// TCU SALV Forces
// ---------------------------------------------------------------------------------------------------------------------
tcu_salv_mappings = [] call ALIVE_fnc_hashCreate;
[tcu_salv_mappings, "Side", "WEST"] call ALIVE_fnc_hashSet;
[tcu_salv_mappings, "GroupSideName", "WEST"] call ALIVE_fnc_hashSet;
[tcu_salv_mappings, "FactionName", "TCU_SALV_BLU"] call ALIVE_fnc_hashSet;
[tcu_salv_mappings, "GroupFactionName", "TCU_SALV_BLU"] call ALIVE_fnc_hashSet;
 
tcu_salv_typeMappings = [] call ALIVE_fnc_hashCreate;
[tcu_salv_typeMappings, "Air", "Air"] call ALIVE_fnc_hashSet;
[tcu_salv_typeMappings, "Armored", "Armored"] call ALIVE_fnc_hashSet;
[tcu_salv_typeMappings, "Infantry", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_salv_typeMappings, "Mechanized", "Mechanized"] call ALIVE_fnc_hashSet;
[tcu_salv_typeMappings, "Motorized", "Motorized"] call ALIVE_fnc_hashSet;
[tcu_salv_typeMappings, "SpecOps", "Infantry"] call ALIVE_fnc_hashSet;
[tcu_salv_typeMappings, "Support", "Infantry"] call ALIVE_fnc_hashSet;
 
[tcu_salv_mappings, "GroupFactionTypes", tcu_salv_typeMappings] call ALIVE_fnc_hashSet;
[ALIVE_factionCustomMappings, "TCU_SALV_BLU", tcu_salv_mappings] call ALIVE_fnc_hashSet;
 
[ALIVE_factionDefaultSupplies, "TCU_SALV_BLU", ["TCU_SALV_MAR_ammobox"]] call ALIVE_fnc_hashSet;
 
// ---------------------------------------------------------------------------------------------------------------------