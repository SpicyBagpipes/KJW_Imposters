/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_addCBASettings

Description:
	Adds CBA Settings.

Parameters:
	

Returns:
	

Author:
	KJW
---------------------------------------------------------------------------- */

_exceptions = [];

["KJW_Imposters_Setting_MainEnabled", "CHECKBOX",  ["Enabled", "Enables the Imposters system. Disabling will turn off the loop and make all players overt, but will not allow it to be turned back on until after restart."], "KJW's Imposters", true, 1, {{if (!(_x getVariable ["ace_captives_isHandcuffed",false]) || lifeState _x != "INCAPACITATED") then {_x setCaptive false;};} forEach allPlayers}, true] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_WantedEnabled", "CHECKBOX",  ["Wanted Enabled", "Enables the Wanted system."], "KJW's Imposters", true, 1, {call KJW_Imposters_fnc_clearWanted}] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_GunAwayOnExit", "CHECKBOX",  ["No Gun on Disembark", "Enables the player putting their gun away if no primary weapon equipped upon exiting a vehicle."], "KJW's Imposters", true] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_Exceptions", "EDITBOX",  ["Exceptions", "Array of exceptions to overt check. Recommended to use config values instead of this."], ["KJW's Imposters","Classes"], str _exceptions] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_Balaclavas", "EDITBOX",  ["Balaclavas", "Array of balaclava classnames for wanted system. Recommended to use config values instead of this."], ["KJW's Imposters","Classes"], str _exceptions] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_TimeToIgnore", "SLIDER",  ["Time to Ignore", "Minimum amount of time without AI seeing friendly before they will be able to go undercover again."], ["KJW's Imposters","Settings"], [0,120,10,0]] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_DistanceToIgnore", "SLIDER",  ["Distance to Ignore", "Minimum distance friendly must be from where AI thinks they are before they can go undercover again."], ["KJW's Imposters","Settings"], [0,100,10,0]] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_TimeToReport", "SLIDER",  ["Time to Report", "Length of time friendly must be in line of sight of enemy before being reported."], ["KJW's Imposters","Settings"], [0,20,5,0]] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_MilitaryUniformsEnabled", "CHECKBOX",  ["Military Uniforms Enabled", "Enables the Military Uniforms system. Use double quotes in order to allow nothing as an option. For example, no helmet requirement."], ["KJW's Imposters","Military Uniforms"], false] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_MilitaryUniforms", "EDITBOX",  ["Military Uniforms", "Array of Military Uniform classnames."], ["KJW's Imposters","Military Uniforms"], str _exceptions] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_MilitaryVests", "EDITBOX",  ["Military Vests", "Array of Military Vest classnames."], ["KJW's Imposters","Military Uniforms"], str _exceptions] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_MilitaryHelmets", "EDITBOX",  ["Military Helmets", "Array of Military Helmet classnames."], ["KJW's Imposters","Military Uniforms"], str _exceptions] call CBA_fnc_addSetting;

["KJW_Imposters_Setting_SusPoints", "SLIDER",  ["Time Before Undercover", "Length of time ADDED to friendly's counter before can go undercover again per suspicious event. THIS STACKS!"], "KJW's Imposters", [0,120,2,0]] call CBA_fnc_addSetting;