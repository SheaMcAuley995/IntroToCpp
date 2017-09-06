#pragma once
#include <string>


struct PlayervMonster;

struct Items
{
	int playerCash = 10;

	std::string wepname;
	std::string handname[2] = { "left", "right" };
	std::string equipedName[4]{ "Fist", "Fist"};
	std::string equipedArmor = "Leather";
	std::string Invarray[30] = { "Dagger", "Shortsword", "Battleaxe", "Claymore", "Leather", "Bottlecap", "Sleetsheet", "Potion", "Day Rations", };
	// 0.Dagger
	// 1.Shortsword
	// 2.Battleaxe
	// 3.Claymore
	// 4.Leather
	// 5.Bottlecap
	// 6.Sleetsheet
	// 7.Potion
	// 8.Day Rations
	// 9.Dagger
	/*int storeAmount[30] = {4,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0};*/
	
	int storeAmount[30] = {}; 
	int HowMuchInStore = 30;
	int HowMuchInStore2 = 30;
	int HowMuchInStore3 = 30;
	int equipedWep;
	int equipedWepNum[30] = { 9, 9, 9, 9 };


	int Mutations[30];
};

int Clamp(int min, int max, int value);
void FillStore(Items &inv);

void invAdd(Items &inv, int x);
void invSubtract(Items &inv, int x);
void storeItemStats(Items &inv, PlayervMonster &fight, int x);
void EquipedGear(Items & inv, PlayervMonster & fight);
void invEquip(Items & inv, PlayervMonster &fight);
void WepChoice(Items & inv, PlayervMonster & fight);
void invUnequip(Items &inv, int x);
void showInvtoo(Items inv);