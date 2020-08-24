class G3A4_FRG {
    class Rifleman {
        primaryWeapon = "gm_g3a4_oli";
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        handgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 6},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 5},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {
            {"ACE_Flashlight_KSF1", 1},
            {"ACE_wirecutter", 1}
        };
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {
            {"ACE_fieldDressing", 10},
            {"ACE_tourniquet", 2}
        };
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        handgunWeapon = "gm_p1_blk";
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 4},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 1},
            {"gm_1rnd_67mm_heat_dm22a1_g3", 4},
            {"gm_8Rnd_9x19mm_B_DM51_p1_blk", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 6},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 3}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 4}};
        backpackMagazines[] = {};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {};
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {
            {"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 4},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV_500", 24},
            {"ACE_splint", 4}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "gm_mg3_blk";
        vestMagazines[] = {{"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 2}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 4}
        };
    };

    class AAR : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 4}
        };
        binocular = "Binocular";
    };

    class RAT : Rifleman {
        primaryWeapon = "gm_g3a4_oli";
        secondaryWeapon = "gm_pzf44_2_oli";
        secondaryWeaponItems[] = {"gm_feroz2x17_pzf44_2_blk", "gm_1Rnd_44x537mm_heat_dm32_pzf44_2"};
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 5},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 4},
            {"gm_1Rnd_44x537mm_heat_dm32_pzf44_2", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "gm_mg3_blk";
        vestMagazines[] = {{"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 3}
        };
    };

    class MMGAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 2},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        backpack = "CUP_B_M2_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        backpack = "CUP_B_M2_MiniTripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
    };

    class MATG : RAT {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        secondaryWeapon = "gm_pzf84_oli";
        secondaryWeaponItems[] = {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", "gm_feroz2x17_pzf84_blk"};
        backpackMagazines[] = {
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 2},
            {"gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf", 1}
        };
    };

    class MATAG : Rifleman {
        backpackMagazines[] = {
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 2},
            {"gm_1Rnd_84x245mm_heat_t_DM32_carlgustaf", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        backpackMagazines[] = {};
        backpack = "gm_milan_launcher_weaponBag";
    };

    class HATAG : MATAG {
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 6},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 5},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 2}
        };
    };

    class HATAC : HATAG {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        uniformRadios[] = {"ACRE_PRC343"};
        assignItems[] = {};
    };

    class DHATG : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        backpack = "CUP_B_Tow_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "CUP_B_TOW_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
    };

    class SAMG : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        secondaryWeapon = "gm_fim43_oli";
        secondaryWeaponItems[] = {"gm_1Rnd_70mm_he_m585_fim43"};
        backpackMagazines[] = {{"gm_1Rnd_70mm_he_m585_fim43", 1}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"gm_1Rnd_70mm_he_m585_fim43", 1}
        };
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        backpack = "CUP_B_Mk19_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "CUP_B_Mk19_Tripod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
    };

    class MTRG : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
        backpack = "CUP_B_M252_Gun_Bag";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "CUP_B_M252_Bipod_Bag";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"ACE_Chemlight_HiRed", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 8}};
    };

    class ENG : Rifleman {
        primaryWeapon = "gm_mp2a1_blk";
        vestMagazines[] = {{"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 6}};
        backpackMagazines[] = {
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "gm_g3a3_oli";
        handgunWeapon = "gm_p1_blk";
        primaryWeaponItems[] = {"gm_feroz24_blk"};
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM111_g3_blk", 4},
            {"gm_8Rnd_9x19mm_B_DM51_p1_blk", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"gm_20Rnd_762x51mm_B_DM111_g3_blk", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
        vestMagazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 4},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 2}
        };
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
    };

    class PCM : P {
    };

    class Vehicle {
        magazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 20},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 10},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 10},
            {"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 10},
            {"ACE_HandFlare_White", 15},
            {"HandGrenade", 5},
            {"gm_1Rnd_44x537mm_heat_dm32_pzf44_2", 2},
            {"SmokeShell", 5}
        };
        items[] = {{"ItemGPS", 1}};
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        magazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 40},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 20},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 30},
            {"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 30},
            {"SatchelCharge_Remote_Mag", 5},
            {"gm_1Rnd_44x537mm_heat_dm32_pzf44_2", 6},
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 5},
            {"ACE_HandFlare_White", 30},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

    class Armored : Truck {
        magazines[] = {
            {"gm_20Rnd_762x51mm_B_DM41_g3_blk", 40},
            {"gm_20Rnd_762x51mm_B_T_DM21_g3_blk", 20},
            {"gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 30},
            {"gm_32Rnd_9x19mm_B_DM51_mp2_blk", 30},
            {"gm_1Rnd_44x537mm_heat_dm32_pzf44_2", 6},
            {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 30},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"ItemGPS", 1}
        };
        medicalItems[] = {
            {"ACE_fieldDressing", 50},
            {"ACE_splint", 12}
        };
    };

};
