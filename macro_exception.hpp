#define MACRO_EXCEPTION(classname,baseclass,exception) class classname : baseclass {\
	KJW_Imposters_Exception = exception;\
};