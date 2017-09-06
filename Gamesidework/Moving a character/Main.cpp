#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include <Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"
#include "Inventory.h"
using namespace std;



int main()
{
	PlayervMonster battle;
	Items Inv;
	FillStore(Inv);
	CharacterCreate(battle);
	Overworld(battle, Inv);
	
	showInvtoo(Inv);
	invEquip(Inv, battle);
	
	displayPlayerStats(battle);
	showInvtoo(Inv);
	//system("pause");
	//system("pause");
	
	// displayPlayerStats(battle);
	//TitleScreen(battle);
	
	
	//setPlayerStats(battle);
	//playerWeapon(battle);
	//displayPlayerStats(battle);
	//findMonster(battle);
	//monsterFight(battle);

	return 0;
}