#include "script_component.hpp"
/*
 *  Author: KJW
 * 
 *  Adds settings required for the mod to function
 * 
 *  Arguments:
 *  None
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  call KJW_Imposters_Core_fnc_addSettings
 * 
 *  Public: No
 */

[
	QGVAR(enabled),
	"CHECKBOX",
	["Enabled", "Enable/Disable the Imposters system"],
	"KJW's Imposters",
	true, // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{
		{
			_x setCaptive false;
			_x setUnitTrait ["audibleCoef", 1];
			_x setUnitTrait ["camouflageCoef", 1];
		} forEach allUnits;
	}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(barEnabled),
	"CHECKBOX",
	["GUI Bar Enabled", "Enable/Disable the covertness bar"],
	"KJW's Imposters",
	true, // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(gunAwayOnExit),
	"CHECKBOX",
	["Gun Away on Exit", "Will automatically put your gun away immediately after getting out a vehicle if no primary weapon is equipped"],
	"KJW's Imposters",
	true, // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(coefficient),
	"SLIDER",
	["Overt Coefficient", "Coefficient applied to how overt the unit should be. Higher values mean more overt"],
	"KJW's Imposters",
	[0, 1, 0.05, 2], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(susPointsCoefficient),
	"SLIDER",
	["Sus Points Coefficient", "Coefficient applied to the number of sus points given to the unit"],
	"KJW's Imposters",
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(susPointsDecayQuantity),
	"SLIDER",
	["Sus Points Decay Quantity", "How many sus points should be removed per second"],
	"KJW's Imposters",
	[0, 10, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(captiveThreshold),
	"SLIDER",
	["Captive Threshold", "Threshold for how covert the unit should be before getting set as captive. This is useful for things like AI hearing local chat. NOTE: This is threshold AFTER coefficient is applied"],
	"KJW's Imposters",
	[0, 1, 0.7, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;





////////////////////////////////////////// WEAPON COSTS

[
	QGVAR(primaryCost),
	"SLIDER",
	["Primary Cost", "Cost for having a primary weapon if it does not have configured points"],
	"KJW's Imposters",
	[0, 20, 10, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(launcherCost),
	"SLIDER",
	["Launcher Cost", "Cost for having a launcher weapon if it does not have configured points"],
	"KJW's Imposters",
	[0, 20, 10, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(equippedCost),
	"SLIDER",
	["Equipped Cost", "Cost for having a equipped weapon"],
	"KJW's Imposters",
	[0, 20, 10, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;





///////////////////////////// GEAR COEFFICIENTS

[
	QGVAR(helmetCoefficient),
	"SLIDER",
	["Helmet Coefficient", "Points coefficient for helmet. Lower means more covert for helmets"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(facewearCoefficient),
	"SLIDER",
	["Facewear Coefficient", "Points coefficient for facewear. Lower means more covert for facewear"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(nvgCoefficient),
	"SLIDER",
	["NVG Coefficient", "Points coefficient for NVGs. Lower means more covert for NVGs"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(backpackCoefficient),
	"SLIDER",
	["Backpack Coefficient", "Points coefficient for backpack. Lower means more covert for backpacks"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(vestCoefficient),
	"SLIDER",
	["Vest Coefficient", "Points coefficient for vest. Lower means more covert for vests"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(uniformCoefficient),
	"SLIDER",
	["Uniform Coefficient", "Points coefficient for uniform. Lower means more covert for uniforms"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 5, 1, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;

[
	QGVAR(vehicleCoefficient),
	"SLIDER",
	["Vehicle Coefficient", "Points coefficient for vehicle. Lower means more covert for vehicles"],
	["KJW's Imposters", "Equipment Coefficients"],
	[0, 20, 10, 1], // Default value
	1, // 1: all clients share the same setting, 2: setting can’t be overwritten (optional, default: 0)
	{}, // Setting changed code
	false // Requires restart
] call CBA_fnc_addSetting;