class OPTRE_M45A;
class SO_M45_Base: OPTRE_M45A
{
	class Single;
};

class OPTRE_M45X: SO_M45_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M45X Semi-Automatic Shotgun";
	baseWeapon 					= "OPTRE_M45X";
	model                       = "\OPTRE_Weapons\Shotgun\shotgun_e.p3d";
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Beanbags",
		"OPTRE_12Rnd_8Gauge_Pellets",
		"OPTRE_12Rnd_8Gauge_Slugs",
		"OPTRE_12Rnd_8Gauge_HEDP",
		"OPTRE_12Rnd_8Gauge_Beanbags"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 93;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_srs99d_suppressor"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_arco_ak_blk_f",
				"optic_dms",
				"optic_aco_grn",
				"optic_aco",
				"optic_arco_blk_f",
				"optic_holosight_blk_f",
				"optic_mrco",
				"optic_khs_blk",
				"optic_hamr",
				"optic_sos",
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"ace_optic_lrps_2d",
				"ace_optic_lrps_pip",
				"optic_yorris",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_ico_01_black_f",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",
				
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m73_smartlink",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_hmg38_carryhandle",
				"optre_m393_scope",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"optre_m6c_scope"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",

				"optre_m45_flashlight",
				"optre_m45_flashlight_red"
			};
		};
	};
	
	class Single: Single
	{
		sounds[] 					= {"StandardSound", "SilencedSound"};
		class BaseSoundModeType;
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1.0,1,300};
			begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1.0,1,300};
			begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1.0,1,300};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			class SoundTails
			{
				class TailInterior
				{	
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1.0,1,300};
					frequency = 1;
					volume = "interior";
				};
				class TailTrees
				{	
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
					};
				class TailMeadows
				{
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
			};
		};
		reloadTime = 0.25;
	};
};