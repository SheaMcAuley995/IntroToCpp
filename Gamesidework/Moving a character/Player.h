#pragma once
#include <string>

struct PlayervMonster
{
	std::string Playername;
	std::string monstername;
	std::string wepname;
	int PlayerGender;
	int weapon;
	int playerwepdmg = 0;
	int monsterwepdmg = 0;
	
	int statLock = 18;
	
	int playerCash = 100;
	int playerHPMax = 0;
	int playerHP = 0;
	int playerSTR = 8;
	int playerSTRscore = 0;
	int playerAG = 8;
	int playerAGscore = 0;
	int playerCON = 8;
	int playerCONscore = 0;
	int playerAC = 0;
	int playerATT = 0;
	
	int monsterATT = 0;
	int monsterAC = 0; // block
	int monsterHP = 0; // health
	int monsterAP = 0; // attack
	int monsterDP = 0; // dodge
};

//void setPlayerStats(PlayervMonster &fight);

void findMonster(PlayervMonster &fight);
void CharacterCreate(PlayervMonster &fight);
void TitleScreen(PlayervMonster & fight);
void Overworld(PlayervMonster & fight);
void monsterFight(PlayervMonster fight);
void mathPlayerStats(PlayervMonster & fight);
void displayPlayerStats(PlayervMonster &fight);
