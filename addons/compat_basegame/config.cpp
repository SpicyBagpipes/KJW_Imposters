#include "script_component.hpp"

class CfgPatches {
    class COMPONENT_GENERAL {
        author="KJW";
        requiredAddons[]=
        {
            "A3_Data_F",
            "A3_Weapons_F",
            "A3_Characters_F",
            "A3_Data_F_AoW_Loadorder"
        };
        requiredVersion=1;
		units[] = {""};
		weapons[] = {""};
		vehicles[] = {""};
	};
};

class CfgVehicles {
    // Backpacks, Vehicles
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Military Headwear
    COMPAT(H_HelmetHBK_headset_F,2)
    COMPAT(H_HelmetHBK_chops_F,2.4)
    COMPAT(H_HelmetHBK_ear_F,2.3)
    COMPAT(H_HelmetHBK_F,2)
    COMPAT(H_HelmetSpecO_blk,3)
    COMPAT(H_HelmetSpecO_ghex_F,3)
    COMPAT(H_HelmetSpecO_ocamo,3)
    COMPAT(H_HelmetAggressor_F,3)
    COMPAT(H_HelmetAggressor_cover_F,3)
    COMPAT(H_HelmetAggressor_cover_taiga_F,3)
    COMPAT(H_PASGT_basic_black_F,1)
    COMPAT(H_PASGT_basic_blue_F,1)
    COMPAT(H_PASGT_basic_olive_F,1)
    COMPAT(H_PASGT_basic_white_F,1)
    COMPAT(H_Beret_gen_F,0.9)
    COMPAT(H_Beret_CSAT_01_F,0.9)
    COMPAT(H_Beret_EAF_01_F,0.9)
    COMPAT(H_Beret_02,0.9)
    COMPAT(H_Beret_Colonel,0.9)
    COMPAT(H_Cap_police,0.5)
    COMPAT(H_Cap_blk_Raven,0.4)
    COMPAT(H_Cap_brn_SPECOPS,0.4)
    COMPAT(H_HelmetB,2.1)
    COMPAT(H_HelmetB_black,2.1)
    COMPAT(H_HelmetB_camo,2)
    COMPAT(H_HelmetB_desert,2.1)
    COMPAT(H_HelmetB_grass,2.1)
    COMPAT(H_HelmetB_sand,2.1)
    COMPAT(H_HelmetB_snakeskin,2.1) //  FINISIHED ON HERE IN ALPHABETICAL

    // Civilian Headwear
    COMPAT(H_Bandanna_gry,0)
    COMPAT(H_Bandanna_blu,0)
    COMPAT(H_Bandanna_cbr,0)
    COMPAT(H_Bandanna_khk_hs,0.4)
    COMPAT(H_Bandanna_khk,0)
    COMPAT(H_Bandanna_mcamo,0.1)
    COMPAT(H_Bandanna_sgg,0)
    COMPAT(H_Bandanna_sand,0)
    COMPAT(H_Bandanna_surfer,-0.1)
    COMPAT(H_Bandanna_surfer_blk,-0.1)
    COMPAT(H_Bandanna_surfer_grn,-0.1)
    COMPAT(H_Bandanna_camo,0.1)
    COMPAT(H_Watchcap_blk,0.4)
    COMPAT(H_Watchcap_cbr,0.4)
    COMPAT(H_Watchcap_camo,0.4)
    COMPAT(H_Watchcap_khk,0.4)
    COMPAT(H_Beret_blk,0)
    COMPAT(H_Booniehat_mgrn,0.5)
    COMPAT(H_Booniehat_khk_hs,0.7)
    COMPAT(H_Booniehat_khk,0.5)
    COMPAT(H_Booniehat_mcamo,0.7)
    COMPAT(H_Booniehat_oli,0.5)
    COMPAT(H_Booniehat_tan,0.5)
    COMPAT(H_Booniehat_taiga,0.5)
    COMPAT(H_Booniehat_tna_F,0.5)
    COMPAT(H_Booniehat_wdl,0.5)
    COMPAT(H_Booniehat_dgtl,0.5)
    COMPAT(H_Booniehat_eaf,0.5)
    COMPAT(H_Cap_grn_BI,0)
    COMPAT(H_Cap_blk,0)
    COMPAT(H_Cap_Black_IDAP_F,0)
    COMPAT(H_Cap_blu,0)
    COMPAT(H_Cap_blk_CMMG,0.05)
    COMPAT(H_Cap_grn,0)
    COMPAT(H_Cap_blk_ION,0.05)
    COMPAT(H_Cap_Lyfe,0)
    COMPAT(H_Cap_MaldenTours,0)
    COMPAT(H_Cap_oli,0)
    COMPAT(H_Cap_oli_hs,0.4)
    COMPAT(H_Cap_Orange_IDAP_F,0)
    COMPAT(H_Cap_press,-0.2)
    COMPAT(H_Cap_red,0)
    COMPAT(H_Cap_surfer,0)
    COMPAT(H_Cap_tan,0)
    COMPAT(H_Cap_khaki_specops_UK,0.1)
    COMPAT(H_Cap_usblack,0.1)
    COMPAT(H_Cap_tan_specops_US,0.1)
    COMPAT(H_Cap_White_IDAP_F,0)
};

class CfgGlasses {
    // Facewear
};