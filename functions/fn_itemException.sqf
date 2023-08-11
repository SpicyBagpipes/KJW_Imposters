/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_itemException

Description:
    Checks if item is an exception to script.

Parameters:
	_item1 - The item classname to check.
	_type - The cfg class to check.

Returns:
    _isException - Boolean whether item is exception or not.

Author:
    KJW
---------------------------------------------------------------------------- */

/*Item is exception function
	//Checks if item has config entry of KJW_Imposters_Exception = 1, exits with false if not.
	//Checks if item is in relevant CBA Settings array, exits with false if not.
*/

params["_item1","_type"];

_isException = getNumber (configFile >> _type >> _item1 >> "KJW_Imposters_Exception");

if (_isException == 1) exitWith {true};
if (_isException == 2) exitWith {"Blacklisted"};

_isException = _item1 in KJW_Imposters_Setting_Exceptions;

if (_isException) exitWith {_isException};

_settingValue = KJW_Imposters_Setting_Exceptions;

{
    _settingValue = _settingValue regexReplace [_x#0, str (_x#1)];
} forEach [
    ["#vest", vest player],
    ["#uniform", uniform player],
    ["#headgear", headgear player],
	["#backpack", backpack player],
	["#hmd", hmd player],
	["#goggles", goggles player],
	["#primaryweapon", primaryWeapon player],
	["#secondaryprimaryweapon", player getVariable ["KJW_ShotgunClassname",""]],
	["#currentweapon", currentWeapon player],
	["#launcher", secondaryWeapon player]
];
private _list = parseSimpleArray format ["%1", _settingValue];
_isException = _item1 in _list;

_isException