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
            "RF_Characters_Uniform"
        };
        requiredVersion=1;
        skipWhenMissingDependencies=1;
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
	};
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Class declarations
    class Uniform_Base;
    class HelmetBase;

    COMPAT(U_C_PilotJacket_black_RF,Uniform_Base,0)
    COMPAT(U_C_FirefighterFatigues_RF,Uniform_Base,0)
    COMPAT(U_C_HeliPilotCoveralls_Rescue_RF,Uniform_Base,0)
    COMPAT(U_BG_Guerrilla_RF,Uniform_Base,0.1)

    COMPAT(H_Helmet_HardHat_Black_RF,HelmetBase,0)
};

class CfgGlasses {
    // Facewear

    // Class declarations
    class None;

    COMPAT(G_Glasses_black_RF,None,0)
};

class CfgVehicles {
    // Backpacks
    class Bag_Base;

    COMPAT(B_DuffleBag_Base,Bag_Base,0)
    COMPAT(C_Parachute_Base_RF,Bag_Base,0)
};