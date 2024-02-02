#include "script_component.hpp"
/*
 *  Author: KJW
 * 
 *  Function description
 * 
 *  Arguments:
 *  0: Objects <ARRAY>
 *  1: All <BOOL>
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  [[bob, ted], false] call KJW_Imposters_Core_XEH_PreStart
 * 
 *  Public: No
 */


private _cfgWeaps = "true" configClasses (configFile >> "CfgWeapons");
private _cfgVehs = "true" configClasses (configFile >> "CfgVehicles");
private _cfgGlass = "true" configClasses (configFile >> "CfgGlasses");
_cfgWeaps = _cfgWeaps apply {[configName _x, GET_NUMBER((_x >> "KJW_Imposters_SuspicionAmount"),1)]};
_cfgVehs = _cfgVehs apply {[configName _x, GET_NUMBER((_x >> "KJW_Imposters_SuspicionAmount"),1)]};
_cfgGlass = _cfgGlass apply {[configName _x, GET_NUMBER((_x >> "KJW_Imposters_SuspicionAmount"),1)]};
private _items = _cfgWeaps + _cfgVehs + _cfgGlass;
private _itemsHash = createHashmapFromArray _items;
uiNamespace setVariable [QGVAR(itemGrades), _itemsHash];