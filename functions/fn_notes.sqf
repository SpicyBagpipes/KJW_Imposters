/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_notes

Description:
    Notes for mod creation.

Parameters:
    

Returns:
    

Author:
    KJW
---------------------------------------------------------------------------- */

/*Main loop
	//Run function to check if player is known to enemies.
	//Run function to check player's overtness level, if covert exit script with setting as covert if not already if not known by enemies.
	//Script still running afterwards means player is overt.
	//Run function to check if player is wearing balaclava. If they are, exit script.
	//Script still running afterwards means player is not wearing balaclava.
	//Exit script if player is not in line of sight of enemies.
	//Add 0.25 to counter of player spotted variable.
	//If knowsAbout == 4 and player is known to enemies start a waitandexecute for player to be added to wanted list.
*/

/*Player known to enemies function
	//Check if any units on enemy sides have seen player in passed number of seconds and # meters from where the AI thinks they are.
	//Return true if so.
*/

/*Player overtness level function -- true = overt, false = covert
	//Check for weapon in hands, exit with true if found and not an exception (Advanced Towing, Binoculars).
	//Check for primary weapon, exit with true if primary weapon found and not an exception.
	//Check for secondary primary weapon, exit with true if found and not an exception.
	//Check for launcher, exit with true if found.
	//Check for headgear with ballistic protection, exit with true if found and not an exception.
	//Check for vest with ballistic protection, exit with true if found and not an exception.
	//Check for backpack, exit with true if found and not an exception.
	//Check for night vision, exit with true if found and not an exception.
	//Check for uniform, exit with true if found and not an exception.
	//Check for facewear, exit with true if found and on the blacklist.
*/

/*Player wearing balaclava function
	//Check facewear config for KJW_Imposters_Balaclava, exit with true if 1.
	//Check helmet config for KJW_Imposters_Balaclava, exit with true if 1.
	//Check facewear against balaclava array, exit with true if match found.
	//Script still running means not a balaclava.
	//Exit with false.
*/

/*Item is exception function
	//Checks if item has config entry of KJW_Imposters_Exception = 1, exits with false if not.
	//Checks if item is in relevant CBA Settings array, exits with false if not.
*/