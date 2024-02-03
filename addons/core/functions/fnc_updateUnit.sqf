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

if (lifeState _unit == "INCAPACITATED") exitWith {
    "KJW_Imposters_SusLayer" cutRsc ["KJW_Imposters_SusBar", "PLAIN"];
    private _display = uiNamespace getVariable "KJW_Imposters_SusBar";
    private _susbar = _display displayCtrl 4947;
    private _sustext = _display displayCtrl 4948;
    _susbar progressSetPosition 0;
    _sustext ctrlSetText "";
    _sustext ctrlCommit 0;
};

_unit setUnitTrait ["audibleCoef", _score min 1];
_unit setUnitTrait ["camouflageCoef", _score min 1];

if (_score < GVAR(captiveThreshold) && currentWeapon _unit == "") then {
    _unit setCaptive true;
} else {
    _unit setCaptive false;
};

if (_unit isEqualTo ace_player) then {
    "KJW_Imposters_SusLayer" cutRsc ["KJW_Imposters_SusBar", "PLAIN"];
    private _display = uiNamespace getVariable "KJW_Imposters_SusBar";
    private _susbar = _display displayCtrl 4947;
    private _sustext = _display displayCtrl 4948;
    _susbar ctrlSetTextColor [_equipmentSum,1-_equipmentSum,_equipmentSum*0.1,0.5];
    if (GVAR(barEnabled)) then {
        private _amount = 1 - (_equipmentSum min 1);
        _susbar progressSetPosition _amount;
        if (_amount <= 0) then {
            _sustext ctrlSetText "";
            _sustext ctrlCommit 0;
        } else {
            _sustext ctrlSetText "Covert Meter";
            _sustext ctrlCommit 0;
        };
    } else {
        _susbar progressSetPosition 0;
        _sustext ctrlSetText "";
        _sustext ctrlCommit 0;
    };
};