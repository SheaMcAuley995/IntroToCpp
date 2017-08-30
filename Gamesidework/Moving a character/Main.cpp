#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"

using namespace std;



int main()
{
	PlayervMonster battle;
	Items Inv;
	//CharacterCreate(battle); 
	//displayPlayerStats(battle);
	//TitleScreen(battle);
	Overworld(battle, Inv);
	
	//setPlayerStats(battle);
	//playerWeapon(battle);
	//displayPlayerStats(battle);
	//findMonster(battle);
	//monsterFight(battle);

	return 0;
}