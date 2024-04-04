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
            "v_ssysm"
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
    class V_PlateCarrier1_rgr;

    COMPAT(vss_01_BLK,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_01_BF,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_01_M81,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_01_MC,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_01_MCA,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_01_MCTP,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_01_RG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_01_WG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_02_BLK,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_02_BF,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_02_M81,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_02_MC,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_02_MCA,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_02_MCTP,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_02_RG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_02_WG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_03_BLK,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_03_BF,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_03_M81,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_03_MC,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_03_MCA,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_03_MCTP,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_03_RG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_03_WG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_04_BLK,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_04_BF,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_04_M81,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_04_MC,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_04_MCA,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_04_MCTP,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_04_RG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_04_WG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_05_BLK,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_05_BF,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_05_M81,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_05_MC,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_05_MCA,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_05_MCTP,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_05_RG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_05_WG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_06_BLK,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_06_BF,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_06_M81,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_06_MC,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_06_MCA,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_06_MCTP,V_PlateCarrier1_rgr,0.3)
    COMPAT(vss_06_RG,V_PlateCarrier1_rgr,0.25)
    COMPAT(vss_06_WG,V_PlateCarrier1_rgr,0.25)
};