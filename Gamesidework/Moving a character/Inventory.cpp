#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"

using std::cout;
using std::cin;
using std::endl;

//void invUnequip(Items & inv, int x)
//{
//}

void showInvtoo(Items inv)
{
	
	
	DelayText(1, ("                               Inventory                                        "));
	DelayText(1, ("________________________________________________________________________________"));
	cout << "Cash $" << inv.playerCash << endl;
	int storeNum = 0;
	for (int i = 0; i < 30; i++)
	{
		if (inv.storeAmount[i] > 0)
		{
			storeNum++;
			cout << storeNum << ". " << inv.Invarray[i] << "          Qty." << inv.storeAmount[i] << endl;

		}
	}
}

void FillStore(Items & inv)
{
	for (int i = inv.HowMuchInStore; i < 30; i++)
	{
		inv.storeAmount[i] = 0;
	}
}

void invAdd(Items & inv, int x)
{
	inv.storeAmount[x] += 1;
	inv.HowMuchInStore += 1;
}

void invSubtract(Items & inv, int x)
{
	inv.storeAmount[x] -= 1;
	inv.HowMuchInStore -= 1;
}
void storeItemStats(Items & inv, PlayervMonster fight, int x)
{
	// 0.Dagger
	if (inv.storeAmount[0])
	{
		fight.playerwepdmg = 4;
		fight.playerATT += 6;
	}
	// 1.Shortsword
	if (inv.storeAmount[1])
	{
		fight.playerwepdmg = 6;
		fight.playerATT += 3;

	}
	// 2.Battleaxe
	if (inv.storeAmount[2])
	{
		fight.playerwepdmg = 12;
	}
	// 3.Claymore
	if (inv.storeAmount[3])
	{
		fight.playerwepdmg = 15;
	}
	// 4.Leather
	if (inv.storeAmount[4])
	{

	}
	// 5.Bottlecap
	if (inv.storeAmount[5])
	{

	}
	// 6.Sleetsheet
	if (inv.storeAmount[6])
	{

	}
	// 7.Potion
	// 8.Day Rations
	// 9.Dagger
}

void invEquip(Items &inv, PlayervMonster &fight)
{
	DelayText(1, ("                      What would you like to equip                              "));
	DelayText(1, ("________________________________________________________________________________"));
	int storeNum = 0;
	int LocateItem[4];
	int userInput = 0;
	cin >> userInput;
	for (int i = 0; i < 4; i++)
	{
		if (inv.storeAmount[i] > 0)
		{
			storeNum++;
			LocateItem[storeNum] = inv.storeAmount[i];
			cout << storeNum << ". " << inv.Invarray[i] << "          Qty." << inv.storeAmount[i] << endl;
		}
	}
		switch (userInput)
		{
		case 1:
			storeItemStats(inv,fight,LocateItem[userInput]);
			invSubtract(inv, LocateItem[userInput]);

				system("CLS");
			break;
		case 2:
			
			storeItemStats(inv, fight, LocateItem[userInput]);
			invSubtract(inv, LocateItem[userInput]);
				system("CLS");
			break;
		case 3:
			
	
			storeItemStats(inv, fight, LocateItem[userInput]);
			invSubtract(inv, LocateItem[userInput]);
				
				system("CLS");
			break;
		case 4:
			
			storeItemStats(inv, fight, LocateItem[userInput]);
			invSubtract(inv, LocateItem[userInput]);

				system("CLS");
			}
		}
	
	

