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

    // Military Backpacks
    COMPAT(B_AssaultPack_blk,0.1)
    COMPAT(B_AssaultPack_cbr,0.2)
    COMPAT(B_AssaultPack_rgr,0.2)
    COMPAT(B_AssaultPack_sgg,0.2)
    COMPAT(B_Respawn_Sleeping_bag_blue_F,0)
    COMPAT(B_Respawn_Sleeping_bag_brown_F,0)
    COMPAT(B_Respawn_TentDome_F,0)
    COMPAT(B_Patrol_Respawn_bag_F,0.5)
    COMPAT(B_Respawn_Sleeping_bag_F,0)
    COMPAT(B_Respawn_TentA_F,0)
    COMPAT(B_Carryall_blk,0)
    COMPAT(B_Carryall_cbr,0)
    COMPAT(B_Carryall_green_F,0)
    COMPAT(B_Carryall_khk,0)
    COMPAT(B_CombinationUnitRespirator_01_F,0.3)
    COMPAT(B_HMG_01_weapon_F,4)
    COMPAT(B_Kitbag_Base,0.4)
    COMPAT(B_Kitbag_mcamo,0.5)

    // Civilian Backpacks
    COMPAT(B_CivilianBackpack_01_Base_F,0)
    COMPAT(B_FieldPack_Base,0)
    COMPAT(B_FieldPack_ghex_F,0.8)
    COMPAT(B_FieldPack_ocamo,0.8)
    COMPAT(B_FieldPack_taiga_F,0.8)
    COMPAT(B_FieldPack_oucamo,0.8)
    COMPAT(B_LegStrapBag_base_F,0)
    COMPAT(B_Messenger_Base_F,0)
    COMPAT(B_TacticalPack_Base,0.2)
    COMPAT(B_TacticalPack_mcamo,0.8)

    // Military Vehicles
    COMPAT(Offroad_01_military_base_F,0.9)
    COMPAT(I_C_Offroad_02_LMG_F,0.8)

    // Civilian Vehicles
    COMPAT(Quadbike_01_base_F,0)
    COMPAT(Rescue_duck_base_F,0)
    COMPAT(C_Heli_Light_01_civil_F,0)
    COMPAT(C_Boat_Civil_01_F,0)
    COMPAT(C_Boat_Transport_02_F,0)
    COMPAT(C_Scooter_Transport_01_F,0)
    COMPAT(C_Van_01_fuel_F,0)
    COMPAT(C_Hatchback_01_F,0)
    COMPAT(C_Hatchback_01_sport_F,0)
    COMPAT(C_Offroad_02_unarmed_F,0)
    COMPAT(C_Truck_02_fuel_F,0)
    COMPAT(C_Truck_02_box_F,0)
    COMPAT(C_Truck_02_transport_F,0)
    COMPAT(C_Truck_02_covered_F,0)
    COMPAT(C_Kart_01_F,0)
    COMPAT(C_Kart_01_Blu_F,0)
    COMPAT(C_Kart_01_Fuel_F,0)
    COMPAT(C_Kart_01_Red_F,0)
    COMPAT(C_Kart_01_Vrana_F,0)
    COMPAT(C_Offroad_01_F,0)
    COMPAT(C_Offroad_01_comms_F,0)
    COMPAT(C_Offroad_01_covered_F,0)
    COMPAT(C_Offroad_01_repair_F,0)
    COMPAT(C_Quadbike_01_F,0)
    COMPAT(C_SUV_01_F,0)
    COMPAT(C_Tractor_01_F,0)
    COMPAT(C_Van_01_transport_F,0)
    COMPAT(C_Van_01_box_F,0)
    COMPAT(C_Van_02_vehicle_F,0)
    COMPAT(C_Van_02_service_F,0)
    COMPAT(C_Van_02_transport_F,0)
    COMPAT(C_Plane_Civil_01_F,0)
    COMPAT(C_Plane_Civil_01_racing_F,0)
    COMPAT(C_Van_02_medevac_F,-1)
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Guns
    COMPAT(hgun_PDW2000_F,0.8)
    COMPAT(sgun_HunterShotgun_01_sawedoff_F,0.8)
    COMPAT(sgun_HunterShotgun_01_F,1.2)
    COMPAT(SMG_05_F,0.8)
    COMPAT(SMG_03C_BASE,0.8)
    COMPAT(SMG_01_F,1)

    // Military Headwear
    COMPAT(H_HelmetHBK_base_F,2)
    COMPAT(H_HelmetSpecO_ocamo,3)
    COMPAT(H_HelmetAggressor_base_F,3)
    COMPAT(H_PASGT_basic_base_F,1)
    COMPAT(H_Beret_gen_F,0.9)
    COMPAT(H_Beret_CSAT_01_F,0.9)
    COMPAT(H_Beret_EAF_01_F,0.9)
    COMPAT(H_Beret_02,0.9)
    COMPAT(H_Beret_Colonel,0.9)
    COMPAT(H_Cap_police,0.5)
    COMPAT(H_Cap_blk_Raven,0.4)
    COMPAT(H_Cap_brn_SPECOPS,0.4)
    COMPAT(H_HelmetB,2.1)
    COMPAT(H_HelmetCrew_O_ghex_F,3)
    COMPAT(H_Tank_base_F,2.5)
    COMPAT(H_HelmetCrew_B,3)
    COMPAT(H_HelmetLeaderO_ocamo,3)
    COMPAT(H_CrewHelmetHeli_B,3)
    COMPAT(H_PilotHelmetHeli_B,3)
    COMPAT(H_MilCap_ocamo,0.5)
    COMPAT(H_ParadeDressCap_01_base_F,0.2)
    COMPAT(H_PilotHelmetFighter_B,4)
    COMPAT(H_HelmetO_ocamo,3)
    COMPAT(H_HelmetO_ViperSP_hex_F,3)
    COMPAT(H_HelmetB_TI_tna_F,2.7)

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
    COMPAT(H_Beret_blk,0)
    COMPAT(H_Booniehat_khk_hs,0.7)
    COMPAT(H_Booniehat_khk,0.5)
    COMPAT(H_Booniehat_mcamo,0.7)
    COMPAT(H_Cap_blk_CMMG,0.05)
    COMPAT(H_Cap_blk_ION,0.05)
    COMPAT(H_Cap_oli_hs,0.4)
    COMPAT(H_Cap_press,-0.2)
    COMPAT(H_Cap_red,0)
    COMPAT(H_Cap_khaki_specops_UK,0.1)
    COMPAT(H_Cap_usblack,0.1)
    COMPAT(H_Cap_tan_specops_US,0.1)
    COMPAT(H_EarProtectors_base_F,0)
    COMPAT(H_Construction_basic_base_F,-0.2)
    COMPAT(H_Construction_earprot_base_F,-0.2)
    COMPAT(H_Construction_headset_base_F,-0.2)
    COMPAT(H_Hat_blue,0)
    COMPAT(H_Hat_camo,0.2)
    COMPAT(H_HeadBandage_base_F,0)
    COMPAT(H_Cap_headphones,0.1)
    COMPAT(H_PASGT_basic_blue_press_F,-0.5)
    COMPAT(H_PASGT_neckprot_blue_press_F,-0.5)
    COMPAT(H_RacingHelmet_1_F,0.05)
    COMPAT(H_Hat_Safari_base_F,0)
    COMPAT(H_Helmet_Skate,0.1)
    COMPAT(H_StrawHat,0)
    COMPAT(H_Hat_Tinfoil_base_F,-1000000)
    COMPAT(H_WirelessEarpiece_base_F,0)

    // Military Vests
    COMPAT(V_Chestrig_khk,0.8)
    COMPAT(V_Chestrig_oli,0.8)
    COMPAT(V_TacChestrig_grn_F,0.7)    

    // Civilian Vests
    COMPAT(V_Press_F,-0.8)
    COMPAT(V_EOD_base_F,0.3)
    COMPAT(V_Plain_base_F,0)
    COMPAT(V_Pocketed_base_F,0)
    COMPAT(V_Safety_base_F,-0.3)
    COMPAT(V_EOD_IDAP_blue_F,0.2)
    COMPAT(V_LegStrapBag_base_F,0)

    // Military Uniforms
    COMPAT(U_B_CTRG_2,0.9)
    COMPAT(U_B_T_Soldier_AR_F,0.9)
    COMPAT(U_B_CTRG_Soldier_2_F,0.9)
    COMPAT(U_C_CBRN_Suit_01_Blue_F,0.9)
    COMPAT(U_C_CBRN_Suit_01_White_F,0.9)
    COMPAT(U_I_G_resistanceLeader_F,0.5)
    COMPAT(U_B_CTRG_Soldier_urb_2_F,0.9)
    COMPAT(U_I_G_Story_Protagonist_F,0.9)
    COMPAT(U_I_E_Uniform_01_tanktop_F,0.9)
    COMPAT(U_I_L_Uniform_01_deserter_F,0.9)
    COMPAT(U_B_CombatUniform_mcam_tshirt,0.9)
    COMPAT(U_B_CombatUniform_tshirt_mcam_wdL_f,0.9)

    // Civilian Uniforms
    COMPAT(U_Marshal,0)
    COMPAT(U_C_Poor_1,0)
    COMPAT(U_Competitor,0)    
    COMPAT(U_C_Driver_1,0)
    COMPAT(U_C_Driver_2,0)
    COMPAT(U_C_Driver_3,0)
    COMPAT(U_C_Driver_4,0)
    COMPAT(U_BG_leader,0.3)
    COMPAT(U_OrestesBody,0)
    COMPAT(U_Rangemaster,0.1)
    COMPAT(U_C_Scientist,0.1)
    COMPAT(U_C_Driver_1_red,0)
    COMPAT(U_C_Mechanic_01_F,0)
    COMPAT(U_C_Journalist,-0.5)
    COMPAT(U_C_Driver_1_blue,0)
    COMPAT(U_C_man_sport_1_F,0)
    COMPAT(U_C_man_sport_2_F,0)
    COMPAT(U_C_man_sport_3_F,0)
    COMPAT(U_O_R_Gorka_01_F,0.1)
    COMPAT(U_BG_Guerilla1_1,0.1)
    COMPAT(U_BG_Guerilla2_2,0.1)
    COMPAT(U_BG_Guerilla2_1,0.1)
    COMPAT(U_BG_Guerilla2_3,0.1)
    COMPAT(U_BG_Guerilla3_1,0.1)
    COMPAT(U_C_Driver_1_black,0)
    COMPAT(U_C_Driver_1_green,0)
    COMPAT(U_C_Driver_1_white,0)
    COMPAT(U_C_Man_casual_1_F,0)
    COMPAT(U_C_Man_casual_2_F,0)
    COMPAT(U_C_Man_casual_3_F,0)
    COMPAT(U_C_Man_casual_4_F,0)
    COMPAT(U_C_Man_casual_5_F,0)
    COMPAT(U_C_Man_casual_6_F,0)
    COMPAT(U_C_IDAP_Man_Tee_F,0)
    COMPAT(U_C_Poloshirt_blue,0)
    COMPAT(U_C_WorkerCoveralls,0)
    COMPAT(U_C_Driver_1_yellow,0)
    COMPAT(U_C_Driver_1_orange,0)
    COMPAT(U_C_Poloshirt_salmon,0)
    COMPAT(U_BG_Guerrilla_6_1,0.1)
    COMPAT(U_BG_Guerilla1_2_F,0.1)
    COMPAT(U_C_HunterBody_grn,0.3)
    COMPAT(U_C_IDAP_Man_cargo_F,0)
    COMPAT(U_C_IDAP_Man_Jeans_F,0)
    COMPAT(U_C_IDAP_Man_casual_F,0)
    COMPAT(U_C_IDAP_Man_shorts_F,0)
    COMPAT(U_C_Paramedic_01_F,-0.5)
    COMPAT(U_C_ArtTShirt_01_v1_F,0)
    COMPAT(U_C_ArtTShirt_02_v2_F,0)
    COMPAT(U_C_ArtTShirt_03_v3_F,0)
    COMPAT(U_C_ArtTShirt_04_v4_F,0)
    COMPAT(U_C_ArtTShirt_05_v5_F,0)
    COMPAT(U_C_ArtTShirt_01_v6_F,0)
    COMPAT(U_C_Poloshirt_stripped,0)
    COMPAT(U_C_Poloshirt_burgundy,0)
    COMPAT(U_C_Poloshirt_redwhite,0)
    COMPAT(U_C_Poloshirt_tricolour,0)
    COMPAT(U_C_Uniform_Farmer_01_F,0)
    COMPAT(U_O_R_Gorka_01_camo_F,0.2)
    COMPAT(U_C_FormalSuit_01_blue_F,0)
    COMPAT(U_C_FormalSuit_01_gray_F,0)
    COMPAT(U_O_R_Gorka_01_black_F,0.1)
    COMPAT(U_O_R_Gorka_01_brown_F,0.1)
    COMPAT(U_C_IDAP_Man_TeeShorts_F,0)
    COMPAT(U_I_C_Soldier_Bandit_1_F,0)
    COMPAT(U_I_C_Soldier_Bandit_2_F,0)
    COMPAT(U_I_C_Soldier_Bandit_3_F,0)
    COMPAT(U_I_C_Soldier_Bandit_4_F,0)
    COMPAT(U_I_C_Soldier_Bandit_5_F,0)
    COMPAT(U_I_C_Soldier_Para_1_F,0.2)
    COMPAT(U_I_C_Soldier_Para_2_F,0.2)
    COMPAT(U_I_C_Soldier_Para_3_F,0.2)
    COMPAT(U_I_C_Soldier_Para_4_F,0.2)
    COMPAT(U_I_C_Soldier_Para_5_F,0.1)
    COMPAT(U_C_FormalSuit_01_khaki_F,0)
    COMPAT(U_C_FormalSuit_01_black_F,0)
    COMPAT(U_C_E_LooterJacket_01_F,0.2)
    COMPAT(U_C_Uniform_Scientist_01_F,0)
    COMPAT(U_C_Uniform_Scientist_02_F,0)
    COMPAT(U_I_L_Uniform_01_tshirt_black_F,0)
    COMPAT(U_I_L_Uniform_01_tshirt_olive_F,0)
    COMPAT(U_I_L_Uniform_01_tshirt_skull_F,0)
    COMPAT(U_I_L_Uniform_01_tshirt_sport_F,0)
    COMPAT(U_C_FormalSuit_01_tshirt_gray_F,0)
    COMPAT(U_C_FormalSuit_01_tshirt_black_F,0)
    COMPAT(U_C_Uniform_Scientist_01_formal_F,0)
    COMPAT(U_C_Uniform_Scientist_02_formal_F,0)
    COMPAT(U_C_ConstructionCoverall_Red_F,-0.2)
    COMPAT(U_C_ConstructionCoverall_Blue_F,-0.2)
    COMPAT(U_C_ConstructionCoverall_Black_F,-0.2)
    COMPAT(U_C_ConstructionCoverall_Vrana_F,-0.15)
};

class CfgGlasses {
    // Facewear

    // Civilian Facewear
    COMPAT(G_Aviator,0)
    COMPAT(G_Squares,0)
    COMPAT(G_Sport_Red,0)
    COMPAT(G_Lady_Blue,0)
    COMPAT(G_Goggles_VR,0)
    COMPAT(G_Shades_Red,0)
    COMPAT(G_Spectacles,0)
    COMPAT(G_Shades_Blue,0)
    COMPAT(G_Shades_Black,0)
    COMPAT(G_Shades_Green,0)
    COMPAT(G_Squares_Tinted,0)
    COMPAT(G_Bandanna_blk,0.4)
    COMPAT(G_Sport_Blackred,0)
    COMPAT(G_Sport_Checkered,0)
    COMPAT(G_Sport_Greenblack,0)
    COMPAT(G_Sport_BlackWhite,0)
    COMPAT(G_Sport_Blackyellow,0)    
    COMPAT(G_Spectacles_Tinted,0)
    COMPAT(G_Respirator_base_F,0)
    COMPAT(G_WirelessEarpiece_F,0)
    COMPAT(G_EyeProtectors_base_F,0)
};