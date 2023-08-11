/* ----------------------------------------------------------------------------
Function: KJW_Imposters_fnc_generateEntry

Description:
	Generates a config entry for the specified class.

Parameters:
	_className - The classname of the thing to generate an entry for.
	_macro - The macro to use.
	_isException - Is classname exception or not? 1 or 0.
	_type - Cfg class of classname.

Returns:
	

Author:
	KJW
---------------------------------------------------------------------------- */

params["_className","_macro","_isException","_type"];

_obj1classparent = inheritsFrom (configFile >> _type >> _className);

_obj1classparent = str _obj1classparent select [27];

_entry = format[
"%1(%2,%3,%4)", _macro, _className, _obj1classparent, _isException
];

copyToClipboard _entry