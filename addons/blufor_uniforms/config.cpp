#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {};
		author = MOD_AUTHOR;
		url = MOD_URL;
		version = VERSION; 
		versionStr = QUOTE(VERSION_STR);
		versionAr[] = {VERSION_AR};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class cfgFactionClasses
{
	class tmtm_blufor_units
	{
		displayName="TMTM Units";
		priority=1;
		side=1;
		icon="";
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"