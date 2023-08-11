/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_playerWearingBalaclava

Description:
	Checks if player's facewear is a balaclava or not.

Parameters:


Returns:
	_isWearingBalaclava - Boolean that states if player is wearing a balaclava or not.

Author:
	KJW
---------------------------------------------------------------------------- */

/*Player wearing balaclava function
	//Check facewear config for KJW_Imposters_Balaclava, exit with true if 1.
	//Check helmet config for KJW_Imposters_Balaclava, exit with true if 1.
	//Check facewear against balaclava array, exit with true if match found.
	//Script still running means not a balaclava.
	//Exit with false.
*/

_playerFacewear = goggles player;

if (getNumber (configFile >> "CfgGlasses" >> _playerFacewear >> "KJW_Imposters_Balaclava") == 1) exitWith {true};

_playerHelmet = headgear player;

if (getNumber (configFile >> "CfgWeapons" >> _playerHelmet >> "KJW_Imposters_Balaclava") == 1) exitWith {true};

if (_playerFacewear in KJW_Imposters_Setting_Balaclavas) exitWith {true};
if (_playerHelmet in KJW_Imposters_Setting_Balaclavas) exitWith {true};

false