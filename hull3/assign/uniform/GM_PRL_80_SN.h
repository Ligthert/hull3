class GM_PRL_80_SN {
    class Rifleman {
        headGear = "gm_pl_headgear_wz67_cover_win";
        goggles = "";
        uniform = "gm_pl_army_uniform_soldier_80_win";
        vest = "gm_pl_army_vest_80_rifleman_gry";
        backpack = "ark_backpack_med";
    };

    class Leader : Rifleman {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class Officer : Leader {
        headGear = "gm_pl_army_headgear_cap_80_moro";
    };

    class Crew : Rifleman {
        headGear = "gm_gc_army_headgear_crewhat_80_blk";
        uniform = "gm_gc_civ_uniform_pilot_80_blk";
        vest = "gm_pl_army_vest_80_crew_gry";
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
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "gm_pl_army_vest_80_mg_gry";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        vest = "gm_pl_army_vest_80_at_gry";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
        vest = "gm_pl_army_vest_80_leader_gry";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        vest = "gm_pl_army_vest_80_marksman_gry";
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
        headGear = "gm_gc_headgear_zsh3_wht";
        uniform = "gm_pl_airforce_uniform_pilot_80_gry";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};