#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"tmtmpack_main",
			"CUP_Creatures_People_LoadOrder"
		};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {QUOTE(VERSION_AR)};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class CfgFactionClasses
{
	class tmtm_cup_opfor_uniforms
	{
		displayName="TMTM Uniforms";
		priority=1;
		side=OPFOR;
		icon="";
	};

	class tmtm_cup_blufor_uniforms
	{
		displayName="TMTM Uniforms";
		priority=1;
		side=BLUFOR;
		icon="";
	};	
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"