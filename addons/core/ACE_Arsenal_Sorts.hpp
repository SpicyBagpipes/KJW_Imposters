class ACE_Arsenal_Sorts {
    class sortBase;
    class ACE_alphabetically;
    class ACE_mod;
    class ACE_mass;
    class ACE_amount;
    class ACE_load;
    class ACE_accuracy;
    class ACE_rateOfFire;
    class ACE_scopeMag;
    class ACE_magCount;
    class ACE_protectionBallistic;
    class ACE_protectionExplosive;
    class KJW_Imposters_Sort: sortBase {
        scope = 2;
        displayName = "Sort by suspicion amount";
        tabs[] = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}, {}};
        statement = "params ['_config']; if (isNumber (_config >> 'KJW_Imposters_SuspicionAmount')) then {getNumber (_config >> 'KJW_Imposters_SuspicionAmount')} else {1}";
    };
};