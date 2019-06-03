class CfgPatches
{
	class in_bugle
	{
		units[]=
		{
			"in_bugleItem"
		};
		weapons[]=
		{
			"in_Bugle"
		};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class Extended_PostInit_EventHandlers
{
	class in_functions
	{
		init="nul = [] execVM 'in_bugle\functions\fn_bugleInit.sqf'";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class in_bugle
				{
					displayName="Bugle";
					condition="'in_Bugle' in (items _player)";
					showDisabled=0;
					exceptions[]=
					{
						"isNotInside",
						"isNotSitting"
					};
					icon="in_bugle\bugle.paa";
					
					class in_bugle_ambleass
					{
						displayName="Assemble";
						condition="'in_Bugle' in (items _player)";
						statement="[_player] spawn in_bugle_assamble";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
					class in_bugle_rankclose
					{
						displayName="Close Rank";
						condition="'in_Bugle' in (items _player)";
						statement="[_player] spawn in_bugle_closerank";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
					class in_bugle_tendex
					{
						displayName="Extend";
						condition="'in_Bugle' in (items _player)";
						statement="[_player] spawn in_bugle_extend";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
					class in_bugle_refi
					{
						displayName="Fire";
						condition="'in_Bugle' in (items _player)";
						statement="[_player] spawn in_bugle_fire";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
					class in_bugle_psta
					{
						displayName="Taps";
						condition="'in_Bugle' in (items _player)";
						statement="[_player] spawn in_bugle_taps";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
				};
			};
		};
	};
	class Item_Base_F;
	class in_bugleItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Bugle";
		author="Kill Me";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_in_Bugle
			{
				name="in_Bugle";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class in_Bugle: ACE_ItemCore
	{
		author="Kill Me";
		scope=2;
		displayName="Bugle";
		picture="\in_bugle\bugle.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
};
class CfgSounds
{
	sounds[]={};
	class in_bugle_assamble1
	{
		name="in_bugle_assamble";
		sound[]=
		{
			"\in_bugle\bugle_call_assamble.ogg",
			7,
			1,
			1600
		};
		titles[]={};
	};
	
	class in_bugle_closerank1
	{
		name="in_bugle_closeranks";
		sound[]=
		{
			"\in_bugle\bugle_call_closeranks.ogg",
			7,
			1,
			1600
		};
		titles[]={};
	};
	
	class in_bugle_extend1
	{
		name="in_bugle_extend";
		sound[]=
		{
			"\in_bugle\bugle_call_extend.ogg",
			7,
			1,
			1600
		};
		titles[]={};
	};
	
	class in_bugle_fire1
	{
		name="in_bugle_fire";
		sound[]=
		{
			"\in_bugle\bugle_call_fire.ogg",
			7,
			1,
			1600
		};
		titles[]={};
	};
	
	class in_bugle_taps1
	{
		name="in_bugle_taps";
		sound[]=
		{
			"\in_bugle\bugle_call_taps.ogg",
			7,
			1,
			200
		};
		titles[]={};
	};
	
	class in_Bp1
	{
		name="in_Bp";
		sound[]=
		{
			"\in_bugle\BPBrandt.ogg",
			7,
			1,
			200
		};
		titles[]={};
	};
};
class CfgFunctions
{
	class in_bugle
	{
		class functions
		{
			file="in_bugle\functions";
			class bugleInit
			{
				postInit=1;
			};
		};
	};
};
