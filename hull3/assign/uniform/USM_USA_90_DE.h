class USM_USA_90_DE {
    class Rifleman {
        headGear = "usm_helmet_pasgt_dcu";
        goggles = "";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_rm_ARM";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_gr_ARM";
    };

    class Officer : Leader {
        headGear = "usm_bdu_cap_dcu";
    };

    class Crew : Rifleman {
        headGear = "usm_helmet_cvc";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "ark_backpack_large";
        vest = "usm_vest_pasgtdcu_lbv_rm_ARM";
    };

    class FTL : Leader {
        headGear = "usm_helmet_pasgt_g_dcu";
        vest = "usm_vest_pasgtdcu_lbv_rmp_ARM";
    };

    class AR : Rifleman {
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_mg_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "usm_helmet_pasgt_g_dcu";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
    };

    class DHATAG : Rifleman {
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
    };

    class SAMAG : Rifleman {
    };

    class SAMAC : Rifleman {
    };

    class GMGG : Rifleman {
    };

    class GMGAG : Rifleman {
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
    };

    class MTRAG : Rifleman {
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        uniform = "usm_bdu_dcu";
        headGear = "usm_helmet_pasgt_g_dcu";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "usm_bdu_boonie_dcu";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_lbv_rmp_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_BAF_Helmet_Pilot";
        uniform = "usm_bdu_dcu";
        vest = "usm_vest_pasgtdcu_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
