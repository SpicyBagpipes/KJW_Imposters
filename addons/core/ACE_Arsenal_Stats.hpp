class ACE_Arsenal_Stats
{
    class statBase;
    class GVAR(Susness) : statBase
    {
        scope = 2;
        priority = 0.9;
        stats[] = {"KJW_Imposters_SuspicionAmount"};
        displayName = "Susness";
        tabs[] = {{0,1,2,3,4,5,6,7,8}, {}};
        showBar = 1;
		condition = "isNumber (_this select 1 >> 'KJW_Imposters_SuspicionAmount')";
        barStatement = "[(_this select 0) select 0,  _this select 1,  [[0,  1],  [0,  1],  false]] call ace_arsenal_fnc_statBarStatement_default";
    };
};