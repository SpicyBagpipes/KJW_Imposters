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
            "WW2_SPE_Assets_c_Characters_Civilians_c_French"
        };
        requiredVersion=1;
        skipWhenMissingDependencies=1;
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
	};
};

class CfgVehicles {
    // Vehicles, Backpacks

    // Class declarations
    class B_SPE_AssaultPack_Base;

    COMPAT(B_SPE_CIV_musette,B_SPE_AssaultPack_Base,0)
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Class declarations
    class H_SPE_Hat;
    class U_SPE_BasicBody;

    COMPAT(H_SPE_CIV_Worker_Cap_1,H_SPE_Hat,0)
    
    COMPAT(U_SPE_CIV_Citizen_1,U_SPE_BasicBody,0)
};

class CfgGlasses {
    // Facewear

    // Class declarations
    class None;
    class SPE_Glasses;
    class SPE_GER_Glasses;
    class SPE_US_Glasses;

    COMPAT(G_SPE_Binoculars,SPE_Glasses,0)
    COMPAT(SPE_Cigarettes,None,0)
    COMPAT(G_SPE_Dienst_Brille,SPE_GER_Glasses,0)
    COMPAT(G_SPE_Dust_Goggles_2,SPE_GER_Glasses,0)
    COMPAT(G_SPE_Ful_Vue_Reinforced,SPE_US_Glasses,0)
    COMPAT(G_SPE_Ful_Vue,SPE_US_Glasses,0)
    COMPAT(G_SPE_Sunglasses_GER_Brown,SPE_GER_Glasses,0)
    COMPAT(G_SPE_Sunglasses_GER_Red,SPE_GER_Glasses,0)
    COMPAT(G_SPE_Sunglasses_US_Red,SPE_US_Glasses,0)
    COMPAT(G_SPE_Sunglasses_US_Yellow,SPE_US_Glasses,0)
};