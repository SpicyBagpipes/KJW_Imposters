/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_playerRespawn

Description:
    Removes player from wanted list if on it upon respawn.

Parameters:


Returns:


Author:
    KJW
---------------------------------------------------------------------------- */

player addEventHandler ["Respawn", {
	params ["_unit", "_corpse"];
	player setVariable ["KJW_Imposters_SusPoints",0];
	if (player in KJW_Imposters_WantedPlayers) exitWith {
		_location = KJW_Imposters_WantedPlayers find player;
		KJW_Imposters_WantedPlayers deleteAt _location;
		publicVariable "KJW_Imposters_WantedPlayers";
	};
}];