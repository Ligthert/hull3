class USA_ACU {
    class Rifleman {
        headGear = "MNP_Helmet_ACU";
        goggles = "";
        uniform = "MNP_CombatUniform_Ranger_C";
        vest = "MNP_Vest_ACU_2";
        backpack = "B_Kitbag_rgr";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Ranger_E";
        vest = "MNP_Vest_ACU_1";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_B";
        uniform = "MNP_CombatUniform_Ranger_E";
        vest = "V_BandollierB_rgr";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_oli";
        uniform = "MNP_CombatUniform_Ranger_E";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Ranger_E";
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_oli";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
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
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };

    class MTRG : AR {
    };

    class MRTAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        uniform = "MNP_CombatUniform_Ranger_E";
        backpack = "B_Carryall_oli";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Watchcap_blk";
        goggles = "G_Bandanna_blk";
        uniform = "MNP_CombatUniform_Ranger_E";
        vest = "V_BandollierB_blk";
        backpack = "B_AssaultPack_blk";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "U_B_HeliPilotCoveralls";
        vest = "V_TacVest_oli";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};