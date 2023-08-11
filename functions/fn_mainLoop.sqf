/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_mainLoop

Description:
	Handles all the functionality the mod will require.

Parameters:


Returns:
	

Author:
	KJW
---------------------------------------------------------------------------- */

if (!(KJW_Imposters_Setting_MainEnabled)) exitWith {};									 //--Exit if main is not enabled.
KJW_Imposters_cbaPFHRunning = false;

0 spawn {
	while {true} do {
		sleep(0.5);
		if (!(KJW_Imposters_Setting_MainEnabled)) exitWith {};							//--Exit if main is not enabled.
		//This part of the script:
		//Run function to check if player is known to enemies.
		//Run function to check player's overtness level, if covert exit script with setting as covert if not already if not known by enemies.
		private _playerKnown = call KJW_Imposters_fnc_playerKnownToEnemies;
		private _deltaTimeSeen = _playerKnown#1;
		private _playerNotKnown = _playerKnown#0;
		private _playerOvert = call KJW_Imposters_fnc_playerOvertCheck;
		private _playerWanted = player in KJW_Imposters_WantedPlayers;
		private _susPoints = player getVariable ["KJW_Imposters_SusPoints",0];
		private _playerVehicle = objectParent player;
		private _playerVehicleIsCivilian = if (!(isNull _playerVehicle)) then {
			_side = getNumber (configFile >> "CfgVehicles" >> typeOf _playerVehicle >> "side");
			if (!((_side == 3) || (_side == 4)) && (!((configFile >> "CfgVehicles" >> typeOf _playerVehicle >> "KJW_Imposters_Exception") isEqualTo 1)) || typeOf _playerVehicle in parseSimpleArray KJW_Imposters_Setting_Exceptions) exitWith{false};
			true
		}
		else {true;};

		if (!(_playerOvert) && (_playerNotKnown) && !(_playerWanted) && (_susPoints <= 0) && (_playerVehicleIsCivilian)) then {
			player setCaptive true;
			continue;
		};
		//Script still running beyond this point means player is overt.
		if (_susPoints > 0) then {player setVariable ["KJW_Imposters_SusPoints",_susPoints-1]};
		if (!(player getVariable ["ace_captives_isHandcuffed",false]) || lifeState player != "INCAPACITATED") then {player setCaptive false;};	//-- Checking if player is already captive as a result of unconsciousness or captivity.
		if (_playerNotKnown) then {continue}; //Exit if player is not known.
		if (!(KJW_Imposters_Setting_WantedEnabled)) then {continue};							 //-- Exits if the Wanted system is disabled.

		//This part of the script:
		//Run function to check if player is wearing balaclava. If they are, exit script.
		//Script still running afterwards means player is not wearing balaclava.				 -- Could add optimisation here to check if player's facewear has changed since last loop or not.
		private _playerBalaclava = call KJW_Imposters_fnc_playerWearingBalaclava;
		if (_playerBalaclava) then {continue};

		//This part of the script:
		//If knowsAbout == 4 and player is known to enemies start a waitandexecute for player to be added to wanted list.
		private _isKnownAbout = call KJW_Imposters_fnc_isPlayerKnownAbout;
		if (_isKnownAbout && !_playerWanted && !KJW_Imposters_cbaPFHRunning) then {
			KJW_Imposters_cbaPFHRunning = true;
			[{
				params["_deltaTimeSeen"];
				if (_deltaTimeSeen > KJW_Imposters_Setting_TimeToReport) exitWith {};
				KJW_Imposters_WantedPlayers pushBack player;
				publicVariable "KJW_Imposters_WantedPlayers";
				_cbaPFHRunning = false;
			}, [_deltaTimeSeen], KJW_Imposters_Setting_TimeToReport] call CBA_fnc_waitAndExecute;
		};
	};
};