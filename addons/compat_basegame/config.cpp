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

    // Base class declarations
    class B_AssaultPack_Base;
    class B_FieldPack_blk;
    class B_FieldPack_khk;
    class B_Carryall_oli;
    class B_Kitbag_mcamo;
    class B_FieldPack_oli;
    class B_Carryall_cbr;
    class B_Carryall_Base;
    class B_CombinationUnitRespirator_01_Base_F;
    class Weapon_Bag_Base;
    class Bag_Base;
    class B_Kitbag_Base;
    class B_FieldPack_Base;
    class B_TacticalPack_Base;
    class Offroad_01_base_F;
    class Offroad_02_LMG_base_F;
    class Car_F;
    class Rubber_duck_base_F;
    class Heli_Light_01_civil_base_F;
    class Boat_Civil_01_base_F;
    class Boat_Transport_02_base_F;
    class Scooter_Transport_01_base_F;
    class Van_01_fuel_base_F;
    class Hatchback_01_base_F;
    class Hatchback_01_sport_base_F;
    class Offroad_02_unarmed_base_F;
    class Truck_02_fuel_base_F;
    class Truck_02_box_base_F;
    class Truck_02_transport_base_F;
    class Truck_02_base_F;
    class C_Kart_01_F_Base;
    class Offroad_01_civil_base_F;
    class Offroad_01_military_comms_base_F;
    class Offroad_01_military_covered_base_F;
    class Offroad_01_repair_base_F;
    class Quadbike_01_base_F;
    class SUV_01_base_F;
    class Tractor_01_base_F;
    class Van_01_transport_base_F;
    class Van_01_box_base_F;
    class Van_02_vehicle_base_F;
    class Van_02_service_base_F;
    class Van_02_transport_base_F;
    class Plane_Civil_01_base_F;
    class Van_02_medevac_base_F;

    COMPAT(B_AssaultPack_blk,B_AssaultPack_Base,0.1)
    COMPAT(B_AssaultPack_cbr,B_AssaultPack_Base,0.2)
    COMPAT(B_AssaultPack_rgr,B_AssaultPack_Base,0.2)
    COMPAT(B_AssaultPack_sgg,B_AssaultPack_Base,0.2)
    COMPAT(B_Respawn_Sleeping_bag_blue_F,B_FieldPack_blk,0)
    COMPAT(B_Respawn_Sleeping_bag_brown_F,B_FieldPack_khk,0)
    COMPAT(B_Respawn_TentDome_F,B_Carryall_oli,0)
    COMPAT(B_Patrol_Respawn_bag_F,B_Kitbag_mcamo,0.5)
    COMPAT(B_Respawn_Sleeping_bag_F,B_FieldPack_oli,0)
    COMPAT(B_Respawn_TentA_F,B_Carryall_cbr,0)
    COMPAT(B_Carryall_blk,B_Carryall_Base,0)
    COMPAT(B_Carryall_cbr,B_Carryall_Base,0)
    COMPAT(B_Carryall_green_F,B_Carryall_Base,0)
    COMPAT(B_Carryall_khk,B_Carryall_Base,0)
    COMPAT(B_CombinationUnitRespirator_01_F,B_CombinationUnitRespirator_01_Base_F,0.3)
    COMPAT(B_HMG_01_weapon_F,Weapon_Bag_Base,4)
    COMPAT(B_Kitbag_Base,Bag_Base,0.4)
    COMPAT(B_Kitbag_mcamo,B_Kitbag_Base,0.5)
    COMPAT(B_CivilianBackpack_01_Base_F,Bag_Base,0)
    COMPAT(B_FieldPack_Base,Bag_Base,0)
    COMPAT(B_FieldPack_ghex_F,B_FieldPack_Base,0.8)
    COMPAT(B_FieldPack_ocamo,B_FieldPack_Base,0.8)
    COMPAT(B_FieldPack_taiga_F,B_FieldPack_Base,0.8)
    COMPAT(B_FieldPack_oucamo,B_FieldPack_Base,0.8)
    COMPAT(B_LegStrapBag_base_F,Bag_Base,0)
    COMPAT(B_Messenger_Base_F,Bag_Base,0)
    COMPAT(B_TacticalPack_Base,Bag_Base,0.2)
    COMPAT(B_TacticalPack_mcamo,B_TacticalPack_Base,0.8)
    COMPAT(Offroad_01_military_base_F,Offroad_01_base_F,0.9)
    COMPAT(I_C_Offroad_02_LMG_F,Offroad_02_LMG_base_F,0.8)
    COMPAT(Quadbike_01_base_F,Car_F,0)
    COMPAT(Rescue_duck_base_F,Rubber_duck_base_F,0)
    COMPAT(C_Heli_Light_01_civil_F,Heli_Light_01_civil_base_F,0)
    COMPAT(C_Boat_Civil_01_F,Boat_Civil_01_base_F,0)
    COMPAT(C_Boat_Transport_02_F,Boat_Transport_02_base_F,0)
    COMPAT(C_Scooter_Transport_01_F,Scooter_Transport_01_base_F,0)
    COMPAT(C_Van_01_fuel_F,Van_01_fuel_base_F,0)
    COMPAT(C_Hatchback_01_F,Hatchback_01_base_F,0)
    COMPAT(C_Hatchback_01_sport_F,Hatchback_01_sport_base_F,0)
    COMPAT(C_Offroad_02_unarmed_F,Offroad_02_unarmed_base_F,0)
    COMPAT(C_Truck_02_fuel_F,Truck_02_fuel_base_F,0)
    COMPAT(C_Truck_02_box_F,Truck_02_box_base_F,0)
    COMPAT(C_Truck_02_transport_F,Truck_02_transport_base_F,0)
    COMPAT(C_Truck_02_covered_F,Truck_02_base_F,0)
    COMPAT(C_Kart_01_F,C_Kart_01_F_Base,0)
    COMPAT(C_Kart_01_Blu_F,C_Kart_01_F_Base,0)
    COMPAT(C_Kart_01_Fuel_F,C_Kart_01_F_Base,0)
    COMPAT(C_Kart_01_Red_F,C_Kart_01_F_Base,0)
    COMPAT(C_Kart_01_Vrana_F,C_Kart_01_F_Base,0)
    COMPAT(Offroad_01_base_F,Car_F,0)
    COMPAT(C_Offroad_01_F,Offroad_01_civil_base_F,0)
    COMPAT(C_Offroad_01_comms_F,Offroad_01_military_comms_base_F,0)
    COMPAT(C_Offroad_01_covered_F,Offroad_01_military_covered_base_F,0)
    COMPAT(C_Offroad_01_repair_F,Offroad_01_repair_base_F,0)
    COMPAT(C_Quadbike_01_F,Quadbike_01_base_F,0)
    COMPAT(C_SUV_01_F,SUV_01_base_F,0)
    COMPAT(C_Tractor_01_F,Tractor_01_base_F,0)
    COMPAT(C_Van_01_transport_F,Van_01_transport_base_F,0)
    COMPAT(C_Van_01_box_F,Van_01_box_base_F,0)
    COMPAT(C_Van_02_vehicle_F,Van_02_vehicle_base_F,0)
    COMPAT(C_Van_02_service_F,Van_02_service_base_F,0)
    COMPAT(C_Van_02_transport_F,Van_02_transport_base_F,0)
    COMPAT(C_Plane_Civil_01_F,Plane_Civil_01_base_F,0)
    COMPAT(C_Plane_Civil_01_racing_F,Plane_Civil_01_base_F,0)
    COMPAT(C_Van_02_medevac_F,Van_02_medevac_base_F,-1)
};

class CfgWeapons {
    // Uniform items, Guns, Helmets, NVGs, Vests

    // Class declarations
    class pdw2000_base_F;
    class sgun_HunterShotgun_01_sawedoff_base_F;
    class sgun_HunterShotgun_01_base_F;
    class SMG_05_base_F;
    class SMG_03_TR_BASE;
    class SMG_01_Base;
    class HelmetBase;
    class H_HelmetO_ocamo;
    class H_Beret_02;
    class H_Beret_blk;
    class H_Cap_red;
    class ItemCore;
    class H_HelmetCrew_O;
    class H_HelmetB;
    class H_Bandanna_surfer;
    class H_Bandanna_khk;
    class H_Booniehat_khk;
    class H_Cap_oli;
    class H_Hat_blue;
    class H_PASGT_basic_base_F;
    class H_PASGT_neckprot_base_F;
    class H_HelmetB_camo;
    class Vest_Camo_Base;
    class V_EOD_base_F;
    class Uniform_Base;

    COMPAT(hgun_PDW2000_F,pdw2000_base_F,0.8)
    COMPAT(sgun_HunterShotgun_01_sawedoff_F,sgun_HunterShotgun_01_sawedoff_base_F,0.8)
    COMPAT(sgun_HunterShotgun_01_F,sgun_HunterShotgun_01_base_F,1.2)
    COMPAT(SMG_05_F,SMG_05_base_F,0.8)
    COMPAT(SMG_03C_BASE,SMG_03_TR_BASE,0.8)
    COMPAT(SMG_01_F,SMG_01_Base,1)
    COMPAT(H_HelmetHBK_base_F,HelmetBase,2)
    COMPAT(H_HelmetSpecO_ocamo,H_HelmetO_ocamo,3)
    COMPAT(H_HelmetAggressor_base_F,HelmetBase,3)
    COMPAT(H_PASGT_basic_base_F,HelmetBase,1)
    COMPAT(H_Beret_gen_F,H_Beret_02,0.9)
    COMPAT(H_Beret_CSAT_01_F,H_Beret_blk,0.9)
    COMPAT(H_Beret_EAF_01_F,H_Beret_blk,0.9)
    COMPAT(H_Beret_02,H_Beret_blk,0.9)
    COMPAT(H_Beret_Colonel,H_Beret_02,0.9)
    COMPAT(H_Cap_police,H_Cap_red,0.5)
    COMPAT(H_Cap_blk_Raven,H_Cap_red,0.4)
    COMPAT(H_Cap_brn_SPECOPS,H_Cap_red,0.4)
    COMPAT(H_HelmetB,ItemCore,2.1)
    COMPAT(H_HelmetCrew_O_ghex_F,H_HelmetCrew_O,3)
    COMPAT(H_Tank_base_F,HelmetBase,2.5)
    COMPAT(H_HelmetCrew_B,H_HelmetB,3)
    COMPAT(H_HelmetLeaderO_ocamo,H_HelmetO_ocamo,3)
    COMPAT(H_CrewHelmetHeli_B,H_HelmetB,3)
    COMPAT(H_PilotHelmetHeli_B,H_HelmetB,3)
    COMPAT(H_MilCap_ocamo,HelmetBase,0.5)
    COMPAT(H_ParadeDressCap_01_base_F,HelmetBase,0.2)
    COMPAT(H_PilotHelmetFighter_B,H_HelmetB,4)
    COMPAT(H_HelmetO_ocamo,H_HelmetB,3)
    COMPAT(H_HelmetO_ViperSP_hex_F,H_HelmetB,3)
    COMPAT(H_HelmetB_TI_tna_F,H_HelmetB,2.7)
    COMPAT(H_Bandanna_gry,H_Bandanna_surfer,0)
    COMPAT(H_Bandanna_blu,H_Bandanna_surfer,0)
    COMPAT(H_Bandanna_cbr,H_Bandanna_surfer,0)
    COMPAT(H_Bandanna_khk_hs,H_Bandanna_khk,0.4)
    COMPAT(H_Bandanna_khk,H_Bandanna_surfer,0)
    COMPAT(H_Bandanna_mcamo,H_Bandanna_surfer,0.1)
    COMPAT(H_Bandanna_sgg,H_Bandanna_surfer,0)
    COMPAT(H_Bandanna_sand,H_Bandanna_surfer,0)
    COMPAT(H_Bandanna_surfer,HelmetBase,-0.1)
    COMPAT(H_Bandanna_surfer_blk,H_Bandanna_surfer,-0.1)
    COMPAT(H_Bandanna_surfer_grn,H_Bandanna_surfer,-0.1)
    COMPAT(H_Bandanna_camo,H_Bandanna_surfer,0.1)
    COMPAT(H_Watchcap_blk,HelmetBase,0.4)
    COMPAT(H_Beret_blk,HelmetBase,0)
    COMPAT(H_Booniehat_khk_hs,H_Booniehat_khk,0.7)
    COMPAT(H_Booniehat_khk,HelmetBase,0.5)
    COMPAT(H_Booniehat_mcamo,H_Booniehat_khk,0.7)
    COMPAT(H_Cap_blk_CMMG,H_Cap_red,0.05)
    COMPAT(H_Cap_blk_ION,H_Cap_red,0.05)
    COMPAT(H_Cap_oli_hs,H_Cap_oli,0.4)
    COMPAT(H_Cap_press,H_Cap_red,-0.2)
    COMPAT(H_Cap_red,HelmetBase,0)
    COMPAT(H_Cap_khaki_specops_UK,H_Cap_red,0.1)
    COMPAT(H_Cap_usblack,H_Cap_red,0.1)
    COMPAT(H_Cap_tan_specops_US,H_Cap_red,0.1)
    COMPAT(H_EarProtectors_base_F,HelmetBase,0)
    COMPAT(H_Construction_basic_base_F,HelmetBase,-0.2)
    COMPAT(H_Construction_earprot_base_F,HelmetBase,-0.2)
    COMPAT(H_Construction_headset_base_F,HelmetBase,-0.2)
    COMPAT(H_Hat_blue,HelmetBase,0)
    COMPAT(H_Hat_camo,H_Hat_blue,0.2)
    COMPAT(H_HeadBandage_base_F,HelmetBase,0)
    COMPAT(H_Cap_headphones,HelmetBase,0.1)
    COMPAT(H_PASGT_basic_blue_press_F,H_PASGT_basic_base_F,-0.5)
    COMPAT(H_PASGT_neckprot_blue_press_F,H_PASGT_neckprot_base_F,-0.5)
    COMPAT(H_RacingHelmet_1_F,H_HelmetB_camo,0.05)
    COMPAT(H_Hat_Safari_base_F,HelmetBase,0)
    COMPAT(H_Helmet_Skate,H_HelmetB,0.1)
    COMPAT(H_StrawHat,HelmetBase,0)
    COMPAT(H_Hat_Tinfoil_base_F,HelmetBase,-1e+006)
    COMPAT(H_WirelessEarpiece_base_F,HelmetBase,0)
    COMPAT(V_Chestrig_khk,Vest_Camo_Base,0.8)
    COMPAT(V_Chestrig_oli,Vest_Camo_Base,0.8)
    COMPAT(V_TacChestrig_grn_F,Vest_Camo_Base,0.7)
    COMPAT(V_Press_F,Vest_Camo_Base,-0.8)
    COMPAT(V_EOD_base_F,Vest_Camo_Base,0.3)
    COMPAT(V_Plain_base_F,Vest_Camo_Base,0)
    COMPAT(V_Pocketed_base_F,Vest_Camo_Base,0)
    COMPAT(V_Safety_base_F,Vest_Camo_Base,-0.3)
    COMPAT(V_EOD_IDAP_blue_F,V_EOD_base_F,0.2)
    COMPAT(V_LegStrapBag_base_F,Vest_Camo_Base,0)
    COMPAT(U_B_CTRG_2,Uniform_Base,0.9)
    COMPAT(U_B_T_Soldier_AR_F,Uniform_Base,0.9)
    COMPAT(U_B_CTRG_Soldier_2_F,Uniform_Base,0.9)
    COMPAT(U_C_CBRN_Suit_01_Blue_F,Uniform_Base,0.9)
    COMPAT(U_C_CBRN_Suit_01_White_F,Uniform_Base,0.9)
    COMPAT(U_I_G_resistanceLeader_F,Uniform_Base,0.5)
    COMPAT(U_B_CTRG_Soldier_urb_2_F,Uniform_Base,0.9)
    COMPAT(U_I_G_Story_Protagonist_F,Uniform_Base,0.9)
    COMPAT(U_I_E_Uniform_01_tanktop_F,Uniform_Base,0.9)
    COMPAT(U_I_L_Uniform_01_deserter_F,Uniform_Base,0.9)
    COMPAT(U_B_CombatUniform_mcam_tshirt,Uniform_Base,0.9)
    COMPAT(U_B_CombatUniform_tshirt_mcam_wdL_f,Uniform_Base,0.9)
    COMPAT(U_Marshal,Uniform_Base,0)
    COMPAT(U_C_Poor_1,Uniform_Base,0)
    COMPAT(U_Competitor,Uniform_Base,0)
    COMPAT(U_C_Driver_1,Uniform_Base,0)
    COMPAT(U_C_Driver_2,Uniform_Base,0)
    COMPAT(U_C_Driver_3,Uniform_Base,0)
    COMPAT(U_C_Driver_4,Uniform_Base,0)
    COMPAT(U_BG_leader,Uniform_Base,0.3)
    COMPAT(U_OrestesBody,Uniform_Base,0)
    COMPAT(U_Rangemaster,Uniform_Base,0.1)
    COMPAT(U_C_Scientist,Uniform_Base,0.1)
    COMPAT(U_C_Driver_1_red,Uniform_Base,0)
    COMPAT(U_C_Mechanic_01_F,Uniform_Base,0)
    COMPAT(U_C_Journalist,Uniform_Base,-0.5)
    COMPAT(U_C_Driver_1_blue,Uniform_Base,0)
    COMPAT(U_C_man_sport_1_F,Uniform_Base,0)
    COMPAT(U_C_man_sport_2_F,Uniform_Base,0)
    COMPAT(U_C_man_sport_3_F,Uniform_Base,0)
    COMPAT(U_O_R_Gorka_01_F,Uniform_Base,0.1)
    COMPAT(U_BG_Guerilla1_1,Uniform_Base,0.1)
    COMPAT(U_BG_Guerilla2_2,Uniform_Base,0.1)
    COMPAT(U_BG_Guerilla2_1,Uniform_Base,0.1)
    COMPAT(U_BG_Guerilla2_3,Uniform_Base,0.1)
    COMPAT(U_BG_Guerilla3_1,Uniform_Base,0.1)
    COMPAT(U_C_Driver_1_black,Uniform_Base,0)
    COMPAT(U_C_Driver_1_green,Uniform_Base,0)
    COMPAT(U_C_Driver_1_white,Uniform_Base,0)
    COMPAT(U_C_Man_casual_1_F,Uniform_Base,0)
    COMPAT(U_C_Man_casual_2_F,Uniform_Base,0)
    COMPAT(U_C_Man_casual_3_F,Uniform_Base,0)
    COMPAT(U_C_Man_casual_4_F,Uniform_Base,0)
    COMPAT(U_C_Man_casual_5_F,Uniform_Base,0)
    COMPAT(U_C_Man_casual_6_F,Uniform_Base,0)
    COMPAT(U_C_IDAP_Man_Tee_F,Uniform_Base,0)
    COMPAT(U_C_Poloshirt_blue,Uniform_Base,0)
    COMPAT(U_C_WorkerCoveralls,Uniform_Base,0)
    COMPAT(U_C_Driver_1_yellow,Uniform_Base,0)
    COMPAT(U_C_Driver_1_orange,Uniform_Base,0)
    COMPAT(U_C_Poloshirt_salmon,Uniform_Base,0)
    COMPAT(U_BG_Guerrilla_6_1,Uniform_Base,0.1)
    COMPAT(U_BG_Guerilla1_2_F,Uniform_Base,0.1)
    COMPAT(U_C_HunterBody_grn,Uniform_Base,0.3)
    COMPAT(U_C_IDAP_Man_cargo_F,Uniform_Base,0)
    COMPAT(U_C_IDAP_Man_Jeans_F,Uniform_Base,0)
    COMPAT(U_C_IDAP_Man_casual_F,Uniform_Base,0)
    COMPAT(U_C_IDAP_Man_shorts_F,Uniform_Base,0)
    COMPAT(U_C_Paramedic_01_F,Uniform_Base,-0.5)
    COMPAT(U_C_ArtTShirt_01_v1_F,Uniform_Base,0)
    COMPAT(U_C_ArtTShirt_01_v2_F,Uniform_Base,0)
    COMPAT(U_C_ArtTShirt_01_v3_F,Uniform_Base,0)
    COMPAT(U_C_ArtTShirt_01_v4_F,Uniform_Base,0)
    COMPAT(U_C_ArtTShirt_01_v5_F,Uniform_Base,0)
    COMPAT(U_C_ArtTShirt_01_v6_F,Uniform_Base,0)
    COMPAT(U_C_Poloshirt_stripped,Uniform_Base,0)
    COMPAT(U_C_Poloshirt_burgundy,Uniform_Base,0)
    COMPAT(U_C_Poloshirt_redwhite,Uniform_Base,0)
    COMPAT(U_C_Poloshirt_tricolour,Uniform_Base,0)
    COMPAT(U_C_Uniform_Farmer_01_F,Uniform_Base,0)
    COMPAT(U_O_R_Gorka_01_camo_F,Uniform_Base,0.2)
    COMPAT(U_C_FormalSuit_01_blue_F,Uniform_Base,0)
    COMPAT(U_C_FormalSuit_01_gray_F,Uniform_Base,0)
    COMPAT(U_O_R_Gorka_01_black_F,Uniform_Base,0.1)
    COMPAT(U_O_R_Gorka_01_brown_F,Uniform_Base,0.1)
    COMPAT(U_C_IDAP_Man_TeeShorts_F,Uniform_Base,0)
    COMPAT(U_I_C_Soldier_Bandit_1_F,Uniform_Base,0)
    COMPAT(U_I_C_Soldier_Bandit_2_F,Uniform_Base,0)
    COMPAT(U_I_C_Soldier_Bandit_3_F,Uniform_Base,0)
    COMPAT(U_I_C_Soldier_Bandit_4_F,Uniform_Base,0)
    COMPAT(U_I_C_Soldier_Bandit_5_F,Uniform_Base,0)
    COMPAT(U_I_C_Soldier_Para_1_F,Uniform_Base,0.2)
    COMPAT(U_I_C_Soldier_Para_2_F,Uniform_Base,0.2)
    COMPAT(U_I_C_Soldier_Para_3_F,Uniform_Base,0.2)
    COMPAT(U_I_C_Soldier_Para_4_F,Uniform_Base,0.2)
    COMPAT(U_I_C_Soldier_Para_5_F,Uniform_Base,0.1)
    COMPAT(U_C_FormalSuit_01_khaki_F,Uniform_Base,0)
    COMPAT(U_C_FormalSuit_01_black_F,Uniform_Base,0)
    COMPAT(U_C_E_LooterJacket_01_F,Uniform_Base,0.2)
    COMPAT(U_C_Uniform_Scientist_01_F,Uniform_Base,0)
    COMPAT(U_C_Uniform_Scientist_02_F,Uniform_Base,0)
    COMPAT(U_I_L_Uniform_01_tshirt_black_F,Uniform_Base,0)
    COMPAT(U_I_L_Uniform_01_tshirt_olive_F,Uniform_Base,0)
    COMPAT(U_I_L_Uniform_01_tshirt_skull_F,Uniform_Base,0)
    COMPAT(U_I_L_Uniform_01_tshirt_sport_F,Uniform_Base,0)
    COMPAT(U_C_FormalSuit_01_tshirt_gray_F,Uniform_Base,0)
    COMPAT(U_C_FormalSuit_01_tshirt_black_F,Uniform_Base,0)
    COMPAT(U_C_Uniform_Scientist_01_formal_F,Uniform_Base,0)
    COMPAT(U_C_Uniform_Scientist_02_formal_F,Uniform_Base,0)
    COMPAT(U_C_ConstructionCoverall_Red_F,Uniform_Base,-0.2)
    COMPAT(U_C_ConstructionCoverall_Blue_F,Uniform_Base,-0.2)
    COMPAT(U_C_ConstructionCoverall_Black_F,Uniform_Base,-0.2)
    COMPAT(U_C_ConstructionCoverall_Vrana_F,Uniform_Base,-0.15)
};

class CfgGlasses {
    // Facewear

    // Class declarations
    class None;
    class G_Balaclava_blk;

    COMPAT(G_Combat,None,0)
    COMPAT(G_Aviator,None,0)
    COMPAT(G_Squares,None,0)
    COMPAT(G_Sport_Red,None,0)
    COMPAT(G_Lady_Blue,None,0)
    COMPAT(G_Goggles_VR,None,0)
    COMPAT(G_Shades_Red,None,0)
    COMPAT(G_Spectacles,None,0)
    COMPAT(G_Shades_Blue,None,0)
    COMPAT(G_Shades_Black,None,0)
    COMPAT(G_Shades_Green,None,0)
    COMPAT(G_Squares_Tinted,None,0)
    COMPAT(G_Bandanna_blk,G_Balaclava_blk,0.4)
    COMPAT(G_Sport_Blackred,None,0)
    COMPAT(G_Sport_Checkered,None,0)
    COMPAT(G_Sport_Greenblack,None,0)
    COMPAT(G_Sport_BlackWhite,None,0)
    COMPAT(G_Sport_Blackyellow,None,0)
    COMPAT(G_Spectacles_Tinted,None,0)
    COMPAT(G_Respirator_base_F,None,0)
    COMPAT(G_WirelessEarpiece_base_F,None,0)
    COMPAT(G_EyeProtectors_base_F,None,0)
};