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
	Sleep(100);
	system("pause");
	system("CLS");
	GateAnimation();
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

void Overworld(PlayervMonster &fight, Items &Inv,Conditions &con)
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
		srand(time(NULL));
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
				DelayText(1, ("You walk to the marketplace and find yourself surrounded with the usual rabble. "));
				DelayText(1, ("''HEY YOU, You look like the fighting type. Hoping to make a name for yourself  "));
				DelayText(1, ("in the arena ay?'' The voice is coming from a jolly merchant clad in many       "));
				DelayText(1, ("different fabrics. ''Well you won't get anywhere without MY fabulous wares!     "));
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
			DelayText(1, ("2.Leave                                                                         "));
			cin >> userInput;
			system("CLS");
			break;
		case 2:
			DelayText(1, ("                                  Cantina                                       "));
			DelayText(1, ("                                                                                "));
			DelayText(1, ("1.Heal                                                                          "));
			DelayText(1, ("2.Leave                                                                         "));
			cin >> userInput;
			if (userInput == 1)
			{
				fight.playerHP = fight.playerHPMax;
				cout << "You heal to " << fight.playerHP << endl;
				system("pause");
				system("CLS");
			}
			else
			{
				cout << "You leave and go back to town.." << endl;
				system("pause");
				system("CLS");
			}
			break;
		case 3:
			while (inStore == true)
			{
				DelayText(1, ("                                  Armory                                        "));
				if (ArmoryFlavor == true)
				{
					ArmoryAnimation();
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
							Inv.storeAmount[userInput - 1] += 1;
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
						Inv.storeAmount[1] += 1;
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
							Inv.storeAmount[userInput - 1] += 1;
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
							Inv.storeAmount[userInput - 1] += 1;
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
							Inv.storeAmount[userInput + 3] += 1;
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
						Inv.storeAmount[userInput + 3] += 1;
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
						Inv.storeAmount[userInput + 3] += 1;
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
			if (MutationLabFlavor == true)
			{
				DelayText(1, ("                                  MutationLab Co                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("                                                                                "));
				DelayText(10, ("Before you, you see a strange green lab with ooze flowing out the side. Many    "));
				DelayText(10, ("people come here to get an edge in the arena. When you walk inside you see the  "));
				DelayText(10, ("horrors of mutation taking hold of many arena fighters. Tumors, extra arms,     "));
				DelayText(10, ("a chicken growing out of the side of someone's head..                           "));
				DelayText(10, ("Its amazing                                                                     "));
				Sleep(100);
				system("pause");
				system("CLS");
			}
			DelayText(1, ("                                  MutationLab Co                                "));
			DelayText(1, ("                                                                                "));
			DelayText(1, ("                               What would you like to do?                       "));
			DelayText(1, ("                                                                                "));
			DelayText(1, ("                                                                                "));
			DelayText(1, ("1.MUTATE    $25                                                                 "));
			DelayText(1, ("2.Leave                                                                         "));
			cin >> userInput;
			if (userInput == 1)
			{
				if (Inv.playerCash < 25)
				{
					int mutation = rand() % 5 + 1;

					switch (mutation)
					{
					case 1:
						cout << "Your muscles rapidly grow in size (+2 STR)" << endl;
						fight.playerSTR += 2;
						break;
					case 2:
						cout << "Literal fire is spraying out of your eyes. It hurts but the pain is worth it (Add fire damage)" << endl;
						con.addFire = true;
						break;
					case 3:
						cout << "You are growing green... so that's kind of cool (add radiation damage) " << endl;
						con.addRadiation = true;
						break;
					case 4:
						cout << "You start sweating literal sickness. Not sure how that works but I'm sure no one will love you now (add poison damage) " << endl;
						con.addPoison = true;
						break;
					case 5:
						cout << "The world slows down around you.. It appears you have gained heightened reflexes (+2 DEX)" << endl;
						fight.playerAGscore = +2;
						break;
					}
				}
				else
				{
					cout << "you don't have enough money" << endl;
				}
			}
			else
			{
				cout << "You leave back to town.." << endl;
				Sleep(100);
				system("pause");
				system("CLS");
			}
			
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
				DelayText(10, ("You look at a large billboard filled with different colors and scheduled fights "));
				DelayText(10, ("They all seem to be segmented into three parts. Weaking level, Fighter level,   "));
				DelayText(10, ("and Champion level.                                                             "));
				ArenaFlavor = false;

			}
			DelayText(1, ("What fight will you be doing today?                                             "));
			DelayText(1, ("--------------------------------------------------------------------------------"));
			DelayText(1, ("1.WEAKLING LEAGUE                                                               "));
			DelayText(1, ("2.FIGHTY FIGHTY HARDY WARRIORS                                                  "));
			DelayText(1, ("3.ONLY THE TOUGHEST OF THE TOUGH                                                "));
			cin >> userInput;
			switch (userInput)
			{
			case 1:
				findMonster(fight, Inv);
				break;
			case 2:
				findMonsterMED(fight, Inv, con);
				break;
			case 3:
				findMonsterHARD(fight, Inv, con);
			}
			findMonster(fight, Inv);
			monsterFight(fight, Inv, con);
			switch (userInput)
			{
			case 1:
				CheckReward(fight, Inv, 1);
				break;
			case 2:
				CheckReward(fight, Inv, 2);
				break;
			case 3:
				CheckReward(fight, Inv, 3);
				break;
			}
			
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

			break;
		case 6:
			displayPlayerStats(fight);
			showInvtoo(Inv);
			DelayText(1, ("--------------------------------------------------------------------------------"));
			DelayText(1, ("What would you like to do?                                                      "));
			DelayText(1, ("1.Equip Items                                                                   "));
			DelayText(1, ("2.Level up                                                                      "));
			DelayText(1, ("3.Leave                                                                         "));
			cin >> userInput;
			switch (userInput)
			{
			case 1:
				system("CLS");
				showInvtoo(Inv);
				invEquip(Inv, fight);
			case 2:
				CharacterLevl(fight);
				break;
			case 3:
				break;
			}
			system("pause");
		}
		
	}
	system("pause");
}

void GateAnimation()
{
	int animate = 0;
	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "       .: *                ." << endl;
		cout << "       __ .   *    .          .: *    __" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "      (())                           (())" << endl;
		cout << "     ((()))  __          .      __  ((()))" << endl;
		cout << "    (((())))(())     .         (())(((())))" << endl;
		cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
		cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
		cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
		cout << "    _|    |_|[]|_|_|I-I-I-I|_|_|[]|_|    |_" << endl;
		cout << "   |-|    |-|  |-|||-I-I-I-|||-|  |-|    |-|" << endl;
		cout << "  (|-|    |-|  |-| |I-I-I-I| |-|  |-|    |-|)" << endl;
		cout << " ((|-| __ |-|  |-| |-I-I-I-| |-|  |-| __ |-|))" << endl;
		cout << " ()|-|_XX_|-|__|T|_|[T]-[T]|_|T|__|-|_XX_|-|()" << endl;
		cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
		cout << "  ^~^    ~^        /       \\        ^~       " << endl;
		Sleep(1000);
		system("CLS");
	for (int i = 0; i < 5; i++)
	{
	animate = i % 5;
	switch (animate)
	{

	case 0:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "       .: *                ." << endl;
		cout << "       __ .   *    .          .: *    __" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "      (())                           (())" << endl;
		cout << "     ((()))  __          .      __  ((()))" << endl;
		cout << "    (((())))(())     .         (())(((())))" << endl;
		cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
		cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
		cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
		cout << "    _|    |_|[]|_|_|I-I-I-I|_|_|[]|_|    |_" << endl;
		cout << "   |-|    |-|  |-|||-I-I-I-|||-|  |-|    |-|" << endl;
		cout << "  (|-|    |-|  |-| |I-I-I-I| |-|  |-|    |-|)" << endl;
		cout << " ((|-| __ |-|  |-| |-I-I-I-| |-|  |-| __ |-|))" << endl;
		cout << " ()|-|_XX_|-|__|T|_|[T]-[T]|_|T|__|-|_XX_|-|()" << endl;
		cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
		cout << "  ^~^    ~^        /       \\        ^~       " << endl;

		break;
	case 1:

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "       .: .                 ." << endl;
		cout << "       __ .   -    .          .; *    __" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "      (())                           (())" << endl;
		cout << "     ((()))  __          *      __  ((()))" << endl;
		cout << "    (((())))(())     .         (())(((())))" << endl;
		cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
		cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
		cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
		cout << "    _|    |_|[]|_|_|I-I-I-I|_|_|[]|_|    |_" << endl;
		cout << "   |-|    |-|  |-|||-I-I-I-|||-|  |-|    |-|" << endl;
		cout << "  (|-|    |-|  |-| |I-I-I-I| |-|  |-|    |-|)" << endl;
		cout << " ((|-| __ |-|  |-| |[T]-[T]| |-|  |-| __ |-|))" << endl;
		cout << " ()|-|_XX_|-|__|T|_|       |_|T|__|-|_XX_|-|()" << endl;
		cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
		cout << "  ^~^    ~^        /       \\        ^~       " << endl;
		break;
	case 2:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "       .: *                ." << endl;
		cout << "       __ .   *    .          .: *    __" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "      (())                           (())" << endl;
		cout << "     ((()))  __          .      __  ((()))" << endl;
		cout << "    (((())))(())     .         (())(((())))" << endl;
		cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
		cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
		cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
		cout << "    _|    |_|[]|_|_|I-I-I-I|_|_|[]|_|    |_" << endl;
		cout << "   |-|    |-|  |-|||-I-I-I-|||-|  |-|    |-|" << endl;
		cout << "  (|-|    |-|  |-| |[T]-[T]| |-|  |-|    |-|)" << endl;
		cout << " ((|-| __ |-|  |-| |       | |-|  |-| __ |-|))" << endl;
		cout << " ()|-|_XX_|-|__|T|_|       |_|T|__|-|_XX_|-|()" << endl;
		cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
		cout << "  ^~^    ~^        /       \\        ^~       " << endl;
		break;
	case 3:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "       .: *                ." << endl;
		cout << "       __ .   *    .          .: *    __" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "      (())                           (())" << endl;
		cout << "     ((()))  __          .      __  ((()))" << endl;
		cout << "    (((())))(())     .         (())(((())))" << endl;
		cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
		cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
		cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
		cout << "    _|    |_|[]|_|_|I-I-I-I|_|_|[]|_|    |_" << endl;
		cout << "   |-|    |-|  |-|||[T]-[T]|||-|  |-|    |-|" << endl;
		cout << "  (|-|    |-|  |-| |       | |-|  |-|    |-|)" << endl;
		cout << " ((|-| __ |-|  |-| |       | |-|  |-| __ |-|))" << endl;
		cout << " ()|-|_XX_|-|__|T|_|       |_|T|__|-|_XX_|-|()" << endl;
		cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
		cout << "  ^~^    ~^        /       \\        ^~       " << endl;
		break;
	case 4:
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "       .: *                ." << endl;
		cout << "       __ .   *    .          .: *    __" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "      (())                           (())" << endl;
		cout << "     ((()))  __          .      __  ((()))" << endl;
		cout << "    (((())))(())     .         (())(((())))" << endl;
		cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
		cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
		cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
		cout << "    _|    |_|[]|_|_|[T]-[T]|_|_|[]|_|    |_" << endl;
		cout << "   |-|    |-|  |-|||       |||-|  |-|    |-|" << endl;
		cout << "  (|-|    |-|  |-| |       | |-|  |-|    |-|)" << endl;
		cout << " ((|-| __ |-|  |-| |       | |-|  |-| __ |-|))" << endl;
		cout << " ()|-|_XX_|-|__|T|_|       |_|T|__|-|_XX_|-|()" << endl;
		cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
		cout << "  ^~^    ~^        /       \\        ^~       " << endl;
		break;
	}
	
	Sleep(200);
	system("CLS");
	
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
cout << "       .: *                ." << endl;
cout << "       __ .   *    .          .: *    __" << endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
cout << "      (())                           (())" << endl;
cout << "     ((()))  __          .      __  ((()))" << endl;
cout << "    (((())))(())     .         (())(((())))" << endl;
cout << "   ((((()))))())) _         _ ((()((((()))))" << endl;
cout << "     |____|((())))()   ,   ()(((()))|____|" << endl;
cout << "     |_[]_| |__|((())__A__((())|__| |_[]_|" << endl;
cout << "    _|    |_|[]|_|_|[T]-[T]|_|_|[]|_|    |_" << endl;
cout << "   |-|    |-|  |-|||       |||-|  |-|    |-|" << endl;
cout << "  (|-|    |-|  |-| |       | |-|  |-|    |-|)" << endl;
cout << " ((|-| __ |-|  |-| |       | |-|  |-| __ |-|))" << endl;
cout << " ()|-|_XX_|-|__|T|_|       |_|T|__|-|_XX_|-|()" << endl;
cout << "^~^^~^    ^~^       /     \\     ^~^    ^~^^~^" << endl;
cout << "  ^~^    ~^        /       \\        ^~       " << endl;
Sleep(2000);
system("CLS");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

void ArmoryAnimation()
{
	int randomSketch = 0;
	char Thick = 194;
	char Med = 193;
	char thin = 192;
	for (int i = 0; i <= 25; i++)
	{
		randomSketch = rand() % 3 + 1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		cout << "                    ";
		for (int j = 0; j < 6; j++)
		{

			if (randomSketch == 2)
			{
				cout << Med;
			}
			if (randomSketch == 3)
			{
				cout << Med;
			}
		}
		cout << endl;
		cout << "                  ";
		for (int j = 0; j < 4; j++)
		{
			if (randomSketch == 1)
			{
				cout << Thick;
			}
			if (randomSketch == 2)
			{
				cout << Med;
			}
		}
		cout << endl;
		cout << "                ";
		for (int j = 0; j < 2; j++)
		{
			if (randomSketch == 1)
			{
				cout << Thick;
			}
		}
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout << "                | |" << endl;
		cout << "              __| |__" << endl;
		cout << "             |      *|" << endl;
		cout << "            / ______ |_   _)o(_" << endl;
		cout << "           / |ARMORY|  \\  /(|)\\" << endl;
		cout << "           |    __     |    N" << endl;
		cout << "           | = (  )  * |    N" << endl;
		cout << "           |   |  |    |    N" << endl;
		cout << "           ````/`/`````` ^~^~~ " << endl;
		cout << "           ^~ / /  " << endl;
		cout << "                              " << endl;

		Sleep(100);
		if (i != 25)
		{
			system("CLS");
		}
	}
}