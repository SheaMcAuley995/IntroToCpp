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

	/*for (int i = 0; i < 30; i++)
	{
		Inv.storeAmount[i] = i;
	}*/
	FillStore(Inv);
	showInvtoo(Inv);
	invEquip(Inv, battle);
	system("pause");
	//  CharacterCreate(battle); 
	  //displayPlayerStats(battle);
	//TitleScreen(battle);
	//Overworld(battle, Inv);
	
	//setPlayerStats(battle);
	//playerWeapon(battle);
	//displayPlayerStats(battle);
	//findMonster(battle);
	//monsterFight(battle);

	return 0;
}