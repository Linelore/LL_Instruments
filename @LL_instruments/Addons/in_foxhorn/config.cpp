class CfgPatches
{
	class in_foxhorn
	{
		units[]=
		{
			"in_foxHornItem"
		};
		weapons[]=
		{
			"in_FoxHorn"
		};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class Extended_PostInit_EventHandlers
{
	class in_functions
	{
		init="nul = [] execVM 'in_foxhorn\functions\fn_foxhornInit.sqf'";
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
				class in_foxHorn
				{
					displayName="Fox Horn";
					condition="'in_FoxHorn' in (items _player)";
					showDisabled=0;
					exceptions[]=
					{
						"isNotInside",
						"isNotSitting"
					};
					icon="in_foxhorn\foxHorn.paa";
					class in_awaygone
					{
						displayName="Gone Away";
						condition="'in_FoxHorn' in (items _player)";
						statement="[_player] spawn in_goneaway";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
					class in_hornthedouble
					{
						displayName="Doubling The Horn";
						condition="'in_FoxHorn' in (items _player)";
						statement="[_player] spawn in_doublingthehorn";
						showDisabled=0;
						exceptions[]=
						{
							"isNotInside",
							"isNotSitting"
						};
					};
					class in_homegoing
					{
						displayName="Going Home";
						condition="'in_FoxHorn' in (items _player)";
						statement="[_player] spawn in_goinghome";
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
	class in_foxHornItem: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Fox Horn";
		author="Kill Me";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_in_FoxHorn
			{
				name="in_FoxHorn";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class in_FoxHorn: ACE_ItemCore
	{
		author="Kill Me";
		scope=2;
		displayName="Fox Horn";
		picture="\in_foxhorn\foxHorn.paa";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
};
class CfgSounds
{
	sounds[]={};
	class in_goneaway1
	{
		name="in_goneaway";
		sound[]=
		{
			"\in_foxhorn\GoneAway.ogg",
			7,
			1,
			500
		};
		titles[]={};
	};
	
	class in_doublingthehorn1
	{
		name="in_doublingthehorn";
		sound[]=
		{
			"\in_foxhorn\DoublingtheHorn.ogg",
			7,
			1,
			500
		};
		titles[]={};
	};
	
	class in_goinghome1
	{
		name="in_goinghome";
		sound[]=
		{
			"\in_foxhorn\GoingHome.ogg",
			7,
			1,
			500
		};
		titles[]={};
	};
};
class CfgFunctions
{
	class in_foxhorn
	{
		class functions
		{
			file="in_foxhorn\functions";
			class foxhornInit
			{
				postInit=1;
			};
		};
	};
};
