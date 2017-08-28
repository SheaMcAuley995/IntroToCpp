#include <iostream>
#include <string>
#include "Player.h"
using namespace std;



int main()
{
	PlayervMonster battle;

	setPlayerStats(battle);
	playerWeapon(battle);
	holdPlayerStats(battle);
	findMonster(battle);
	monsterFight(battle);

	return 0;
}