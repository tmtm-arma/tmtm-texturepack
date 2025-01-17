class tmtm_b_chestrig_bra_base: Bag_Base
{
    scope=1;
    scopeArsenal=0;

    model="\tmtm\pack\aegis_vests\tmtm_v_chestrig_bra.p3d";
    hiddenSelections[]= {"camo", "camo_pouches"};

    maximumLoad=140;
    mass=10;
};

class tmtm_b_chestrig_bra_vintage_base: tmtm_b_chestrig_bra_base
{
    scope=1;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_vintage.rvmat",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_vintage.rvmat"
    };
};

/////////////////////////////////////////////
// Content
class tmtm_b_chestrig_bra_khaki: tmtm_b_chestrig_bra_vintage_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chest Rig, Khaki";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_chestrig_bra_khaki_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_khaki_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_khaki_co.paa"
    };
};

class tmtm_b_chestrig_bra_khaki_flak: tmtm_b_chestrig_bra_vintage_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=0;

    displayName="Bra Chest Rig, Khaki (Flak)";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_chestrig_bra_khaki_ca.paa";

    hiddenSelectionsTextures[]= {
        "",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_khaki_co.paa"
    };

    hiddenSelectionsMaterials[]= {
        "",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_vintage.rvmat"
    };
};

class tmtm_b_chestrig_bra_brown: tmtm_b_chestrig_bra_vintage_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chest Rig, Brown";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_chestrig_bra_brown_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_brown_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_brown_co.paa"
    };
};

class tmtm_b_chestrig_bra_brown_flak: tmtm_b_chestrig_bra_vintage_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=0;

    displayName="Bra Chest Rig, Brown (Flak)";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_chestrig_bra_brown_ca.paa";

    hiddenSelectionsTextures[]= {
        "",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_brown_co.paa"
    };

    hiddenSelectionsMaterials[]= {
        "",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_vintage.rvmat"
    };
};

class tmtm_b_chestrig_bra_green: tmtm_b_chestrig_bra_vintage_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="Bra Chest Rig, Green";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_chestrig_bra_olive_ca.paa";

    hiddenSelectionsTextures[]= {
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_green_co.paa",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_green_co.paa"
    };
};

class tmtm_b_chestrig_bra_green_flak: tmtm_b_chestrig_bra_vintage_base
{
    author="OokamiJamie, erem2k";
    scope=2;
    scopeArsenal=0;

    displayName="Bra Chest Rig, Green (Flak)";
    picture="\tmtm\pack\aegis_vests\data\ui\icon_tmtm_v_chestrig_bra_olive_ca.paa";

    hiddenSelectionsTextures[]= {
        "",
        "\tmtm\pack\aegis_vests\data\tmtm_chestrig_bra_green_co.paa"
    };
};
