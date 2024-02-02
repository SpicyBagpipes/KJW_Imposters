class RscBackGround;
class RscProgress;
class RscText;
class RscTitles {
	class KJW_Imposters_SusBar {
		idd = 46920;
		enableSimulation = 1;
		movingEnable = 0;
		fadeIn = 0;
		fadeOut = 1;
		duration = 10e10;
		onLoad = "uiNamespace setVariable ['KJW_Imposters_SusBar', _this select 0];";
		class controls {
			class Sussy: RscProgress {
				idc = 4947;
				x = "0.3 * safezoneW + safezoneX";
				y = "0.05 * safezoneH + safezoneY";
				w = "0.4*safezoneW";
				h = "0.015*safezoneH";
			};
			class Text: RscText {
				idc = 4948;
				x = "0.47 * safezoneW + safezoneX";
				y = "0.03 * safezoneH + safezoneY";
				w = "0.4*safezoneW";
				h = "0.015*safezoneH";
				colorText[] = {0.8,0.8,0.8,0.5};
				text = "Covert Meter";
				font = "RobotoCondensed";
			};
		};
	};
};
