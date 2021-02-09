#include "script_component.hpp"

class CfgPatches
{
	class LRG_Mission_Assets_BurntCandlemas
	{
		author = AUTHOR;
		name = NAME;
		url = URL;
		units[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = VERSION;
		authors[] = {"Mokka"};
		weapons[] = {};
	};
};

class CfgMarkers
{
	class Flag;
	class flag_Nato : Flag{};

	class flag_Scotland : flag_NATO
	{
		name = "Scotland";
		icon = "z\LRG Mission Assets\Addons\Burnt_Candlemas\Media\flag_Scotland_CA.paa";
		texture = "z\LRG Mission Assets\Addons\Burnt_Candlemas\Media\flag_Scotland_CA.paa";
	};
};