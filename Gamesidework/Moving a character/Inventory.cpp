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
int Clamp(int min, int max, int value)
{
	if (value < min)
	{
		return min;
	}
	else if (value > max)
	{
		return max;
	}
	else
	{
		return value;
	}
}

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
	for (int i = inv.HowMuchInStore; i < 30; i++)
	{
		inv.Mutations[i] = 0;
	}
	for (int i = inv.HowMuchInStore; i < 30; i++)
	{
		inv.equipedWepNum[i] = 0;
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
	if (x == 0)
	{
		inv.wepname = inv.Invarray[0];
		fight.playerwepdmg = 4;
		fight.playerATT += 6;
	}
	// 1.Shortsword
	else if (x == 1)
	{
		inv.wepname = inv.Invarray[1];
		fight.playerwepdmg = 6;
		fight.playerATT += 3;

	}
	// 2.Battleaxe
	else if (x == 2)
	{
		inv.wepname = inv.Invarray[2];
	
		fight.playerwepdmg = 12;
	}
	// 3.Claymore
	else if (inv.storeAmount[x])
	{
		inv.wepname = inv.Invarray[3];
		
		fight.playerwepdmg = 15;
	}
	// 4.Leather
	else if (inv.storeAmount[x])
	{
		
		fight.playerAC = 11 + fight.playerAGscore;
	}
	// 5.Bottlecap
	else if (inv.storeAmount[5])
	{
		fight.playerAC = 13 + Clamp(-4, 2, fight.playerAGscore);
	}
	// 6.Sleetsheet
	else if (inv.storeAmount[6])
	{
		fight.playerAC = 14;
	}
	// 7.Potion
	// 8.Day Rations
	// 9.Fists
	else if (inv.storeAmount[9])
	{
		fight.playerwepdmg = fight.playerSTRscore;
	}
}

void handCounter(Items &inv, PlayervMonster &fight)
{
	int i = 0;
	int NumOfHands = 0;
for (int i = 0; i < 2; i++)
{
	NumOfHands += fight.playerHands[i];
}
cout << "You have " << NumOfHands << " free hands" << endl;

	
	cout <<"1. Free left hand";
	if (fight.playerHands[0] > 1)
	{
		cout << "s";
	}
	cout << ":" << fight.playerHands[0];

	cout << endl;


	cout <<"2. Free right hand";
	if (fight.playerHands[1] > 1)
	{
		cout << "s";
	}
	cout << ":" << fight.playerHands[1] << endl;

}

int invEquipWep(Items &inv, PlayervMonster &fight, int i)
{
	int x;
	if (inv.storeAmount[0])
	{
		x = inv.storeAmount[0];
	}
	// 1.Shortsword
	else if (inv.storeAmount[1])
	{
		x = inv.storeAmount[1];
	}
	// 2.Battleaxe
	else if (inv.storeAmount[2])
	{
		x = inv.storeAmount[2];
	}
	// 3.Claymore
	else if (inv.storeAmount[3])
	{
		x = inv.storeAmount[3];
	}
	// 4.Leather
	if (inv.storeAmount[4])
	{
		x = inv.storeAmount[4];
	}
	// 5.Bottlecap
	else if (inv.storeAmount[5])
	{
		x = inv.storeAmount[5];
	}
	// 6.Sleetsheet
	else if (inv.storeAmount[6])
	{
		x = inv.storeAmount[6];
	}
	// 7.Potion
	// 8.Day Rations
	// 9.Fists
	else if (inv.storeAmount[9]);
	{
		x = inv.storeAmount[9];

	}
	return x;
}
void invEquip(Items &inv, PlayervMonster &fight)
{
	int storeNum = 0;
	int LocateItem[30];
	int userInput = 0;
	int choice = 0;
	int StatNum = 0;
	DelayText(1, ("                                                                                "));
	DelayText(1, ("                      What would you like to equip                              "));
	DelayText(1, ("________________________________________________________________________________"));
	DelayText(1, ("                                                                                "));
	DelayText(1, ("1.Weapons                                                                       "));
	DelayText(1, ("2.Armor                                                                         "));
	DelayText(1, ("3.Trinkets                                                                      "));
	DelayText(1, ("                                                                                "));
	cin >> choice;
	system("CLS");

	switch (choice)
	{
	case 1:
		DelayText(1, ("                       What weapon would you like to equip?                     "));
		DelayText(1, ("________________________________________________________________________________"));

		/*cout << "Cash $" << inv.playerCash << endl;*/


		system("CLS");
		cout << "\nWhich hand would you like to equip to?" << endl;
		handCounter(inv, fight);
		cout << ">";
		choice = 0;
		cin >> choice;
		
		if (fight.playerHands[choice - 1] <= 0 || choice > 3)
		{
			system("CLS");
			handCounter(inv, fight);
			cout << "Hand not empty\n>";
			cin >> choice;
		} 

		if (fight.playerHands[choice - 1] >= 0)
		{
			
				system("CLS");
				//for (int i = 0; i < 4; i++)
				//{
				//	if (inv.storeAmount[i] > 0)
				//	{
				//		LocateItem[storeNum] = i;
				//		storeNum++;
				//	}	
				//inv.equipedWepNum[choice] =
				//	
				//}
				showInvtoo(inv);
				int storeNum = 0;
				cout << "What weapon would you like to equip to your hand?\n>";
				cin >> userInput;
				for (int i = 0; i < 4; i++)
				{
					/*if (inv.storeAmount[i] > 0)
					{*/
						LocateItem[storeNum] = i;
						storeNum++;

						cout << storeNum << ". " << inv.Invarray[i] << "          Qty." << inv.storeAmount[i] << endl;

					//}

				}

				switch (userInput)
				{
				case 1:
					inv.equipedWepNum[fight.playerHands[choice - 1] -1 ] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
					storeItemStats(inv, fight, LocateItem[userInput - 1]);
					inv.storeAmount[LocateItem[userInput - 1]] -= 1;
					inv.equipedName[choice - 1] = inv.wepname;
					system("CLS");
					break;
				case 2:
					inv.equipedWepNum[fight.playerHands[choice - 1] -1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
					storeItemStats(inv, fight, LocateItem[userInput - 1]);
					inv.storeAmount[LocateItem[userInput - 1]] -= 1;
					inv.equipedName[choice - 1] = inv.wepname;
					system("CLS");
					break;
				case 3:
					inv.equipedWepNum[fight.playerHands[choice - 1] -1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
					storeItemStats(inv, fight, LocateItem[userInput - 1]);
					inv.storeAmount[LocateItem[userInput - 1]] -= 1;
					inv.equipedName[choice - 1] = inv.wepname;
					system("CLS");
					break;
				case 4:
					inv.equipedWepNum[fight.playerHands[choice - 1] -1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
					storeItemStats(inv, fight, LocateItem[userInput - 1]);
					inv.storeAmount[LocateItem[userInput - 1]] -= 1;
					inv.equipedName[choice - 1] = inv.wepname;
					system("CLS");
					break;

				}
				
				fight.playerHands[choice - 1] -= 1;
				
				cout << "you epuiped the " << inv.equipedName[choice - 1] << "in your " << inv.handname[choice - 1] << " hand" << endl;
			

		}
	}
}
		
	

void WepChoice(Items &inv, PlayervMonster &fight)
{
	showInvtoo(inv);
	int LocateItem[30];
	int userInput = 0;
	int choice = 0;
	int StatNum = 0;
	int storeNum = 0;
	DelayText(1, ("                                                                                "));
	DelayText(1, ("                      What will you attack with?                                "));
	DelayText(1, ("________________________________________________________________________________"));
	DelayText(1, ("                                                                                "));
	for (int i = 0; i < 5; i++)
	{
		if (inv.storeAmount[i] > 0)
		{
			LocateItem[storeNum] = i;
			storeNum++;

			cout << storeNum << ". " << inv.equipedName[i] << endl;

		}

	}
	cin >> userInput;
	switch (userInput)
	{
	case 1:
		inv.equipedWepNum[fight.playerHands[choice - 1] - 1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
		storeItemStats(inv, fight, LocateItem[userInput - 1]);
		inv.storeAmount[LocateItem[userInput - 1]] -= 1;
		cout << "You attacked with your " << inv.equipedName[userInput - 1];
		system("CLS");
		break;
	case 2:
		inv.equipedWepNum[fight.playerHands[choice - 1] - 1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
		storeItemStats(inv, fight, LocateItem[userInput - 1]);
		inv.storeAmount[LocateItem[userInput - 1]] -= 1;

		system("CLS");
		break;
	case 3:
		inv.equipedWepNum[fight.playerHands[choice - 1] - 1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
		storeItemStats(inv, fight, LocateItem[userInput - 1]);
		inv.storeAmount[LocateItem[userInput - 1]] -= 1;

		system("CLS");
		break;
	case 4:
		inv.equipedWepNum[fight.playerHands[choice - 1] - 1] = invEquipWep(inv, fight, LocateItem[userInput - 1]);
		storeItemStats(inv, fight, LocateItem[userInput - 1]);
		inv.storeAmount[LocateItem[userInput - 1]] -= 1;

		system("CLS");
		break;

	}
	
}
