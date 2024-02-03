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
            "rhs_c_troops"
        };
        requiredVersion=1;
        skipWhenMissingDependencies=1;
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
	};
};

class CfgVehicles {

    // Class declarations
    class B_AssaultPack_Base;

    COMPAT(rhs_medic_bag,B_AssaultPack_Base,0)
    COMPAT(rhs_rd54,B_AssaultPack_Base,0)
    COMPAT(rhs_sidor,B_AssaultPack_Base,0)
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Class declarations
    class H_HelmetB;
    class ItemCore;
    class rhs_fieldcap_m88;
    class rhs_Booniehat_flora;

    COMPAT(rhs_beanie,H_HelmetB,0)
    COMPAT(rhs_beret_vdv1,rhs_Booniehat_flora,0.8)
    COMPAT(rhs_Booniehat_digi,ItemCore,0.8)
    COMPAT(rhs_headband,rhs_fieldcap_m88,0)
    COMPAT(rhs_ushanka,rhs_fieldcap_m88,0)
};