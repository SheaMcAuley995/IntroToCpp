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


//
//int Clamp(int min, int max, int value)
//{
//	if (value < min)
//	{
//		return min;
//	}
//	else if (value > max)
//	{
//		return max;
//	}
//	else
//	{
//		return value;
//	}
//}

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
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠
	char Delete = 8;
	cout << "Please enter the name of your character \n>";
	cin >> fight.Playername;
	system("CLS");
	while (fight.statLock < 0 || fight.statLock != 0)
	{
		colorTextChange(2);
		cout << l;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << r << endl;
		
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
				fight.playerCON += statchange;
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
			system("pause");
		}
		else if (fight.statLock > 18)
		{
			system("CLS");
			fight.statLock = 18;
			cout << "CHEATER!\n";
			fight.playerSTR = 8;
			fight.playerAG = 8;
			fight.playerCON = 8;
			system("pause");
		}
		
		mathPlayerStats(fight);
	
		
		system("CLS");
	}
	
}


//
//void playerArmor(PlayervMonster &fight) 
//{
//	int userInput;
//	switch (userInput)
//	{
//	case 1:
//		fight.playerAC = 11 + fight.playerAGscore;
//		break;
//	case 2:
//		fight.playerAGscore = Clamp(-4, 2, fight.playerAGscore);
//		fight.playerAC = 14 + fight.playerAGscore;
//		break;
//	case 3:
//		fight.playerAGscore = Clamp(-4, 0, fight.playerAGscore);
//		fight.playerAC = 17;
//		break;
//	}
//}

void mathPlayerStats(PlayervMonster &fight)
{
	fight.playerAGscore = (fight.playerAG / 2) - 5;
	fight.playerSTRscore = (fight.playerSTR / 2) - 5;
	fight.playerCONscore = (fight.playerCON / 2) - 5;
	fight.playerHP = ((rand() % 12 + 8) + fight.playerCONscore);
	fight.playerHPMax = fight.playerHP;
}

void displayPlayerStats(PlayervMonster &fight)
{
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠

	cout << "                              " << fight.Playername << endl;
	cout << "                            Character  Sheet  "  << endl;
	cout << "____________________________________________________________________" << endl;
	cout << "                                                                    " << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "\nYour health is :" << fight.playerHP << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Strength      :" << fight.playerSTR << endl;
	cout << "Player Strength Score:" << fight.playerSTRscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player agility       :" << fight.playerAG << endl;
	cout << "Player Agility Score :" << fight.playerAGscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Constitution  :" << fight.playerCON << endl;
	cout << "Player Const score   :" << fight.playerCONscore << endl;

	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	system("pause");
	system("CLS");
	
}





