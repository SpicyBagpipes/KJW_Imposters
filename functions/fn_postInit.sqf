/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_postInit

Description:
    Handles all the postinit functionality the mod will require.

Parameters:


Returns:
    

Author:
    KJW
---------------------------------------------------------------------------- */

if (KJW_Imposters_Setting_MainEnabled) then {
    call KJW_Imposters_fnc_mainLoop;
    call KJW_Imposters_fnc_playerRespawn;
    call KJW_Imposters_fnc_susPoints;
};

if (isServer) then {
    KJW_Imposters_WantedPlayers = [];
    publicVariable "KJW_Imposters_WantedPlayers";
    private _id =
    ["KJW_Imposters_PlayerPostInit", {
        params ["_grp", "_plr"];
        _grp forgetTarget _plr;
    }] call CBA_fnc_addEventHandler;
};

player addEventHandler ["GetOutMan", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	if (primaryWeapon player == "" && KJW_Imposters_Setting_GunAwayOnExit) then {player action ["SwitchWeapon", player, player, 299];};
}];

{
    ["KJW_Imposters_PlayerPostInit",[_x, player]] call CBA_fnc_serverEvent;
} forEach allGroups;