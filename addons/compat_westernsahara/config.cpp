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
            "Characters_f_lxWS"
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
    class HelmetBase;
    class ItemCore;
    class Uniform_Base;
    class lxWS_H_cloth_1_A;
    class H_Shemag_khk;

    COMPAT(U_lxWS_Djella_02_Brown,Uniform_Base,0)
    COMPAT(U_lxWS_Djella_02_Grey,Uniform_Base,0)
    COMPAT(U_lxWS_Djella_03_Green,Uniform_Base,0)
    COMPAT(U_lxWS_Djella_02_Sand,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_01,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_02,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_02a,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_03,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_04,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_05,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_06,Uniform_Base,0)
    COMPAT(U_lxWS_C_Djella_07,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_01_A,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_01_B,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_01_C,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_02_A,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_02_B,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_02_C,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_03_A,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_03_B,Uniform_Base,0)
    COMPAT(U_lxWS_Tak_03_C,Uniform_Base,0)
    COMPAT(U_lxWS_ION_Casual3,Uniform_Base,0.1)
    COMPAT(U_lxWS_ION_Casual5,Uniform_Base,0.1)
    COMPAT(U_B_CTRG_3_lxWS,Uniform_Base,0.4)
    COMPAT(U_B_CTRG_4_lxWS,Uniform_Base,0.4)
    COMPAT(U_SFIA_deserter_lxWS,Uniform_Base,0.4)

    COMPAT(U_lxWS_B_CombatUniform_desert_tshirt,Uniform_Base,0.9)

    COMPAT(lxWS_H_cloth_5_A,lxWS_H_cloth_1_A,0)
    COMPAT(lxWS_H_turban_01_black,H_Shemag_khk,0)
};

class CfgGlasses {
    // Facewear

    // Class declarations
    class G_Combat;

    COMPAT(G_Combat_lxWS,G_Combat,0)
};