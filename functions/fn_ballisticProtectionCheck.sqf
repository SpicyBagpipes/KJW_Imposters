/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_ballisticProtectionCheck

Description:
    Checks value of ballistic protection for given classname.

Parameters:
	_classname - The classname of the item to check.

Returns:
   _ballistic - Boolean whether item has ballistic protection or not. 

Author:
    KJW
---------------------------------------------------------------------------- */

params["_classname"];

if ((getNumber (configFile >> "CfgWeapons" >> _classname >> "ItemInfo" >> "HitpointsProtectionInfo" >> "Chest" >> "armor") > 0) || (getNumber (configFile >> "CfgWeapons" >> _classname >> "ItemInfo" >> "HitpointsProtectionInfo" >> "Head" >> "armor") > 0)) exitWith {true};
false