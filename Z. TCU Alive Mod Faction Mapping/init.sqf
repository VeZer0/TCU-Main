
//Alive Mod TCU Override -START-

if(isServer) then {
 
	// -------------------------------------------------------------------------------------------------------------
	// override default data 
	// see script/staticData.sqf
	["MISSION INIT - Waiting"] call ALIVE_fnc_dump;
 
	waitUntil {!isNil "ALiVE_STATIC_DATA_LOADED"};
 
	["MISSION INIT - Continue"] call ALIVE_fnc_dump;
 
	// override static data settings
	call compile (preprocessFileLineNumbers "script\staticData.sqf");
 
	["MISSION INIT - Static data override loaded"] call ALIVE_fnc_dump;
 
 
 
	// -------------------------------------------------------------------------------------------------------------
 
};

//Alive Mod TCU Override -END-