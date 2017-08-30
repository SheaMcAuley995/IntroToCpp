#pragma once
#include <string>

struct Items
{
	int playerCash = 10;
	int dagger = 0;
	int shortSword = 0;
	int Battleaxe = 0;
	int Claymore = 0;
	int Leather = 0;
	int Bottlecap = 0;
	int SleetSheet = 0;
	std::string wepname;

};

void showInv(Items inv);
