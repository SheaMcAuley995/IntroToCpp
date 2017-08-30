#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
using std::cout;
using std::cin;
using std::endl;


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

////char suffix[];
////genderKeeper(fight, x, suffix);
////cout << suffix << " left."
//char genderKeeper(PlayervMonster fight, int x, char suffix[])
//{
//	
//
//	switch (fight.PlayerGender)
//	{
//	case 1:
//		switch (x)
//		{
//		case 1:
//
//		}
//		break;
//	case 2:
//		break;
//	}
//}

void CharacterCreate(PlayervMonster &fight)
{
	int userinput;
	int statchange =0;
	int screwupcount = 0;
	char b = 205;
	char l = 201;
	char r = 187;
	char p = 186;
	char bl = 200;
	char br = 188;
	char Delete = 8;
	while (fight.statLock < 0 || fight.statLock != 0)
	{
		colorTextChange(2);
		cout << l;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << r << endl;
		//cout << "╔═══════════════════════════════╗" << endl;
		cout << p <<"       PLAYER     STATS        "<<p << endl;
		cout << p <<"                               "<< p << endl;
		if (fight.statLock > 9)
		{
			cout << p <<"    Stat Points Left :" << fight.statLock << "       "<< p << endl;
		}
		else
		{
			cout << p<<"    Stat Points Left :" << fight.statLock << "        "<< p << endl;
		}
		cout << p<<"                               "<<p << endl;
		if (fight.playerSTR > 9)
		{
			cout << p<<"1.Strength    :" << fight.playerSTR << "              "<<p << endl;
		}
		else
		{
			cout << p<<"1.Strength    :" << fight.playerSTR << "               "<<p << endl;
		}
		
		if (fight.playerAG > 9)
		{
			cout << p<<"2.Dexterity   :" << fight.playerAG << "              "<<p << endl;
		}
		else {
			cout << p<<"2.Dexterity   :" << fight.playerAG << "               "<<p << endl;
		}
		if (fight.playerCON > 9)
		{
			cout << p<<"3.Constitution:" << fight.playerCON << "              "<<p << endl;
		}
		else
		{
			cout << p<<"3.Constitution:" << fight.playerCON << "               "<<p << endl;
		}
		cout << p<<"                               "<< p << endl;
		cout << bl;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << br << endl;


		cout << "\n\nPlease select the stat you would like to change\n \n1.STR\n2.DEX\n3.CON\n>";
		cin >> userinput;
		switch (userinput){
			case 1:
				cout << "\nHow many points would you like to add to your strength? \n\n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nStrength  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nStrength vaule >";
					}
				}
				fight.playerSTR += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 2:
				cout << "\nHow many points would you like to add to your dexterity? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \ndexterity  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \ndexterity >";
					}
				}
				fight.playerAG += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 3:
				cout << "\nHow many points would you like to add to your Constitution? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nConstitution  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nConstitution vaule >";
					}
				}
				fight.playerAG += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;

	}
	
		if (fight.statLock < 0)
		{
			system("CLS");
			fight.statLock = 18;
			cout << "You spent too many points!\n";
			fight.playerSTR = 8;
			fight.playerAG = 8;
			fight.playerCON = 8;
		}
		else if (fight.statLock > 18)
		{
			system("CLS");
			fight.statLock = 18;
			cout << "CHEATER!\n";
			fight.playerSTR = 8;
			fight.playerAG = 8;
			fight.playerCON = 8;
		}
		

	
		
		system("CLS");
	}
	cout << "Please enter the name of your character \n>";
	cin >> fight.Playername;
	system("CLS");
}

void TitleScreen(PlayervMonster &fight)
{
	
	cout << "Please enter the name of your character \n>";
	cin >> fight.Playername;
	colorTextChange(2);
	cout << "                                       WELCOME!                                       " << endl;
	cout << "                                     " << fight.Playername << "                                               " << endl;
	cout << "                                                                                      " << endl;

	DelayText(10, ("You find youself in the vaste wastelands of the planet once known as QEAVIS     "));
	DelayText(10, ("Long ago humans came and mined the planet for all of its valuable               "));
	DelayText(10, ("resources. Leaving the planet a fragile irraitated hull of what it once was. The"));
	DelayText(10, ("planet was abandoned by the rich and powerful, Leaving only the scum and the    "));
	DelayText(10, ("squabble. You are one of these degenerates, left to rot with the rest of the    "));
	DelayText(10, ("planet.                                                                         "));
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
	DelayText(10, ("                                                                                "));
	Sleep(500);
	system("pause");
	system("CLS");
	int animate = 0;
	for (int i = 0; i < 40; i++)
	{
		colorTextChange(7);
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
			cout << "    )  (      (            )  " << endl;
			cout << " ( /(  )(    ))\\  (     ( /(  " << endl;
			cout << " )(_))(()\\  /((_) )\\ )  )(_)) " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "((_)_  ((_)(_))  _(_/( ((_)_  " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "/ _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "\\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;

		case 1:

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << " ( /(  )(    ))\\  (     ( /(  " << endl;
			cout << " )(_))(()\\  /((_) )\\ )  )(_)) " << endl;
			cout << "(( )   (( )( ))   ( /( (( )   " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "/(_\\_ \\)_\\)_/(  _/_\\( ))_(_/ " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "/ _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "\\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;
		case 2:

		case 3:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "    )  (      (            )  " << endl;
			cout << " ( /(  )(    ))\\  (     ( /(  " << endl;
			cout << " )(_))(()\\  /((_) )\\ )  )(_)) " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			cout << "((_)_  ((_)(_))  _(_/( ((_)_  " << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "/ _` || '_|/ -_)| ' \\))/ _` | " << endl;
			cout << "\\__,_||_|  \\___||_||_| \\__,_| " << endl;
			break;
		}
		Sleep(100);
		system("CLS");

	}

	DelayText(10, ("Before you can start your life of fame and fortune you'll need to gear up for   "));
	DelayText(10, ("the bloody battles ahead. There are a few places you'll want to visit so you can"));
	DelayText(10, ("buy some gear.                                                                  "));
	Sleep(500);
	system("pause");
	system("CLS");
	

}

void Overworld(PlayervMonster &fight)
{
	int userInput = 0;
	bool MarketFlavor = true;
	bool CantinaFlavor = true;
	bool ArmoryFlavor = true;
	bool MutationLabFlavor = true;
	bool ArenaFlavor = true;
	bool inTown = true;
	bool inStore;
	while (inTown == true)
	{
		inStore = true;
		DelayText(1, ("Where would you like to go?                                                     "));
		DelayText(1, ("1.Maketplace                                                                    "));
		DelayText(1, ("2.Cantina                                                                       "));
		DelayText(1, ("3.Armory                                                                        "));
		DelayText(1, ("4.MutationLab Co                                                                "));
		DelayText(1, ("5.Arena                                                                         "));

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
			DelayText(1, ("1.Potion                  :$                                                    "));
			DelayText(1, ("2.Days Ration             :$                                                    "));
			DelayText(1, ("                          :$                                                    "));
			DelayText(1, ("                          :$                                                    "));
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
					DelayText(10, ("Black clouds bellow out of the top of the town armory. Many rough looking people"));
					DelayText(10, ("Stand around the outside of the building. They all eye you suspiciously as you  "));
					DelayText(10, ("walk towards the entrance. As you walk inside you are greated by a small old man"));
					DelayText(10, ("surrounded by different weapons and armor. He doesn't notice you at first so    "));
					DelayText(10, ("you loudly clear your throat to alert him of your presence. Started he jumps up "));
					DelayText(10, ("from his work bonking his head on a shelf, sending scraps of metal flying in all"));
					DelayText(10, ("directions. ''OI! WHAT THE HELL DO YOU WANT?!''                                 "));
					DelayText(10, ("                                                                                "));
					system("pause");
					system("CLS");
					ArmoryFlavor = false;
				}
				
				DelayText(10, ("                            What would you like to buy?                         "));
				DelayText(10, ("Cash $"));
				cout << fight.playerCash;
				DelayText(10, ("                                                                                "));
				DelayText(1, ("1.Weapons                                                                       "));
				DelayText(1, ("2.Armor                                                                         "));
				DelayText(1, ("3.Leave                                                                         "));
				cin >> userInput;
				system("CLS");
				switch (userInput)
				{
				case 1:

					DelayText(10, ("                              Weapons                                           "));
					DelayText(10, ("                                                                                "));
					DelayText(10, ("Cash $"));
					cout << fight.playerCash;
					DelayText(10, ("                                                                                "));
					DelayText(10, ("1.Dagger            $2                                                          "));
					DelayText(10, ("2.Shortsword        $10                                                         "));
					DelayText(10, ("3.Battleaxe         $30                                                         "));
					DelayText(10, ("4.Claymore          $50                                                         "));
					cin >> userInput;
					system("CLS");
					switch (userInput)
					{
					case 1:
						fight.playerwepdmg = 4;
						fight.playerATT += 6;
						fight.playerCash -= 2;
						break;
					case 2:
						fight.playerwepdmg = 6;
						fight.playerATT += 3;
						fight.playerCash -= 10;
						break;
					case 3:
						fight.playerCash -= 30;
						fight.playerwepdmg = 12;
						break;
					case 4:
						fight.playerCash -= 50;
						fight.playerwepdmg = 15;
					}
					break;
				case 2:
					DelayText(10, ("                              Armor                                             "));
					DelayText(10, ("                                                                                "));
					DelayText(10, ("Cash $"));
					cout << fight.playerCash;
					DelayText(10, ("                                                                                "));
					DelayText(10, ("1.Leather           $10                                                         "));
					DelayText(10, ("2.Bottlecap         $50                                                         "));
					DelayText(10, ("3.SleetSheet        $75                                                         "));
					DelayText(10, ("                                                                                "));
					cin >> userInput;
					system("CLS");
					switch (userInput)
					{
					case 1:
						fight.playerAC = 11 + fight.playerAGscore;
						fight.playerCash -= 10;
						break;
					case 2:
						fight.playerAGscore = Clamp(-4, 2, fight.playerAGscore);
						fight.playerAC = 14 + fight.playerAGscore;
						fight.playerCash -= 50;
						break;
					case 3:
						fight.playerAGscore = Clamp(-4, 0, fight.playerAGscore);
						fight.playerAC = 17;
						fight.playerCash -= 75;
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
			}
			findMonster;
			DelayText(1, ("In the arena you are met with a "));
			cout << fight.monstername;
			Sleep(100);
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
		}

	}
	system("pause");
}

int GenerateDamge(PlayervMonster &fight)
{
	return (rand() % fight.playerwepdmg + 1) + fight.playerSTR;
}

int GenerateMonsterDamge(PlayervMonster &fight)
{
	return (rand() % fight.monsterwepdmg + 1);
}

int GenerateHit(PlayervMonster &fight) 
{
	return (rand() % 20 + 1 + fight.playerAGscore);
}

int GenerateMonsterHit(PlayervMonster &fight)
{
	return (rand() % 20 + 1 + fight.monsterATT);
}


void playerArmor(PlayervMonster &fight) 
{
	
	int userInput = 0;
	while (userInput <= 0 || userInput > 3)
	{
		cout << "Choose the armor you wish to be donned upon your glorius body?" << endl;
		cout << "1.Light armor\n2.Medium armor\n3.Heavy armor" << endl;
		cin >> userInput;
	}
	
	switch (userInput)
	{
	case 1:
		fight.playerAC = 11 + fight.playerAGscore;
		break;
	case 2:
		fight.playerAGscore = Clamp(-4, 2, fight.playerAGscore);
		fight.playerAC = 14 + fight.playerAGscore;
		break;
	case 3:
		fight.playerAGscore = Clamp(-4, 0, fight.playerAGscore);
		fight.playerAC = 17;
		break;
	}
}

void findMonster(PlayervMonster &fight)
{
	srand(time(NULL));
	int rollMonster = rand() % 5;
	switch (rollMonster) {
	case 0:
		fight.monstername = "Rat";
		fight.monsterHP = 5;
		fight.monsterwepdmg = 1;
		fight.monsterDP = 4;
		fight.monsterATT = 2;
		break;
	case 1:
		fight.monstername = "Zombie";
		fight.monsterHP = 10;
		fight.monsterwepdmg = 5;
		fight.monsterDP = -1;
		fight.monsterATT = 5;
		break;
	case 2:
		fight.monstername = "Turtle";
		fight.monsterHP = 2;
		fight.monsterwepdmg = 3;
		fight.monsterDP = 0;
		fight.monsterATT = 1;
		break;
	case 3:
		fight.monstername = "Human Fighter";
		fight.monsterHP = 12;
		fight.monsterwepdmg = 8;
		fight.monsterDP = 2;
		fight.monsterATT = 6;
		break;
	case 4:
		fight.monstername = "Random Blob monster";
		fight.monsterHP = rand()%16 + 1;
		fight.monsterwepdmg = rand()%8 + 1;
		fight.monsterDP = rand()%4 + 1;
		fight.monsterATT = rand()%10 + 1;
		break;
	}
	
	
}


void monsterFight(PlayervMonster fight)
{
	int damage;
	cout << "\nA " << fight.monstername << " Meets you in the arena" << endl;
	bool isAlive = true;
	while (isAlive == true)
	{
		if (GenerateMonsterHit(fight) > fight.playerAC) 
		{
			damage = GenerateMonsterDamge(fight);
			fight.playerHP -= damage;

			if (fight.playerHP <= 0)
			{
				isAlive = false;
			}
			cout << "The " << fight.monstername << " hit you for " << damage << ", You are now at :" << fight.playerHP;
		}
		else
		{
			cout << "The " << fight.monstername << " misses!" << endl;
		}
		system("pause");

		if (GenerateHit(fight) > fight.monsterAC)
		{
			damage = GenerateDamge(fight);
			fight.monsterHP -= damage;
			if (fight.monsterHP <= 0)
			{
				isAlive = false;
			}
			cout << "You hit the " << fight.monstername << "for " << damage  << ", the " << fight.monstername << " is now at :" << fight.monsterHP << endl;
		}
		else
		{
			cout << "You miss!" << endl;
		}
		system("pause");
	}
	if (fight.playerHP <= 0 && fight.monsterHP <= 0)
	{
		cout << "It is a tie!" << endl;
	}
	else if (fight.playerHP <= 0)
	{
		cout << fight.monstername << " wins!" << endl;
	}
	else if (fight.monsterHP <= 0)
	{
		cout << "Player wins!" << endl;
	}
	system("pause");
}

void holdPlayerStats(PlayervMonster &fight)
{
	fight.playerAGscore = (fight.playerAG / 2) - 5;
	fight.playerSTRscore= (fight.playerSTR / 2) - 5;
	fight.playerCONscore = (fight.playerCON / 2) - 5;
	fight.playerHP = ((rand() % 12 + 8) + fight.playerCONscore);
	fight.playerHPMax = fight.playerHP;
	cout << "                              " << fight.Playername << endl;
	cout << "                            Character  Sheet  "  << endl;
	cout << "\nYour health is :" << fight.playerHP << endl;
	cout << endl;
	cout << "Player Strength      :" << fight.playerSTR << endl;
	cout << "Player Strength Score:" << fight.playerSTRscore << endl;
	cout << "Player agility       :" << fight.playerAG << endl;
	cout << "Player Agility Score :" << fight.playerAGscore << endl;
	cout << "Player Constitution  :" << fight.playerCON << endl;
	cout << "Player Const score   :" << fight.playerCONscore << endl;
	system("pause");
	system("CLS");
	
}

void tester(PlayervMonster fight)
{ 
	for(int i = 0; i < 20; i++)
	{
		
		cout << GenerateDamge(fight) << endl;
	}
}

