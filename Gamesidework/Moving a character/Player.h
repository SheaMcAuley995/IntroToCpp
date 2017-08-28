#pragma once
#include <string>

struct PlayervMonster
{
	std::string monstername;
	std::string wepname;
	int weapon;
	int playerwepdmg = 0;
	int monsterwepdmg = 0;
	
	int statLock = 18;
	
	int playerHP = 0;
	int playerSTR = 0;
	int playerSTRscore = 0;
	int playerAG = 0;
	int playerAGscore = 0;
	int playerCON = 0;
	int playerCONscore = 0;
	int playerAC = 0;
	int playerATT = 0;
	
	int monsterATT = 0;
	int monsterAC = 0; // block
	int monsterHP = 0; // health
	int monsterAP = 0; // attack
	int monsterDP = 0; // dodge
};

void setPlayerStats(PlayervMonster &fight);
void playerWeapon(PlayervMonster &fight);
void findMonster(PlayervMonster &fight);

void monsterFight(PlayervMonster fight);
void holdPlayerStats(PlayervMonster &fight);

void tester(PlayervMonster fight);