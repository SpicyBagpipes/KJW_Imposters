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

ace_player addEventHandler ["GetOutMan", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	if (primaryWeapon ace_player == "" && GVAR(gunAwayOnExit)) then {ace_player action ["SwitchWeapon", ace_player, ace_player, 299];};
}];

[
	"CAManBase",
	"fired",
	{
		params ["_unit"];
		private _susPoints = _unit getVariable [QGVAR(susPoints), 0];
		_unit setVariable [QGVAR(susPoints), _susPoints + (3*GVAR(susPointsCoefficient))];
	}
] call CBA_fnc_addClassEventHandler;

[
	"ACE_Medical_Treatment_medicationLocal",
	{
		params ["_pt", "_bodypart", "_classname"];
		if (side ace_player != civilian) exitWith {};
		if ((ace_player != _pt) && {side _pt != side ace_player}) exitWith {
			private _susPoints = ace_player getVariable [QGVAR(susPoints), 0];
			ace_player setVariable [QGVAR(susPoints), _susPoints + (1*GVAR(susPointsCoefficient))];
		};
	}
] call CBA_fnc_addEventHandler;

[
	"ACE_Explosives_place",
	{
		params ["_explosive","_dir","_pitch","_unit"];
		if (_unit != ace_player) exitWith {};
		private _susPoints = ace_player getVariable [QGVAR(susPoints), 0];
		ace_player setVariable [QGVAR(susPoints), _susPoints + (5*GVAR(susPointsCoefficient))];
	}
] call CBA_fnc_addEventHandler;

addMissionEventHandler ["EntityKilled", {
	params ["_killed", "_killer", "_instigator"];
	if (!(_killed isKindOf "CAManBase")) exitWith {};
	if (isNull _instigator) then { _instigator = UAVControl vehicle _killer select 0 }; // UAV/UGV player operated road kill
	if (isNull _instigator) then { _instigator = _killer }; // player driven vehicle road kill
	if (_killer == ace_player) exitWith {
		private _susPoints = ace_player getVariable [QGVAR(susPoints), 0];
		ace_player setVariable [QGVAR(susPoints), _susPoints + (3*GVAR(susPointsCoefficient))];
	};
}];