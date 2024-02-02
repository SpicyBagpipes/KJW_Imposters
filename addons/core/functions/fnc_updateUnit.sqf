#include "script_component.hpp"
/*
 *  Author: KJW
 * 
 *  Updates unit's values based on score
 * 
 *  Arguments:
 *  0: Unit <OBJECT>
 *  1: Score <NUMBER>
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  [player, 3] call KJW_Imposters_Core_fnc_updateUnit
 * 
 *  Public: No
 */

params [["_unit", ace_player, [objNull]], ["_score", 0, [0]]];

_unit setVariable [QGVAR(kitScore), _score];

if (lifeState _unit == "INCAPACITATED") exitWith {};

_unit setUnitTrait ["audibleCoef", _score min 1];
_unit setUnitTrait ["camouflageCoef", _score min 1];

if (_score < GVAR(captiveThreshold) && currentWeapon _unit == "") then {
    _unit setCaptive true;
} else {
    _unit setCaptive false;
};