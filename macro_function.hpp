#define QUOTE(var1) #var1
#define MACRO_FUNCPATH(FUNCNAME) KJW_Imposters\functions\fn_##FUNCNAME

#define MACRO_FUNCTION(FUNCTIONNAME) class FUNCTIONNAME {\
                file = QUOTE(MACRO_FUNCPATH(FUNCTIONNAME).sqf);\
            };