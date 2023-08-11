class CfgPatches {
    class KJW_Imposters {
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

#include "macro_function.hpp"
#include "macro_exception.hpp"
#include "macro_balaclava.hpp"

class Extended_PostInit_EventHandlers {
    class KJW_Imposters_PostInit {
        init = "call compileScript ['KJW_Imposters\functions\fn_postInit.sqf']";
    };
};
class Extended_PreInit_EventHandlers {
    class KJW_Imposters_PreInit {
        init = "call compileScript ['KJW_Imposters\functions\fn_preInit.sqf']";
    };
};


class CfgFunctions {
    class KJW_Imposters {
        class functions {
            MACRO_FUNCTION(notes);
            MACRO_FUNCTION(mainLoop);
            MACRO_FUNCTION(addCBASettings);
            MACRO_FUNCTION(itemException);
            MACRO_FUNCTION(playerKnownToEnemies);
            MACRO_FUNCTION(playerOvertCheck);
            MACRO_FUNCTION(playerWearingBalaclava);
            MACRO_FUNCTION(isPlayerKnownAbout);
            MACRO_FUNCTION(playerRespawn);
            MACRO_FUNCTION(enemySides);
            MACRO_FUNCTION(ballisticProtectionCheck);
            MACRO_FUNCTION(postInit);
            MACRO_FUNCTION(preInit);
            MACRO_FUNCTION(clearWanted);
            MACRO_FUNCTION(susPoints);
            MACRO_FUNCTION(generateEntry);
        };
    };
};

class CfgWeapons {
    class Vest_Camo_Base;
    class Vest_NoCamo_Base;
    class V_Plain_base_F;
    class HelmetBase;
    class H_PASGT_basic_base_F;
    class H_PASGT_neckprot_base_F;
    class H_HelmetB_camo;
    class H_HelmetB;
    class Uniform_Base;
    class H_MilCap_ocamo;
    //Whitelisted vests w/ protection below plus some.
    MACRO_EXCEPTION(V_EOD_base_F,Vest_Camo_Base,1);
    MACRO_EXCEPTION(V_Plain_crystal_F,V_Plain_base_F,1);
    MACRO_EXCEPTION(V_Plain_medical_F,V_Plain_base_F,1);
    MACRO_EXCEPTION(V_LegStrapBag_base_F,Vest_Camo_Base,1);
    MACRO_EXCEPTION(V_Pocketed_base_F,Vest_Camo_Base,1);
    MACRO_EXCEPTION(V_Safety_base_F,Vest_Camo_Base,1);
    MACRO_EXCEPTION(V_Press_F,Vest_Camo_Base,1);
    //Blacklisted vests w/ no protection below.
    MACRO_EXCEPTION(V_BandollierB_khk,Vest_Camo_Base,2);
    MACRO_EXCEPTION(V_TacChestrig_grn_F,Vest_Camo_Base,2);
    MACRO_EXCEPTION(V_Rangemaster_belt,Vest_NoCamo_Base,2);
    MACRO_EXCEPTION(V_Chestrig_khk,Vest_Camo_Base,2);
    MACRO_EXCEPTION(V_SmershVest_01_base_F,Vest_Camo_Base,2);
    MACRO_EXCEPTION(V_HarnessOGL_brn,Vest_NoCamo_Base,2);
    MACRO_EXCEPTION(V_HarnessO_brn,Vest_NoCamo_Base,2);
    //Whitelisted helmets w/ protection below.
    MACRO_EXCEPTION(H_Construction_basic_base_F,HelmetBase,1);
    MACRO_EXCEPTION(H_PASGT_basic_blue_press_F,H_PASGT_basic_base_F,1);
    MACRO_EXCEPTION(H_PASGT_neckprot_blue_press_F,H_PASGT_neckprot_base_F,1);
    MACRO_EXCEPTION(H_RacingHelmet_1_F,H_HelmetB_camo,1);
    MACRO_EXCEPTION(H_Helmet_Skate,H_HelmetB,1);
    //Blacklisted helmets w/ no protection below.
    MACRO_EXCEPTION(H_MilCap_oucamo,H_MilCap_ocamo,2);
    MACRO_EXCEPTION(H_MilCap_gen_F,H_MilCap_ocamo,2);
    //Balaclava helmets.
    MACRO_BALACLAVA(H_ShemagOpen_khk,HelmetBase,1);
    //Whitelisted uniforms.
    MACRO_EXCEPTION(U_C_Poor_1,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poor_2,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Protagonist_VR,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_WorkerCoveralls,Uniform_Base,1);
    MACRO_EXCEPTION(U_O_R_Gorka_01_black_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Man_casual_5_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Man_casual_4_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Man_casual_6_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_man_sport_2_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_man_sport_3_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_man_sport_1_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Uniform_Scientist_02_formal_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Uniform_Scientist_02_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Uniform_Scientist_01_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Uniform_Scientist_01_formal_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Scientist,Uniform_Base,1);
    MACRO_EXCEPTION(U_Rangemaster,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Paramedic_01_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_B_ParadeUniform_01_US_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_E_ParadeUniform_01_LDF_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_O_ParadeUniform_01_CSAT_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_ParadeUniform_01_AAF_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_B_ParadeUniform_01_US_decorated_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_E_ParadeUniform_01_LDF_decorated_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_O_ParadeUniform_01_CSAT_decorated_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_ParadeUniform_01_AAF_decorated_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Mechanic_01_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_Marshal,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_L_Uniform_01_tshirt_black_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_L_Uniform_01_tshirt_olive_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_L_Uniform_01_tshirt_skull_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_L_Uniform_01_tshirt_sport_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Journalist,Uniform_Base,1);
    MACRO_EXCEPTION(U_OrestesBody,Uniform_Base,1);
    MACRO_EXCEPTION(U_BG_Guerilla2_3,Uniform_Base,1);
    MACRO_EXCEPTION(U_BG_Guerilla2_1,Uniform_Base,1);
    MACRO_EXCEPTION(U_BG_Guerilla2_2,Uniform_Base,1);
    MACRO_EXCEPTION(U_BG_Guerrilla_6_1,Uniform_Base,1);
    MACRO_EXCEPTION(U_BG_Guerilla1_1,Uniform_Base,1);
    MACRO_EXCEPTION(U_BG_Guerilla1_2_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Para_1_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Para_4_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Para_5_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Para_3_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Para_2_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_O_R_Gorka_01_camo_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_O_R_Gorka_01_brown_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_O_R_Gorka_01_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_FormalSuit_01_tshirt_gray_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_FormalSuit_01_tshirt_black_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_FormalSuit_01_khaki_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_FormalSuit_01_gray_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_FormalSuit_01_blue_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_FormalSuit_01_black_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Uniform_Farmer_01_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_yellow,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_white,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_4,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_3,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_red,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_orange,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_green,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_2,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_blue,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Driver_1_black,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_L_Uniform_01_deserter_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_L_Uniform_01_camo_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ConstructionCoverall_Vrana_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ConstructionCoverall_Red_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ConstructionCoverall_Blue_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ConstructionCoverall_Black_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_Competitor,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poloshirt_tricolour,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poloshirt_stripped,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poloshirt_salmon,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poloshirt_redwhite,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poloshirt_burgundy,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Poloshirt_blue,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_CBRN_Suit_01_White_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_CBRN_Suit_01_Blue_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ArtTShirt_01_v3_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ArtTShirt_01_v5_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Man_casual_1_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Man_casual_3_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ArtTShirt_01_v4_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ArtTShirt_01_v2_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_Man_casual_2_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ArtTShirt_01_v1_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_ArtTShirt_01_v6_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Bandit_3_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Bandit_5_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Bandit_2_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Bandit_1_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_I_C_Soldier_Bandit_4_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_IDAP_Man_TeeShorts_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_IDAP_Man_Tee_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_IDAP_Man_shorts_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_IDAP_Man_casual_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_IDAP_Man_Jeans_F,Uniform_Base,1);
    MACRO_EXCEPTION(U_C_IDAP_Man_cargo_F,Uniform_Base,1);
};

class CfgVehicles {
    class Car_F;
    MACRO_EXCEPTION(Quadbike_01_base_F,Car_F,1); //Whitelisted vehicle

    class Bag_Base;
    class UGV_02_Demining_backpack_base_F;
    class UAV_06_backpack_base_F;
    class B_SCBA_01_base_F;
    class B_CombinationUnitRespirator_01_Base_F;
    class Weapon_Bag_Base;
    //Whitelisted backpacks.
    MACRO_EXCEPTION(B_CivilianBackpack_01_Base_F,Bag_Base,1);
    MACRO_EXCEPTION(B_FieldPack_Base,Bag_Base,1);
    MACRO_EXCEPTION(B_LegStrapBag_base_F,Bag_Base,1);
    MACRO_EXCEPTION(B_Messenger_Base_F,Bag_Base,1);
    MACRO_EXCEPTION(C_IDAP_UGV_02_Demining_backpack_F,UGV_02_Demining_backpack_base_F,1);
    MACRO_EXCEPTION(UAV_06_medical_backpack_base_F,UAV_06_backpack_base_F,1);
    MACRO_EXCEPTION(C_IDAP_UAV_06_backpack_F,UAV_06_backpack_base_F,1);
    MACRO_EXCEPTION(C_UAV_06_backpack_F,UAV_06_backpack_base_F,1);
    MACRO_EXCEPTION(C_UAV_06_medical_backpack_F,UAV_06_medical_backpack_base_F,1);
    MACRO_EXCEPTION(C_IDAP_UAV_01_backpack_F,Weapon_Bag_Base,1);
    MACRO_EXCEPTION(C_IDAP_UAV_06_antimine_backpack_F,C_IDAP_UAV_06_backpack_F,1);
    MACRO_EXCEPTION(B_SCBA_01_F,B_SCBA_01_base_F,1);
    MACRO_EXCEPTION(B_CombinationUnitRespirator_01_F,B_CombinationUnitRespirator_01_Base_F,1);
};

class CfgGlasses {
    class None;
    MACRO_EXCEPTION(G_Aviator,None,1);
    MACRO_EXCEPTION(G_AirPurifyingRespirator_01_base_F,None,1);
    MACRO_EXCEPTION(G_Blindfold_01_base_F,None,1);
    MACRO_EXCEPTION(G_RegulatorMask_base_F,None,1);
    MACRO_EXCEPTION(G_Respirator_base_F,None,1);
    MACRO_EXCEPTION(G_EyeProtectors_base_F,None,1);
    MACRO_EXCEPTION(G_Lady_Blue,None,1);
    MACRO_EXCEPTION(G_Spectacles_Tinted,None,1);
    MACRO_EXCEPTION(G_Goggles_VR,None,1);
    MACRO_EXCEPTION(G_WirelessEarpiece_base_F,None,1);
    MACRO_EXCEPTION(G_Shades_Black,None,1);
    MACRO_EXCEPTION(G_Shades_Blue,None,1);
    MACRO_EXCEPTION(G_Shades_Green,None,1);
    MACRO_EXCEPTION(G_Shades_Red,None,1);
    MACRO_EXCEPTION(G_Spectacles,None,1);
    MACRO_EXCEPTION(G_Sport_Red,None,1);
    MACRO_EXCEPTION(G_Sport_Blackyellow,None,1);
    MACRO_EXCEPTION(G_Sport_BlackWhite,None,1);
    MACRO_EXCEPTION(G_Sport_Checkered,None,1);
    MACRO_EXCEPTION(G_Sport_Blackred,None,1);
    MACRO_EXCEPTION(G_Sport_Greenblack,None,1);
    MACRO_EXCEPTION(G_Squares_Tinted,None,1);
    MACRO_EXCEPTION(G_Squares,None,1);
    //Balaclavas below
    MACRO_BALACLAVA(G_Balaclava_blk,None,1);
    MACRO_BALACLAVA(G_Balaclava_TI_blk_F,None,1);
};