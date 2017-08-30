#pragma once
#include <string>
#include "Inventory.h"



struct PlayervMonster
{
	std::string Playername = "";
	std::string monstername = "";
	
	int PlayerGender;
	int weapon;
	int playerwepdmg = 0;
	int monsterwepdmg = 0;
	
	int statLock = 22;
	
	
	int playerHPMax = 0;
	int playerHP = 0;
	int playerSTR = 8;
	int playerSTRscore = 0;
	int playerAG = 8;
	int playerAGscore = 0;
	int playerCON = 8;
	int playerCONscore = 0;
	int playerINT = 8;
	int playerINTscore = 0;
	int playerWIS = 8;
	int playerWISscore = 0;
	int playerCHR = 8;
	int playerCHRscore = 0;
	int playerAC = 0;
	int playerATT = 0;
	int playerXP = 0;
	int PlayerLvL = 1;
	
	int monsterATT = 0;
	int monsterAC = 0; // block
	int monsterHP = 0; // health
	int monsterAP = 0; // attack
	int monsterDP = 0; // dodge
};

//void setPlayerStats(PlayervMonster &fight);

void findMonster(PlayervMonster &fight, Items &inv);
void CharacterCreate(PlayervMonster &fight);
void TitleScreen(PlayervMonster & fight);

void Overworld(PlayervMonster & fight, Items & Inv);
void rollAnimate(PlayervMonster fight);
void findMonster(PlayervMonster &fight, Items &inv);
void monsterFight(PlayervMonster fight, Items inv);
void mathPlayerStats(PlayervMonster & fight);
void displayPlayerStats(PlayervMonster &fight);
