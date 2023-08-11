/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_enemySides

Description:
    Gets enemy sides to player's side.

Parameters:
    

Returns:
  _enemySides - Array of enemy sides.

Author:
    KJW
---------------------------------------------------------------------------- */

_enemySides = [];
{
  if ((side player getFriend _x) < 0.6) then {
    _enemySides pushBack _x;
  };
} forEach [east,west,independent,civilian];

_enemySides