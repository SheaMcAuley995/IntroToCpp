#pragma once
#include <string>


struct PlayervMonster;

struct Items
{
	int playerCash = 10;

	std::string wepname;

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
	/*int storeAmount[30] = {1,2,1,0,4,1,0,0,0,0,0,0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0,0 ,0,0,0,0};*/
	int storeAmount[30] = {1, 2 ,1}; 
	int HowMuchInStore = 3;
};

void FillStore(Items &inv);
void invAdd(Items &inv, int x);
void invSubtract(Items &inv, int x);
void storeItemStats(Items &inv, PlayervMonster fight, int x);
void invEquip(Items & inv, PlayervMonster &fight);
void invUnequip(Items &inv, int x);
void showInvtoo(Items inv);