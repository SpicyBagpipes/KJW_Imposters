class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    kjw_imposters_grid[] = {
                        {
                            "0.25 * safezoneW + safezoneX)",
                            "-0.2 * safezoneH + safezoneY)",
                            "0.4*safezoneW",
                            "0.015*safezoneH"
                        },
                        "(((safezoneW / safezoneH) min 1.2) / 40)",
                        "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"
                    };
                };
            };
        };
        class Variables {
            class kjw_imposters_grid {
                displayName = "Undercover Bar";
                description = "Shows undercover amount";
                preview = QPATHTOF(data\tx\thesquare_co.paa);
                saveToProfile[] = {0, 1};
                canResize = 0;
            };
        };
    };
};