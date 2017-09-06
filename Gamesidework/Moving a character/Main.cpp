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
#include "Condtions.h"
using namespace std;



int main()
{
	PlayervMonster battle;
	Items Inv;
	Conditions con;
	FillStore(Inv);
	CharacterCreate(battle);
	TitleScreen(battle);
	Overworld(battle, Inv, con);
	return 0;
}