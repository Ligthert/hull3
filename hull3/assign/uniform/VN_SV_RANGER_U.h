class VN_SV_RANGER_U {
    class Rifleman {
        headGear = "vn_i_helmet_m1_02_02";
        goggles = "";
        uniform = "vn_b_uniform_macv_02_17";
        vest = "vn_b_vest_usarmy_02";
        backpack = "vn_b_pack_lw_01";
        insignia = "";
    };

    class Leader : Rifleman {
        goggles = "vn_b_acc_rag_01";
        uniform = "vn_b_uniform_macv_05_17";
        vest = "vn_b_vest_usarmy_05";
    };

    class Officer : Leader {
        headGear = "vn_i_beret_03_04";
        goggles = "vn_b_acc_rag_02";
        uniform = "vn_b_uniform_macv_04_17";
        vest = "vn_b_vest_usarmy_09";
    };

    class Crew : Rifleman {
        headGear = "vn_b_helmet_t56_01_03";
        goggles = "vn_b_acc_goggles_01";
        uniform = "vn_b_uniform_macv_01_17";
        vest = "vn_b_vest_usarmy_10";
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
        headGear = "vn_i_helmet_m1_03_02";
        goggles = "vn_g_spectacles_01";
        uniform = "vn_b_uniform_macv_03_17";
        vest = "vn_b_vest_usarmy_07";
        backpack = "vn_b_pack_lw_07";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "vn_b_uniform_macv_06_17";
        backpack = "vn_b_pack_lw_02";
    };

    class AAR : Rifleman {
        vest = "vn_b_vest_usarmy_03";
        backpack = "vn_b_pack_lw_05";
    };

    class RAT : Rifleman {
        headGear = "vn_i_helmet_m1_03_02";
    };

    class MMGG : AR {
        vest = "vn_b_vest_usarmy_06";
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        uniform = "vn_b_uniform_macv_03_17";
        backpack = "vn_b_pack_lw_04";
    };

    class ENGA : ENG {
        uniform = "vn_b_uniform_macv_02_16";
    };

    class SN : Rifleman {
        uniform = "vn_b_uniform_macv_03_17";
        vest = "vn_b_vest_usarmy_08";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        vest = "vn_b_vest_usarmy_04";
    };

    class VC : Crew {
        headGear = "vn_b_helmet_t56_02_03";
        goggles = "";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_b_helmet_svh4_01_05";
        goggles = "";
        uniform = "vn_b_uniform_k2b_02_01";
        vest = "vn_b_vest_aircrew_03";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_b_helmet_svh4_02_05";
        uniform = "vn_b_uniform_heli_01_01";
    };

};
