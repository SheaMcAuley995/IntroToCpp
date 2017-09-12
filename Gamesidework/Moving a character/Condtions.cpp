#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"
#include <string>



using namespace std;

int conFire(PlayervMonster &fight)
{
	int dmg = rand() % 8 + 1;
	
	return dmg;
}
void conPoison(PlayervMonster &fight, int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	if (x == 1)
	{
		cout << "You are poisoned" << endl;
		fight.playerSTRscore -= 1;
		fight.playerAGscore -= 1;
		fight.playerCONscore -= 1;
		fight.playerINTscore -= 1;
		fight.playerWISscore -= 1;
		fight.playerCHRscore -= 1;
	}
	if (x == 2)
	{
		cout << fight.monstername << " is poisoned" << endl;
		fight.monsterAC -= 1;
		fight.monsterATT -= 1;
	}
	
}

bool conShock(PlayervMonster &fight)
{
	
	int x = rand() % 4 + 1;
	if (x == 4)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "Shocked!" << endl;
		return true;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	return false;
}
void conRadiation(PlayervMonster &fight, int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	int r = rand() % 5;
	int dmg = rand() % 10 + 1;
	if (x == 1)
	{
		cout << "The radiation weakens all your stats.." << endl;
		fight.playerHP -= dmg;
		fight.playerSTRscore -= 1;
		fight.playerAGscore -= 1;
		fight.playerCONscore -= 1;
		fight.playerINTscore -= 1;
		fight.playerWISscore -= 1;
		fight.playerCHRscore -= 1;
		cout << dmg << " radiation damage.." << endl;
	}
	if (x == 2)
	{
		
		fight.monsterHP -= dmg;
		fight.monsterAC -= 1;
		fight.monsterATT -= 1;
		cout << "The radiation weakens all the " << fight.monstername << "'s stats.." << endl;
		cout << dmg << " radiation damage.." << endl;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
}

void resetConditions(PlayervMonster &fight,Conditions &con)
{
	fight.monsterConAttack = 0;
	con.addFireM = false;
	con.addPoisonM = false;
	con.addShockM = false;
	con.addRadiationM = false;
}
