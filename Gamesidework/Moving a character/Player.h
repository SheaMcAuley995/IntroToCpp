#pragma once
#include <string>

struct PlayervMonster
{
	std::string monstername;
	std::string wepname;
	int weapon;
	int statLock = 18;
	int playerHP = 0;
	int playerSTR = 0;
	int playerAG = 0;
	int playerCON = 0;
	int monsterHP = 0;
	int monsterAP = 0;
	int monsterDP = 0;
};

void playerStats(PlayervMonster fight);
void playerWeapon(PlayervMonster fight);
void findMonster(PlayervMonster fight);
void displayStats(PlayervMonster fight);
void monsterFight(PlayervMonster fight);