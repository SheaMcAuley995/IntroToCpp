#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"
#include "Inventory.h"

using std::cout;
using std::cin;
using std::endl;


void TitleScreen(PlayervMonster &fight)
{

	colorTextChange(2);
	cout << "                                       WELCOME!                                       " << endl;
	cout << "                                     " << fight.Playername << "                                               " << endl;
	cout << "                                                                                      " << endl;

	DelayText(10, ("You find youself in the vaste wastelands of the planet once known as QEAVIS     "));
	DelayText(10, ("Long ago humans came and mined the planet for all of its valuable               "));
	DelayText(10, ("resources. Leaving the planet a fragile irraitated hull of what it once was. The"));
	DelayText(10, ("planet was abandoned by the rich and powerful, Leaving only the scum and the    "));
	DelayText(10, ("squabble. You are one of these degenerates, left to rot with the rest of the    "));
	DelayText(10, ("planet. "));
	Sleep(500);
	system("pause");
	system("CLS");
	DelayText(10, ("You have traveled long and far to find yourself a new home among the true humans"));
	DelayText(10, ("The great city of Alduwin holds what remains of civilization in these           "));
	DelayText(10, ("treacherous wastes. You stare awestuck at the grandeur that is the obsidian gate"));
	DelayText(10, ("The guards check your person and find a meager nothing. Not even worth extorting"));
	DelayText(10, ("Reluctantly you walk forword and find yourself in the middle of the great hustle"));
	DelayText(10, ("and bustle that is Alduwin, and that's when you see it. Almost as if it were    "));
	DelayText(10, ("divine intervention. A great stadium with a neon-lit sign...                    "));
	Sleep(500);
	system("pause");
	system("CLS");
	int animate = 0;

	colorTextChange(7);

	for (int i = 0; i < 40; i++)
	{
		cout << " __      __                  __  .__               _      .___" << endl;
		cout << "/  \\    /  \\_____    _______/  |_|  |   ____   ____    __| _/" << endl;
		cout << "\\   \\/\\/   /\\__  \\  /  ___/\\   __\\  | _/ __ \\ /    \\  / __ | " << endl;
		cout << " \\        /  / __ \\_\\___ \\  |  | |  |_\\  ___/|   |  \\/ /_/ | " << endl;
		cout << "  \\__/\\  /  (____  /____  > |__| |____/\\___  >___|  /\\____ | " << endl;
		cout << "       \\/        \\/     \\/                 \\/     \\/      \\/ " << endl << endl;
		animate = i % 4;
		switch (animate)
		{

		case 0:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "               )  (      (            )  " << endl;
			cout << "            ( /(  )(    ))\\  (     ( /(  " << endl;
			cout << "            )(_))(()\\  /((_) )\\ ) *)(_)) " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "           ((_)_ * ((_)(_))  _(_/( ((_)_  " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "           / _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "           \\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;

		case 1:

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "            ( /(  )(    ))\\  (     ( /(  " << endl;
			cout << "            )(_))(()\\  /((_) )\\ )* )(_)) " << endl;
			cout << "           (( )   *(( )( ))   ( /( (( )   " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "           /(_\\_ \\)_\\)_/(  _/_\\( ))_(_/ " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "           / _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "           \\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;
		case 2:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "               )  (      (     *      )  " << endl;
			cout << "            ( /(  )( *   ))\\  (     ( /(  " << endl;
			cout << "            )(_))(()\\  /((_) )\\ )  )(_)) " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "           ((_)_  ((_)(_))  _(_/( ((_)_  " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "           / _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "           \\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;
		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "                      *         )   (  )  " << endl;
			cout << "            ( /(  )(    ))\\  (      ))   " << endl;
			cout << "            )(_))(()\\  /((_) )\\ )  )(_)) " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "           ((_)_  ((_)(_))  _(_/( ((_)_  " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "           / _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "           \\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;
		}
		Sleep(50);
		system("CLS");
	}


	DelayText(10, ("Before you can start your life of fame and fortune you'll need to gear up for "));
	DelayText(10, ("the bloody battles ahead. There are a few places you'll want to visit so you can"));
	DelayText(10, ("buy some gear. "));
	Sleep(500);
	system("pause");
	system("CLS");


}

void Overworld(PlayervMonster &fight, Items &Inv)
{
	int cashTest = Inv.playerCash;
	int userInput = 0;
	bool MarketFlavor = true;
	bool CantinaFlavor = true;
	bool ArmoryFlavor = true;
	bool MutationLabFlavor = true;
	bool ArenaFlavor = true;
	bool inTown = true;
	bool inStore;
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠
	char Delete = 8;

	while (inTown == true)
	{
		inStore = true;
		DelayText(1, ("                                 Alduwin                                        "));
		DelayText(1, ("                                                                                "));
		DelayText(1, ("Where would you like to go?                                                     "));
		DelayText(1, ("1.Maketplace                                                                    "));
		DelayText(1, ("2.Cantina                                                                       "));
		DelayText(1, ("3.Armory                                                                        "));
		DelayText(1, ("4.MutationLab Co                                                                "));
		DelayText(1, ("5.Arena                                                                         "));
		DelayText(1, ("6.See Character sheet                                                           "));

		cin >> userInput;
		system("CLS");
		switch (userInput)
		{
		case 1:

			DelayText(1, ("                                  Marketplace                                   "));
			if (MarketFlavor == true)
			{
				DelayText(10, ("You walk to the marketplace and find yourself surrounded with the usual rabble. "));
				DelayText(10, ("''HEY YOU, You look like the fighting type. Hoping to make a name for yourself  "));
				DelayText(10, ("in the arena ay?'' The voice is coming from a jolly merchant clad in many       "));
				DelayText(10, ("different fabrics. ''Well you won't get anywhere without MY fabulous wares!     "));
				system("pause");
				system("CLS");
				MarketFlavor = false;
			}
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                            What would you like to buy?                         "));
			DelayText(0, ("Cash $"));
			cout << Inv.playerCash;
			cout << endl;
			DelayText(1, ("1.Potion                  :$10                                                  "));
			DelayText(1, ("2.Days Ration             :$                                                    "));
			DelayText(1, ("                          :$                                                    "));
			DelayText(1, ("                          :$                                                    "));
			DelayText(1, ("5.Leave                                                                         "));
			cin >> userInput;
			system("CLS");
			break;
		case 2:
			DelayText(1, ("                                  Cantina                                       "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			break;
		case 3:
			while (inStore == true)
			{
				DelayText(1, ("                                  Armory                                        "));
				if (ArmoryFlavor == true)
				{
					DelayText(10, ("Black clouds bellow out of the top of the town armory. Many rough looking people "));
					DelayText(10, ("Stand around the outside of the building. They all eye you suspiciously as you "));
					DelayText(10, ("walk towards the entrance. As you walk inside you are greated by a small old man "));
					DelayText(10, ("surrounded by different weapons and armor. He doesn't notice you at first so "));
					DelayText(10, ("you loudly clear your throat to alert him of your presence. Started he jumps up "));
					DelayText(10, ("from his work bonking his head on a shelf, sending scraps of metal flying in all "));
					DelayText(10, ("directions. ''OI! WHAT THE HELL DO YOU WANT?!''                                 "));
					DelayText(10, ("                                                                                "));
					system("pause");
					system("CLS");
					ArmoryFlavor = false;
				}

				DelayText(0, ("                            What would you like to buy?                         "));
				DelayText(0, ("Cash $"));
				cout << Inv.playerCash;
				cout << endl;
				DelayText(0, ("--------------------------------------------------------------------------------"));
				DelayText(1, ("                                                                                "));
				DelayText(5, ("1.Weapons                                                                       "));
				DelayText(5, ("2.Armor                                                                         "));
				DelayText(5, ("3.Leave                                                                         "));
				cin >> userInput;
				system("CLS");
				cashTest = Inv.playerCash;
				switch (userInput)
				{
				case 1:

					DelayText(1, ("                              Weapons                                           "));
					DelayText(1, ("                                                                                "));
					DelayText(1, ("Cash $"));
					cout << Inv.playerCash;
					cout << endl;
					DelayText(1, ("--------------------------------------------------------------------------------"));
					DelayText(1, ("                                                                                "));
					DelayText(1, ("1.Dagger            $2                                                          "));
					DelayText(1, ("2.Shortsword        $10                                                         "));
					DelayText(1, ("3.Battleaxe         $30                                                         "));
					DelayText(1, ("4.Claymore          $50                                                         "));
					DelayText(1, ("5.Leave                                                                         "));
					cin >> userInput;
					system("CLS");
					switch (userInput)
					{
					case 1:
						
						if ((cashTest -= 2) >= 0)
						{
							
							Inv.playerCash -= 2;
							invAdd(Inv, 0);
						}
						else
						{

							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
						break;
					case 2:
						if ((cashTest -= 10) >= 0)
						{
						
						Inv.playerCash -= 10;
						invAdd(Inv, 1);
						}
						else
						{
							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
						break;
					case 3:
						if ((cashTest -= 30) >= 0)
						{
							Inv.playerCash -= 30;
							invAdd(Inv, 2);
						}
						else
						{
							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
						break;
					case 4:
						if ((cashTest -= 50) >= 0)
						{
							Inv.playerCash -= 50;
							invAdd(Inv, 3);
						}
						else
						{
							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
					}
					break;
				case 2:
					DelayText(1, ("                              Armor                                             "));
					DelayText(1, ("                                                                                "));
					DelayText(1, ("                                                                                "));
					DelayText(1, ("Cash $"));
					cout << Inv.playerCash;
					cout << endl;
					DelayText(1, ("--------------------------------------------------------------------------------"));
					DelayText(1, ("                                                                                "));
					DelayText(1, ("1.Leather           $10                                                         "));
					DelayText(1, ("2.Bottlecap         $50                                                         "));
					DelayText(1, ("3.SleetSheet        $75                                                         "));
					DelayText(1, ("                                                                                "));
					cin >> userInput;
					system("CLS");
					cashTest = Inv.playerCash;
					switch (userInput)
					{
						
					case 1:
						if ((cashTest -= 10) >= 0)
						{
							Inv.playerCash -= 10;
							invAdd(Inv, 4);
						}
						else
						{
							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
						break;
					case 2:
						if ((cashTest -= 50) >= 0)
						{
						Inv.playerCash -= 50;
						invAdd(Inv, 5);
						}
						else
						{
							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
						break;
					case 3:
						if ((cashTest -= 75) >= 0)
						{
						Inv.playerCash -= 75;
						invAdd(Inv, 6);
						}
						else
						{
							cout << "You do not have enough money for that!" << endl;

							system("pause");
							system("CLS");
						}
						break;

					}
					break;
				case 3:
					inStore = false;
					DelayText(10, ("You leave the armory and head back into town...                                 "));
					Sleep(100);
					system("pause");
					system("CLS");
					break;
				}
			}

			break;
		case 4:
			DelayText(1, ("                                  MutationLab Co                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			DelayText(10, ("                                                                                "));
			break;
		case 5:
			DelayText(1, ("                                  Arena                                         "));
			if (ArenaFlavor == true)
			{
				DelayText(10, ("You approach the grand arena near the center of the city. Only here will you see"));
				DelayText(10, ("the wealthy mixing with the filth that litters the commonwealth. You can hear   "));
				DelayText(10, ("the cheers of the arena goers from miles away. You walk up to a desk and sign   "));
				DelayText(10, ("your name into the roster. You are pointed towards a long hallway and walk down "));
				DelayText(10, ("until you are met with a room full of fighters waiting impatiently for their    "));
				DelayText(10, ("next fight.                                                                     "));
				Sleep(100);
				system("pause");
				system("CLS");
				ArenaFlavor = false;
			}
			findMonster(fight, Inv);
			monsterFight(fight, Inv);
			system("pause");
			system("CLS");
			if (fight.playerHP <= 0)
			{
				system("CLS");
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                     GAME             OVER                                      "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				system("pause");

			}
			else
			{
				fight.playerHP = fight.playerHPMax;
			}
			break;
		case 6:
			displayPlayerStats(fight);
			showInvtoo(Inv);
			DelayText(1, ("--------------------------------------------------------------------------------"));
			DelayText(1, ("What would you like to do?                                                      "));
			DelayText(1, ("1.Equip Items                                                                   "));
			DelayText(1, ("2.Unequip Items                                                                 "));
			DelayText(1, ("3.Check Mutations                                                               "));
			DelayText(1, ("4.Level up                                                                      "));
			DelayText(1, ("5.Leave                                                                         "));
			cin >> userInput;
			switch (userInput)
			{
			case 1:
				system("CLS");
				showInvtoo(Inv);
				invEquip(Inv, fight);
			case 2:
				break;
			case 5:
				break;
			}
			system("pause");
		}
		
	}
	system("pause");
}
