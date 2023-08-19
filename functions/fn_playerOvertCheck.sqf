/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_playerOvertCheck

Description:
    Checks if the player is overt or not.

Parameters:


Returns:
    _overt - Boolean of if player is overt or not.

Author:
    KJW
---------------------------------------------------------------------------- */

/*Player overtness level function
	//Check for weapon in hands, exit with true if found and not an exception (Advanced Towing, Binoculars).
	//Check for primary weapon, exit with true if primary weapon found and not an exception.
	//Check for secondary primary weapon, exit with true if found and not an exception.
	//Check for launcher, exit with true if found.
	//Check for headgear with ballistic protection, exit with true if found and not an exception.
	//Check for vest with ballistic protection, exit with true if found and not an exception.
	//Check for backpack, exit with true if found and not an exception.
	//Check for night vision, exit with true if found and not an exception.
	//Check for uniform, exit with true if found and not an exception.
	//Check for facewear, exit with true if found and on the blacklist.
*/

_playerCurrentWeapon = currentWeapon player;
_playerPrimaryWeapon = primaryWeapon player;
_playerSecondaryPrimaryWeapon = player getVariable ["KJW_TwoPrimaryWeapons_SecondSecondaryInfo",""];
_playerLauncher = secondaryWeapon player;
_playerHelmet = headgear player;
_playerVest = vest player;
_playerBackpack = backpack player;
_playerNODs = hmd player;
_playerUniform = uniform player;
_playerFacewear = goggles player;

if ((KJW_Imposters_Setting_MilitaryUniformsEnabled) &&
	((_playerUniform != "") && (_playerUniform in (parseSimpleArray KJW_Imposters_Setting_MilitaryUniforms))) &&
	((_playerVest != "") && (_playerVest in (parseSimpleArray KJW_Imposters_Setting_MilitaryVests))) &&
	((_playerHelmet != "") && (_playerHelmet in (parseSimpleArray KJW_Imposters_Setting_MilitaryHelmets)))
) exitWith {false};

if ((_playerCurrentWeapon != "") && {!([_playerCurrentWeapon,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) exitWith {true}; //If you have a weapon and it is not an exception, it is true.

if ((_playerPrimaryWeapon != "") && {!([_playerPrimaryWeapon,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if ((_playerSecondaryPrimaryWeapon != "") && {!([_playerSecondaryPrimaryWeapon#0,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if ((_playerLauncher != "") && {!([_playerLauncher,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if ((([_playerHelmet] call KJW_Imposters_fnc_ballisticProtectionCheck) && {!([_playerHelmet,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) || (([_playerHelmet,"CfgWeapons"] call KJW_Imposters_fnc_itemException) isEqualTo "Blacklisted")) exitWith {true};

if ((([_playerVest] call KJW_Imposters_fnc_ballisticProtectionCheck) && {!([_playerVest,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) || (([_playerVest,"CfgWeapons"] call KJW_Imposters_fnc_itemException) isEqualTo "Blacklisted")) exitWith {true};

if ((_playerBackpack != "") && {!([_playerBackpack,"CfgVehicles"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if ((_playerNODs != "") && {!([_playerNODs,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if ((_playerUniform != "") && {!([_playerUniform,"CfgWeapons"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if ((_playerFacewear != "") && {!([_playerFacewear,"CfgGlasses"] call KJW_Imposters_fnc_itemException)}) exitWith {true};

if (true) exitWith {false};