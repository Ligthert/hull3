class VN_ROK_U {
    class Rifleman {
        headGear = "vn_b_helmet_m1_01_01";
        goggles = "";
        uniform = "vn_b_uniform_macv_05_18";
        vest = "vn_b_vest_usarmy_02";
        backpack = "vn_b_pack_lw_01";
        insignia = "";
    };

    class Leader : Rifleman {
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_04_18";
        vest = "vn_b_vest_usarmy_05";
    };

    class Officer : Leader {
        headGear = "vn_b_helmet_m1_12_01";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_01_18";
        vest = "vn_b_vest_usarmy_09";
    };

    class Crew : Rifleman {
        headGear = "vn_b_helmet_t56_01_01";
        goggles = "vn_b_acc_goggles_01";
        uniform = "vn_b_uniform_macv_06_18";
        vest = "vn_b_vest_usarmy_14";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_b_pack_prc77_01";
    };

    class SL : Officer {
        backpack = "vn_b_pack_lw_06";
    };

    class Medic : Rifleman {
        headGear = "vn_b_helmet_m1_12_02";
        goggles = "vn_g_spectacles_01";
        uniform = "vn_b_uniform_macv_02_18";
        vest = "vn_b_vest_usarmy_07";
        backpack = "vn_b_pack_lw_07";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "vn_b_uniform_macv_03_18";
        backpack = "vn_b_pack_lw_02";
    };

    class AAR : Rifleman {
        vest = "vn_b_vest_usarmy_03";
        backpack = "vn_b_pack_lw_05";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "vn_b_vest_usarmy_06";
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        uniform = "vn_b_uniform_macv_03_18";
        backpack = "vn_b_pack_lw_04";
    };

    class ENGA : ENG {
        uniform = "vn_b_uniform_macv_02_18";
    };

    class SN : Rifleman {
        uniform = "vn_b_uniform_macv_04_18";
        vest = "vn_b_vest_usarmy_08";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        vest = "vn_b_vest_usarmy_04";
    };

    class VC : Crew {
        headGear = "vn_b_helmet_t56_02_01";
        goggles = "";
        vest = "vn_b_vest_usarmy_13";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_b_helmet_svh4_01_04";
        goggles = "";
        uniform = "vn_b_uniform_k2b_02_01";
        vest = "vn_b_vest_aircrew_03";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_b_helmet_svh4_02_04";
        uniform = "vn_b_uniform_heli_01_01";
    };

};
