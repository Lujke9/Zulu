class OPTRE_MA5KX: OPTRE_MA5CX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5KX ICWS";
	baseWeapon 					= "OPTRE_MA5KX";
	model                       = "\OPTRE_Weapons\AR\MA5K.p3d";
	
	magazines[] = 
	{
		"OPTRE_32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_Tracer",
		"OPTRE_JHP32Rnd_762x51_Mag",
		"OPTRE_SS32Rnd_762x51_Mag",
		"OPTRE_AP32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_UW"
	};
	
	class Single: Single
	{
		reloadTime 				= 0.05;
	};
	class FullAuto: FullAuto
	{
		reloadTime 				= 0.05;
	};
};