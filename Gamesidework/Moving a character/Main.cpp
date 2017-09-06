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
	TitleScreen(battle);
	Overworld(battle, Inv);
	return 0;
}