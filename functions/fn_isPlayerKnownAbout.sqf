/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_isPlayerKnownAbout

Description:
    Checks to see if any enemy to the player knowsAbout == 4.

Parameters:


Returns:
    _knownAbout - Boolean if player

Author:
    KJW
---------------------------------------------------------------------------- */

_enemySides = call KJW_Imposters_fnc_enemySides;
private _knownAbout = _enemySides findIf { _x knowsAbout player == 4 } != -1;

_knownAbout