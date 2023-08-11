/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_playerKnownToEnemies

Description:
    Checks if the player is known to enemies or not.

Parameters:


Returns:
    _knownToEnemies - Boolean of if player is known to enemies or not.

Author:
    KJW
---------------------------------------------------------------------------- */

/*Player known to enemies function
	//Check if any units on enemy sides have seen player in passed number of seconds and # meters from where the AI thinks they are.
	//Return true if so.
*/

/*_enemySides = call KJW_Imposters_fnc_enemySides;
_knownToEnemies = {
    _knowsAbout = {
       _knowledge = _x targetKnowledge player;
	   _deltaTimeSeen = time - _knowledge#2;
	   _distFromPos = player distance _knowledge#6;
	   if ((_deltaTimeSeen > KJW_Imposters_Setting_TimeToIgnore) && (_distFromPos > KJW_Imposters_Setting_DistanceToIgnore)) exitWith {true};
    } forEach units _x;
    if (_knowsAbout) exitWith {true};
	false;
} forEach _enemySides;

_knownToEnemies*/ 					//Old

if (captive player || player findNearestEnemy player isEqualTo OBJNull) exitWith {[true,1e10]}; //Doesn't matter, player will be overt before enemies need information on them. Only used for stopping overt -> covert.

_deltaTimeSeen = 1e10;
_player = player;
_enemySides = call KJW_Imposters_fnc_enemySides;
_knownToEnemies = _enemySides findIf {
	units _x findIf {
		_player distance _x < 1000 && alive _x && {
		_knowledge = _x targetKnowledge _player;
		_deltaTimeSeen = time - _knowledge#2;
		_distFromPos = _player distance _knowledge#6;
		(_deltaTimeSeen > KJW_Imposters_Setting_TimeToIgnore) && (_distFromPos > KJW_Imposters_Setting_DistanceToIgnore);
		}
	} != -1;
} != -1;

[_knownToEnemies,_deltaTimeSeen]