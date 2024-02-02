#include "script_component.hpp"

class CfgPatches {
    class COMPONENT_GENERAL {
        author="KJW";
        requiredAddons[]=
        {
            "A3_Data_F",
            "A3_Weapons_F",
            "A3_Characters_F",
            "A3_Data_F_AoW_Loadorder",
            "KJW_MedicalExpansion_Core"
        };
        requiredVersion=1;
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
	};
};

//https://trello.com/b/xH9BBZsd/kjws-medical-expansion

class Extended_PostInit_EventHandlers {
	class COMPONENT_POSTINIT {
		init = QUOTE(call compileScript [QQPATHTOF(XEH_PostInit.sqf)]);
	};
};

class Extended_PreInit_EventHandlers {
	class COMPONENT_PREINIT {
        init = QUOTE(call compileScript [QQPATHTOF(XEH_PreInit.sqf)]);
	};
};

class Extended_PreStart_EventHandlers {
	class COMPONENT_PRESTART {
        init = QUOTE(call compileScript [QQPATHTOF(XEH_PreStart.sqf)]);
	};
};

#include "RscTitles.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "ace_medical_treatment.hpp"