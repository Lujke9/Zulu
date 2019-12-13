class OPTRE_M6C;
class SO_M6C_Base: OPTRE_M6C
{
	class WeaponSlotsInfo;
};

class OPTRE_M6S: SO_M6C_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M6C/SOCOM Magnum";
	baseWeapon 					= "OPTRE_M6S";
	model                       = "\OPTRE_Weapons\Pistol\M6C.p3d";
	
	magazines[]=
	{
		"OPTRE_12Rnd_127x40_Mag",
		"OPTRE_12Rnd_127x40_Mag_Tracer",
		"OPTRE_12Rnd_127x40_Mag_AP",
		"OPTRE_12Rnd_127x40_Mag_APT",
		"OPTRE_12Rnd_127x40_Mag_HE",
		"OPTRE_12Rnd_127x40_Mag_HET",
		"OPTRE_12Rnd_127x40_Mag_HVAP",
		"OPTRE_12Rnd_127x40_Mag_HVAPT",
		"OPTRE_12Rnd_127x40_Mag_JHP",
		"OPTRE_12Rnd_127x40_Mag_JHPT",
		"OPTRE_12Rnd_127x40_Mag_SAPHE",
		"OPTRE_12Rnd_127x40_Mag_SAPHET",
		"OPTRE_12Rnd_127x40_Mag_SS",
		"OPTRE_12Rnd_127x40_Mag_NARQ",
		"OPTRE_16Rnd_127x40_Mag",
		"OPTRE_16Rnd_127x40_Mag_Tracer",
		"OPTRE_16Rnd_127x40_Mag_AP",
		"OPTRE_16Rnd_127x40_Mag_APT",
		"OPTRE_16Rnd_127x40_Mag_HE",
		"OPTRE_16Rnd_127x40_Mag_HET",
		"OPTRE_16Rnd_127x40_Mag_HVAP",
		"OPTRE_16Rnd_127x40_Mag_HVAPT",
		"OPTRE_16Rnd_127x40_Mag_JHP",
		"OPTRE_16Rnd_127x40_Mag_JHPT",
		"OPTRE_16Rnd_127x40_Mag_SAPHE",
		"OPTRE_16Rnd_127x40_Mag_SAPHET",
		"OPTRE_16Rnd_127x40_Mag_SS",
		"OPTRE_16Rnd_127x40_Mag_NARQ"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 39;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_m6_silencer",
				"optre_m6c_compensator"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_aco_grn",
				"optic_aco",
				"optic_holosight_blk_f",
				"optic_yorris",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m6c_scope",
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"optre_m6g_flashlight",
				"optre_m6c_laser"
			};
		};
	};
};