//	   _____         __                   ____       __    
//	  / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//	 / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//	/_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//	That being said, please feel free to use any of the below as a basis for your own mod!

class CfgPatches
{
	class V_SO_Weapons
	{
		author="Fireteam Zulu";
		name="Fireteam Zulu: Specialized Ordanance";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Core"
		};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Weapons
		{
			list[]={"V_SO_Weapons"};
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;

class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;

class CfgWeapons
{
	// Assault Rifles
	#include "cfg\MA\MA5BX.hpp"
	#include "cfg\MA\MA5BXGL.hpp"
	
	#include "cfg\MA\MA3AX.hpp"
	#include "cfg\MA\MA3AXGL.hpp"
	
	#include "cfg\MA\MA5CX.hpp"
	#include "cfg\MA\MA5CXGL.hpp"
	
	#include "cfg\MA\MA5KX.hpp"
	
	#include "cfg\MA\MA37X.hpp"
	#include "cfg\MA\MA37XGL.hpp"
	
	#include "cfg\MA\MA32X.hpp"
	#include "cfg\MA\MA32XGL.hpp"
	
	// Domesticated Marksman's Rifles
	#include "cfg\M39\M392X.hpp"
	#include "cfg\M39\M395X.hpp"
	#include "cfg\M39\M395XS.hpp"
	#include "cfg\M28\M28.hpp"
	
	// Battle Rifles
	#include "cfg\BR\BR55X.hpp"
	#include "cfg\BR\BR55XHB.hpp"
	#include "cfg\BR\BR55AM.hpp"
};