/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_susPoints

Description:
    Adds sus points to player when doing suspicious things!

Parameters:


Returns:
    

Author:
    KJW
---------------------------------------------------------------------------- */

player addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
	private _susPoints = player getVariable ["KJW_Imposters_SusPoints",0];
	player setVariable ["KJW_Imposters_SusPoints",_susPoints+KJW_Imposters_Setting_SusPoints*2];
}];

private _id = ["ACE_Medical_Treatment_medicationLocal", {
	_this#0 params ["_pt", "_bodypart", "_classname"];
	if (side player != civilian) exitWith {};
	if ((player != _pt) && {side _pt != side player}) exitWith {private _susPoints = player getVariable ["KJW_Imposters_SusPoints",0]; player setVariable ["KJW_Imposters_SusPoints",_susPoints+KJW_Imposters_Setting_SusPoints*2];};
}] call CBA_fnc_addEventHandler;

private _id2 = ["ACE_Explosives_place", {
	_this#0 params ["_explosive","_dir","_pitch","_unit"];
	if (_unit != player) exitWith {};
	player setVariable ["KJW_Imposters_SusPoints",_susPoints+KJW_Imposters_Setting_SusPoints*2];
}] call CBA_fnc_addEventHandler;

addMissionEventHandler ["EntityKilled", {
	params ["_killed", "_killer", "_instigator"];
	if (!(_killed isKindOf "CAManBase")) exitWith {};
	if (isNull _instigator) then { _instigator = UAVControl vehicle _killer select 0 }; // UAV/UGV player operated road kill
	if (isNull _instigator) then { _instigator = _killer }; // player driven vehicle road kill
	if (_killer == player) exitWith {private _susPoints = player getVariable ["KJW_Imposters_SusPoints",0]; player setVariable ["KJW_Imposters_SusPoints",_susPoints+KJW_Imposters_Setting_SusPoints*2];};
}];