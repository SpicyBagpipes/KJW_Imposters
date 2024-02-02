#include "script_component.hpp"
/*
 *  Author: KJW
 * 
 *  Processes the level of suspicion the unit should have and sets it onto them.
 * 
 *  Arguments:
 *  0: Unit <OBJECT>
 * 
 *  Return Value:
 *  None
 * 
 *  Example:
 *  [player] call KJW_Imposters_Core_fnc_processUnit
 * 
 *  Public: Yes
 */

params [["_unit", ace_player, [objNull]]];

private _helmet = headgear _unit;
private _facewear = goggles _unit;
private _nvg = hmd _unit;
private _backpack = backpack _unit;
private _vest = vest _unit;
private _uniform = uniform _unit;

private _primaryWeapon = primaryWeapon _unit;
private _launcher = secondaryWeapon _unit;
private _currentWeapon = currentWeapon _unit;

if (isNil QGVAR(itemScores)) exitWith {diag_log "Tried to process suspicion level for a unit but itemScores was nil!"};

private _equipmentScores = [_helmet, _facewear, _nvg, _backpack, _vest, _uniform] apply {if (_x == "") then {0} else {GVAR(itemScores) getOrDefault [_x, 1]};};
_equipmentScores = _equipmentScores vectorMultiply [GVAR(helmetCoefficient), GVAR(facewearCoefficient), GVAR(nvgCoefficient), GVAR(backpackCoefficient), GVAR(vestCoefficient), GVAR(uniformCoefficient)];

private _equipmentSum = 0;
{
    _equipmentSum = _equipmentSum + _x;
} forEach _equipmentScores;

if (_primaryWeapon != "") then {
    private _cost = GET_NUMBER(configFile >> "CfgWeapons" >> _primaryWeapon >> "KJW_Imposters_SuspicionAmount", GVAR(primaryCost));
    private _finalCost = GVAR(itemScores) getOrDefault [_primaryWeapon, _cost];
    _equipmentSum = _equipmentSum + _finalCost;
};
if (_launcher != "") then {
    private _cost = GET_NUMBER(configFile >> "CfgWeapons" >> _launcher >> "KJW_Imposters_SuspicionAmount", GVAR(launcherCost));
    private _finalCost = GVAR(itemScores) getOrDefault [_primaryWeapon, _cost];
    _equipmentSum = _equipmentSum + _finalCost;
};
if (_currentWeapon != "") then {
    _equipmentSum = _equipmentSum + GVAR(equippedCost);
};

private _vicScore = 0;
if (!isNull objectParent _unit) then {
    private _vic = objectParent _unit;
    _vicScore = GVAR(itemScores) getOrDefault [typeOf _vic, 0];
    _vicScore = _vicScore*GVAR(vehicleCoefficient);
};

private _susPoints = _unit getVariable [QGVAR(susPoints), 0];

_equipmentSum = (_equipmentSum + _susPoints + _vicScore)*GVAR(coefficient);

[_unit, _equipmentSum] call FUNC(updateUnit);

_unit setVariable [QGVAR(susPoints), _susPoints - GVAR(susPointsDecayQuantity) max 0];

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