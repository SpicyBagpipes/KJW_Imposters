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
            "UK3CB_Factions_MEI_O"
        };
        skipWhenMissingDependencies=1;
        requiredVersion=1;
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
	};
};

class CfgVehicles {
    // Backpacks, Vehicles

    // Base class declarations
    class B_AssaultPack_rgr;
    class B_Bergen_Base;
    class UK3CB_B_Knapsack_Blk;
    class UK3CB_C_Ikarus_TK;
    class UK3CB_C_Datsun_Closed;
    class UK3CB_C_Datsun_Open;
    class UK3CB_C_Hatchback;
    class UK3CB_C_Hilux_Closed;
    class UK3CB_C_Hilux_Open;
    class UK3CB_C_Kamaz_Covered;
    class UK3CB_C_Kamaz_Fuel;
    class UK3CB_C_Kamaz_Open;
    class UK3CB_C_Kamaz_Repair;
    class UK3CB_C_Lada_TK;
    class UK3CB_C_Lada_Taxi_TK;
    class UK3CB_C_LandRover_Closed;
    class UK3CB_C_LandRover_Open;
    class UK3CB_C_OLD_BIKE;
    class UK3CB_C_Pickup_ADC;
    class UK3CB_C_V3S_Reammo;
    class UK3CB_C_V3S_Refuel;
    class UK3CB_C_V3S_Recovery;
    class UK3CB_C_V3S_Repair;
    class UK3CB_C_V3S_Closed;
    class UK3CB_C_V3S_Open;
    class UK3CB_C_Sedan;
    class UK3CB_C_Skoda;
    class UK3CB_C_S1203;
    class UK3CB_C_S1203_Ambulance_TK;
    class UK3CB_C_SUV;
    class UK3CB_C_SUV_Armoured;
    class UK3CB_C_Tractor;
    class UK3CB_C_Tractor_Old;
    class UK3CB_C_TT650_TAK;
    class UK3CB_C_UAZ_Closed;
    class UK3CB_C_UAZ_Open;
    class UK3CB_C_Ural_Covered;
    class UK3CB_C_Ural_Fuel;
    class UK3CB_C_Ural_Open;
    class UK3CB_C_Ural_Ammo;
    class UK3CB_C_Ural_Empty;
    class UK3CB_C_Ural_Recovery;
    class UK3CB_C_Ural_Repair;
    class UK3CB_C_Gaz24;
    class UK3CB_C_Golf;
    class UK3CB_C_YAVA_TAK;

    COMPAT(UK3CB_CHC_C_B_MED,B_AssaultPack_rgr,0)
    COMPAT(UK3CB_B_Invisible,B_Bergen_Base,0)
    COMPAT(UK3CB_B_Bedroll_Backpack,B_Bergen_Base,0)
    COMPAT(UK3CB_B_Fieldpack,B_Bergen_Base,0)
    COMPAT(UK3CB_B_Hiker,B_Bergen_Base,0)
    COMPAT(UK3CB_TKP_O_B_ASS_BLK,UK3CB_B_Knapsack_Blk,0)
    COMPAT(UK3CB_B_Largepack,B_Bergen_Base,0)
    COMPAT(UK3CB_B_Largepack_Des,B_Bergen_Base,0)
    COMPAT(UK3CB_B_Largepack_Med,B_Bergen_Base,0)
    COMPAT(UK3CB_B_Largepack_Med_Des,B_Bergen_Base,0)

    COMPAT(UK3CB_TKC_C_Ikarus,UK3CB_C_Ikarus_TK,0)
    COMPAT(UK3CB_TKC_C_Datsun_Civ_Closed,UK3CB_C_Datsun_Closed,0)
    COMPAT(UK3CB_TKC_C_Datsun_Civ_Open,UK3CB_C_Datsun_Open,0)
    COMPAT(UK3CB_TKC_C_Hatchback,UK3CB_C_Hatchback,0)
    COMPAT(UK3CB_TKC_C_Hilux_Civ_Closed,UK3CB_C_Hilux_Closed,0)
    COMPAT(UK3CB_TKC_C_Hilux_Civ_Open,UK3CB_C_Hilux_Open,0)
    COMPAT(UK3CB_TKC_C_Kamaz_Covered,UK3CB_C_Kamaz_Covered,0)
    COMPAT(UK3CB_TKC_C_Kamaz_Fuel,UK3CB_C_Kamaz_Fuel,0)
    COMPAT(UK3CB_TKC_C_Kamaz_Open,UK3CB_C_Kamaz_Open,0)
    COMPAT(UK3CB_TKC_C_Kamaz_Repair,UK3CB_C_Kamaz_Repair,0)
    COMPAT(UK3CB_TKC_C_Lada,UK3CB_C_Lada_TK,0)
    COMPAT(UK3CB_TKC_C_Lada_Taxi,UK3CB_C_Lada_Taxi_TK,0)
    COMPAT(UK3CB_TKC_C_LR_Closed,UK3CB_C_LandRover_Closed,0)
    COMPAT(UK3CB_TKC_C_LR_Open,UK3CB_C_LandRover_Open,0)
    COMPAT(UK3CB_TKC_C_Old_Bike,UK3CB_C_OLD_BIKE,0)
    COMPAT(UK3CB_TKC_C_Pickup,UK3CB_C_Pickup_ADC,0)
    COMPAT(UK3CB_TKC_C_V3S_Reammo,UK3CB_C_V3S_Reammo,0)
    COMPAT(UK3CB_TKC_C_V3S_Refuel,UK3CB_C_V3S_Refuel,0)
    COMPAT(UK3CB_TKC_C_V3S_Recovery,UK3CB_C_V3S_Recovery,0)
    COMPAT(UK3CB_TKC_C_V3S_Repair,UK3CB_C_V3S_Repair,0)
    COMPAT(UK3CB_TKC_C_V3S_Closed,UK3CB_C_V3S_Closed,0)
    COMPAT(UK3CB_TKC_C_V3S_Open,UK3CB_C_V3S_Open,0)
    COMPAT(UK3CB_TKC_C_Sedan,UK3CB_C_Sedan,0)
    COMPAT(UK3CB_TKC_C_Skoda,UK3CB_C_Skoda,0)
    COMPAT(UK3CB_TKC_C_S1203,UK3CB_C_S1203,0)
    COMPAT(UK3CB_TKC_C_S1203_Amb,UK3CB_C_S1203_Ambulance_TK,0)
    COMPAT(UK3CB_TKC_C_SUV,UK3CB_C_SUV,0)
    COMPAT(UK3CB_TKC_C_SUV_Armoured,UK3CB_C_SUV_Armoured,0)
    COMPAT(UK3CB_TKC_C_Tractor,UK3CB_C_Tractor,0)
    COMPAT(UK3CB_TKC_C_Tractor_Old,UK3CB_C_Tractor_Old,0)
    COMPAT(UK3CB_TKC_C_TT650,UK3CB_C_TT650_TAK,0)
    COMPAT(UK3CB_TKC_C_UAZ_Closed,UK3CB_C_UAZ_Closed,0)
    COMPAT(UK3CB_TKC_C_UAZ_Open,UK3CB_C_UAZ_Open,0)
    COMPAT(UK3CB_TKC_C_Ural,UK3CB_C_Ural_Covered,0)
    COMPAT(UK3CB_TKC_C_Ural_Fuel,UK3CB_C_Ural_Fuel,0)
    COMPAT(UK3CB_TKC_C_Ural_Open,UK3CB_C_Ural_Open,0)
    COMPAT(UK3CB_TKC_C_Ural_Ammo,UK3CB_C_Ural_Ammo,0)
    COMPAT(UK3CB_TKC_C_Ural_Empty,UK3CB_C_Ural_Empty,0)
    COMPAT(UK3CB_TKC_C_Ural_Recovery,UK3CB_C_Ural_Recovery,0)
    COMPAT(UK3CB_TKC_C_Ural_Repair,UK3CB_C_Ural_Repair,0)
    COMPAT(UK3CB_TKC_C_Gaz24,UK3CB_C_Gaz24,0)
    COMPAT(UK3CB_TKC_C_Golf,UK3CB_C_Golf,0)
    COMPAT(UK3CB_TKC_C_YAVA,UK3CB_C_YAVA_TAK,0)
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Class declarations
    class Uniform_Base;
    class HelmetBase;
    class V_PlateCarrier1_rgr;
    class UK3CB_V_Chestrig_Base;
    class UK3CB_H_Ballistic_Mask_Base;
    class H_Cap_oli;
    class H_RacingHelmet_1_white_F;
    class rhs_Booniehat_flora;

    COMPAT(UK3CB_MEC_C_Jeans_Tshirt_U_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_HIKER_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_CIT_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_ACTIVIST_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_CAN_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_COACH_01,Uniform_Base,0)
    COMPAT(UK3CB_NAP_B_U_WORK_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_WORK_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_PROF_01,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_CEO_SUIT_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_BODYG_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_DOC_01,Uniform_Base,0)
    COMPAT(UK3CB_UN_B_U_Field_Operative,Uniform_Base,0)
    COMPAT(UK3CB_UN_B_U_Field_Operative_02,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_FUNC_01,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_U_Pilot_02,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_01_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_02_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_03_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_04_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_05_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_06_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_07_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_01_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_02_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_03_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_04_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_05_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_01_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_02_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_03_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_04_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_05_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_PoloShirt_Pants_06_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ADE_O_U_01,Uniform_Base,0.4)
    COMPAT(UK3CB_ADE_O_U_03,Uniform_Base,0.4)
    COMPAT(UK3CB_ADE_O_U_06,Uniform_Base,0.4)
    COMPAT(UK3CB_ADE_O_U_02,Uniform_Base,0.2)
    COMPAT(UK3CB_TKM_O_U_01,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_O_U_03,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_O_U_04,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_O_U_05,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_O_U_06,Uniform_Base,0.4)
    COMPAT(UK3CB_ADC_C_Hunter_U_07,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Hunter_U_09,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Hunter_U_08,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Hunter_U_10,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Hunter_U_06,Uniform_Base,0)
    COMPAT(UK3CB_NAP_B_U_Pilot_BLK,Uniform_Base,0)
    COMPAT(UK3CB_NAP_B_U_Pilot_FLK,Uniform_Base,0)
    COMPAT(UK3CB_NAP_B_U_Pilot_FLORA,Uniform_Base,0)
    COMPAT(UK3CB_MEE_O_U_01,Uniform_Base,0.4)
    COMPAT(UK3CB_MEE_O_U_02,Uniform_Base,0.4)
    COMPAT(UK3CB_MEE_O_U_03,Uniform_Base,0.4)
    COMPAT(UK3CB_MEE_O_U_04,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_B_U_01,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_B_U_03,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_B_U_04,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_B_U_05,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_B_U_06,Uniform_Base,0.4)
    COMPAT(UK3CB_CHC_C_U_Overall_01,Uniform_Base,0)
    COMPAT(UK3CB_TKC_C_U_Pilot_A,Uniform_Base,0)
    COMPAT(UK3CB_TKC_C_U_Pilot_B,Uniform_Base,0)
    COMPAT(UK3CB_APD_B_U_PoloShirt_Pants_OFF_01,Uniform_Base,0.4)
    COMPAT(UK3CB_APD_B_U_PoloShirt_Pants_OFF_02,Uniform_Base,0.4)
    COMPAT(UK3CB_APD_B_U_PoloShirt_Pants_01,Uniform_Base,0.4)
    COMPAT(UK3CB_APD_B_U_PoloShirt_Pants_02,Uniform_Base,0.4)
    COMPAT(UK3CB_CHC_C_U_Pilot_01,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_U_Pilot_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_POLITIC_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_PRIEST_01,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_U_01,Uniform_Base,0)
    COMPAT(UK3CB_TKC_C_U_02,Uniform_Base,0)
    COMPAT(UK3CB_TKC_C_U_03,Uniform_Base,0)
    COMPAT(UK3CB_TKC_C_U_06,Uniform_Base,0)
    COMPAT(UK3CB_TKM_I_U_01,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_I_U_03,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_I_U_04,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_I_U_05,Uniform_Base,0.4)
    COMPAT(UK3CB_TKM_I_U_06,Uniform_Base,0.4)
    COMPAT(UK3CB_CHC_C_U_VILL_01,Uniform_Base,0)
    COMPAT(UK3CB_CHC_C_U_WOOD_01,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Shorts_U_01,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Hunter_U_02,Uniform_Base,0.2)
    COMPAT(UK3CB_ADC_C_Hunter_U_04,Uniform_Base,0.2)
    COMPAT(UK3CB_ADC_C_Hunter_U_03,Uniform_Base,0.2)
    COMPAT(UK3CB_ADC_C_Hunter_U_05,Uniform_Base,0.2)
    COMPAT(UK3CB_ADC_C_Hunter_U_01,Uniform_Base,0.2)
    COMPAT(UK3CB_NAP_B_U_Commander_Uniform_WDL,Uniform_Base,0.2)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_05,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_06,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_07,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_08,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_09,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_10,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_11,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_12,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_13,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_14,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_15,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_16,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_01,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_02,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_03,Uniform_Base,0)
    COMPAT(UK3CB_LNM_B_U_Shirt_Pants_04,Uniform_Base,0)
    COMPAT(UK3CB_ADC_C_Pants_U_01,Uniform_Base,0)
    COMPAT(UK3CB_MEI_B_U_Pants_01,Uniform_Base,0)
    COMPAT(UK3CB_MEE_O_U_06,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_01_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_02_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_03_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_10_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_11_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_12_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_05_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_06_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_07_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_08_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_01_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_02_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_03_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_07_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_08_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_09_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_01_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_02_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_03_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_04_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_04_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_05_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_06_DES,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_09_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_10_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_11_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_12_WDL,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_07_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_08_URB,Uniform_Base,0)
    COMPAT(UK3CB_ION_B_U_SF_Uniform_Jeans_Tshirt_09_URB,Uniform_Base,0)
    
    // Helmets

    COMPAT(UK3CB_H_Turban_Facewrap_01_Oli,HelmetBase,0)
    COMPAT(UK3CB_H_Turban_Facewrap_02_Oli,HelmetBase,0)
    COMPAT(UK3CB_H_Turban_Facewrap_03_Oli,HelmetBase,0)
    COMPAT(UK3CB_H_Turban_Neckwrap_01_Oli,HelmetBase,0)
    COMPAT(UK3CB_H_Turban_Neckwrap_02_Oli,HelmetBase,0)
    COMPAT(UK3CB_H_Turban_Neckwrap_03_Oli,HelmetBase,0)
    COMPAT(UK3CB_H_Ballistic_Mask_BLK,UK3CB_H_Ballistic_Mask_Base,0.8)
    COMPAT(UK3CB_H_Beanie_01,HelmetBase,0)
    COMPAT(UK3CB_H_Woolhat_BLK,HelmetBase,0)
    COMPAT(UK3CB_H_Cap_APD,H_Cap_oli,0.8)
    COMPAT(UK3CB_H_Police_Cap,HelmetBase,0.2)
    COMPAT(UK3CB_H_Cap_Back_ION_BLK,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Turban_01_1,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Turban_02_1,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Turban_06_1,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Pilot_Turban_01_1,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Turban_03_1,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Turban_04_1,HelmetBase,0)
    COMPAT(UK3CB_TKC_H_Turban_05_1,HelmetBase,0)
    COMPAT(UK3CB_H_Earpiece,HelmetBase,0)
    COMPAT(UK3CB_TKM_O_H_Turban_03_1,HelmetBase,0)
    COMPAT(UK3CB_TKM_O_H_Turban_04_1,HelmetBase,0)
    COMPAT(UK3CB_TKM_O_H_Turban_05_1,HelmetBase,0)
    COMPAT(UK3CB_TKM_O_H_Turban_01_1,HelmetBase,0)
    COMPAT(UK3CB_TKM_O_H_Turban_02_1,HelmetBase,0)
    COMPAT(UK3CB_APD_B_H_Motorbike_Helmet,H_RacingHelmet_1_white_F,0.8)
    COMPAT(UK3CB_H_WideBrim_Hat,HelmetBase,0)
    COMPAT(UK3CB_H_Worker_Cap_01,HelmetBase,0)
    
    COMPAT(UK3CB_V_Invisible,UK3CB_V_Chestrig_Base,0)
    COMPAT(UK3CB_V_Pouch,UK3CB_V_Chestrig_Base,0.4)
    COMPAT(UK3CB_V_Invisible_Plate,V_PlateCarrier1_rgr,0)
};

class CfgGlasses {
    // Facewear

    // Class declarations
    class None;
    class G_Combat;
    class G_Balaclava_blk;

    COMPAT(UK3CB_Glasses,G_Combat,0)
    COMPAT(UK3CB_G_KLR_BLK,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KLR_Oli,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KLR_TAN,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KL_BLK,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KL_Oli,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KL_TAN,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_Oli,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_Tan,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_KLR_blk,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_KLR_tan,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_KL_blk,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_KL_tan,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_KR_blk,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_Neck_Shemag_KR_tan,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KR_BLK,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KR_Oli,G_Balaclava_blk,0)
    COMPAT(UK3CB_G_KR_TAN,G_Balaclava_blk,0)
};