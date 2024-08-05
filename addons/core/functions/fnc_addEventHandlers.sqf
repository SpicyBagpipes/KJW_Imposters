#include "script_component.hpp"
/*
 *  Author: KJW
 * 
 *  Adds event handlers required for the mod to function
 * 
 *  Arguments:
 *  None
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  call KJW_Radiate_Core_fnc_addEventHandlers
 * 
 *  Public: No
 */

[
	"ace_medical_handleUnitVitals",
	{
		params ["_unit", "_deltaT"];
		if GVAR(Enabled) then {
			[_unit] call FUNC(processUnit);
		};
	}
] call CBA_fnc_addEventHandler;

player addEventHandler ["GetOutMan", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	if (primaryWeapon player == "" && GVAR(gunAwayOnExit)) then {player action ["SwitchWeapon", player, player, 299];};
}];

[
	"CAManBase",
	"fired",
	{
		params ["_unit"];
		private _susPoints = _unit getVariable [QGVAR(susPoints), 0];
		_unit setVariable [QGVAR(susPoints), _susPoints + (3*GVAR(susPointsCoefficient))];
		[QGVAR(susPointsAdded), [3*GVAR(susPointsCoefficient)]] call CBA_fnc_localEvent;
	}
] call CBA_fnc_addClassEventHandler;

[
	"AllVehicles",
	"fired",
	{
		params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
		
		private _susPoints = _gunner getVariable [QGVAR(susPoints), 0];
		_gunner setVariable [QGVAR(susPoints), _susPoints + (4*GVAR(susPointsCoefficient))];
		[QGVAR(susPointsAdded), [4*GVAR(susPointsCoefficient)]] call CBA_fnc_localEvent;
	}
] call CBA_fnc_addClassEventHandler;

[
	"ACE_Medical_Treatment_medicationLocal",
	{
		params ["_pt", "_bodypart", "_classname"];
		if ((player != _pt) && {side _pt != side player}) exitWith {
			private _susPoints = player getVariable [QGVAR(susPoints), 0];
			player setVariable [QGVAR(susPoints), _susPoints + (5*GVAR(susPointsCoefficient))];
			[QGVAR(susPointsAdded), [1*GVAR(susPointsCoefficient)]] call CBA_fnc_localEvent;
		};
	}
] call CBA_fnc_addEventHandler;

[
	"ACE_Explosives_place",
	{
		params ["_explosive","_dir","_pitch","_unit"];
		if (_unit != player) exitWith {};
		private _susPoints = player getVariable [QGVAR(susPoints), 0];
		player setVariable [QGVAR(susPoints), _susPoints + (10*GVAR(susPointsCoefficient))];
		[QGVAR(susPointsAdded), [5*GVAR(susPointsCoefficient)]] call CBA_fnc_localEvent;
	}
] call CBA_fnc_addEventHandler;

addMissionEventHandler ["EntityKilled", {
	params ["_killed", "_killer", "_instigator"];
	if (!(_killed isKindOf "CAManBase")) exitWith {};
	if (isNull _instigator) then { _instigator = UAVControl vehicle _killer select 0 }; // UAV/UGV player operated road kill
	if (isNull _instigator) then { _instigator = _killer }; // player driven vehicle road kill
	if (_killer == player) exitWith {
		private _susPoints = player getVariable [QGVAR(susPoints), 0];
		player setVariable [QGVAR(susPoints), _susPoints + (3*GVAR(susPointsCoefficient))];
		[QGVAR(susPointsAdded), [3*GVAR(susPointsCoefficient)]] call CBA_fnc_localEvent;
	};
}];

[
	"loadout",
	{
		call FUNC(updateGui)
	}
] call CBA_fnc_addPlayerEventHandler;