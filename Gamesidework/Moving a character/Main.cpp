#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main()
{
	PlayervMonster battle;

	playerStats(battle);
	playerWeapon(battle);
	findMonster(battle);
	displayStats(battle);
	monsterFight(battle);

	return 0;
}