#include "XEH_PREP.sqf"
/*
 *  Author: KJW
 * 
 *  Handles preinit for the addon
 * 
 *  Arguments:
 *  None
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  call KJW_Imposters_Core_XEH_PreInit
 * 
 *  Public: No
 */

call FUNC(addSettings);

private _cfgWeaps = "_type = getNumber (_x >> 'type'); _type != 1 && _type != 4" configClasses (configFile >> "CfgWeapons");
private _cfgVehs = "_side = getNumber (_x >> 'side'); _sim = getText (_x >> 'simulation'); if (((_sim != 'house') && ((_side == 3))) || ((901 in (getArray (_x >> 'allowedSlots'))) || (getNumber (_x >> 'isBackpack')) isEqualTo 1)) then {true} else {false};" configClasses (configFile >> "CfgVehicles");
private _cfgGlass = "true" configClasses (configFile >> "CfgGlasses");
_cfgWeaps = _cfgWeaps apply {[configName _x, GET_NUMBER((_x >> "KJW_Imposters_SuspicionAmount"),1)]};
_cfgVehs = _cfgVehs apply {[configName _x, GET_NUMBER((_x >> "KJW_Imposters_SuspicionAmount"),1)]};
_cfgGlass = _cfgGlass apply {[configName _x, GET_NUMBER((_x >> "KJW_Imposters_SuspicionAmount"),1)]};
private _items = _cfgWeaps + _cfgVehs + _cfgGlass;
private _itemsHash = createHashmapFromArray _items;
GVAR(itemScores) = _itemsHash;