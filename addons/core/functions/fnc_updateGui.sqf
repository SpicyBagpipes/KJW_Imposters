#include "script_component.hpp"
/*
 *  Author: KJW
 * 
 *  Updates Gui based on player score
 * 
 *  Arguments:
 *  None
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  call KJW_Imposters_Core_fnc_updateGui
 * 
 *  Public: No
 */

private _score = player getVariable [QGVAR(kitScore),0];

"KJW_Imposters_SusLayer" cutRsc ["KJW_Imposters_SusBar", "PLAIN"];
private _display = uiNamespace getVariable "KJW_Imposters_SusBar";
private _susbar = _display displayCtrl 4947;
private _sustext = _display displayCtrl 4948;
_susbar ctrlSetTextColor [_score,1-_score,_score*0.1,0.5];
if (GVAR(barEnabled)) then {
    private _amount = 1 - (_score min 1);
    _susbar progressSetPosition _amount;
    if (_amount <= 0) then {
        "KJW_Imposters_SusLayer" cutRsc ["Default", "PLAIN"];
    } else {
        _sustext ctrlSetText "Covert Meter";
        _sustext ctrlCommit 0;
    };
} else {
    "KJW_Imposters_SusLayer" cutRsc ["Default", "PLAIN"];
};