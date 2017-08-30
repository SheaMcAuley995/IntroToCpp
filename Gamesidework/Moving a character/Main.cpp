#include <iostream>
#include <string>
#include "Player.h"
using namespace std;



int main()
{
	PlayervMonster battle;
	//TitleScreen(battle);
	CharacterCreate(battle);
	holdPlayerStats(battle);
	Overworld(battle);
	
	//setPlayerStats(battle);
	//playerWeapon(battle);
	holdPlayerStats(battle);
	findMonster(battle);
	monsterFight(battle);

	return 0;
}