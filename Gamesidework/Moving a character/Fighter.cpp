#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;



int GenerateDamge(PlayervMonster &fight)
{
	//srand(time(NULL));
	return (rand() % fight.playerwepdmg + 1) + fight.playerSTRscore;
}

int GenerateMonsterDamge(PlayervMonster &fight)
{
	//srand(time(NULL));
	return (rand() % fight.monsterwepdmg + 1);
}

int GenerateHit(PlayervMonster &fight)
{
	//srand(time(NULL));
	return (rand() % 20 + 1 + fight.playerATT);
}

int GenerateMonsterHit(PlayervMonster &fight)
{
	//srand(time(NULL));
	return (rand() % 20 + 1 + fight.monsterATT);
}


void findMonster(PlayervMonster &fight, Items &inv)
{
	//srand(time(NULL));
	int rollMonster = rand() % 5;
	switch (rollMonster) {
	case 0:
		fight.monstername = "Flying_rat";
		fight.monsterHP = 5;
		fight.monsterwepdmg = 4;
		fight.monsterATT = 6;
		fight.monsterAC = 14;
		break;
	case 1:
		fight.monstername = "Cat";
		fight.monsterHP = 4;
		fight.monsterwepdmg = 2;
		fight.monsterATT = 0;
		fight.monsterAC = 12;
		break;
	case 2:
		fight.monstername = "Blood_Hawk";
		fight.monsterHP = 7;
		fight.monsterwepdmg = 6;
		fight.monsterATT = 4;
		fight.monsterAC = 12;
		break;
	case 3:
		fight.monstername = "Cancerkin";
		fight.monsterHP = 5;
		fight.monsterwepdmg = 6;
		fight.monsterATT = 5;
		fight.monsterAC = 12;
		break;
	case 4:
		fight.monstername = "Random Blob Monster";
		fight.monsterHP = rand() % 16 + 1;
		fight.monsterwepdmg = rand() % 8 + 1;
		fight.monsterATT = rand() % 10 + 1;
		
		break;
	}


}

void findMonsterMED(PlayervMonster &fight, Items &inv)
{
	//srand(time(NULL));
	int rollMonster = rand() % 5;
	switch (rollMonster) {
	case 0:
		fight.monstername = "Ooze_child";
		fight.monsterHP = 22;
		fight.monsterwepdmg = 16;
		fight.monsterATT = 3;
		fight.monsterAC = 8;
		break;
	case 1:
		fight.monstername = "Lowlife_Scum";
		fight.monsterHP = 32;
		fight.monsterwepdmg = 5;
		fight.monsterAttackNum = 2;
		fight.monsterATT = 4;
		fight.monsterAC = 12;
		break;
	case 2:
		fight.monstername = "Death Dog";
		fight.monsterHP = 39;
		fight.monsterwepdmg = 5;
		fight.monsterAttackNum = 2;
		fight.monsterATT = 4;
		fight.monsterAC = 12;
		break;
	case 3:
		fight.monstername = "Scrapped Robo";
		fight.monsterHP = 33;
		fight.monsterwepdmg = 6;
		fight.monsterAttackNum = 2;
		fight.monsterATT = 4;
		fight.monsterAC = 18;
		break;
	case 4:
		fight.monstername = "Dust Wolf";
		fight.monsterHP = 37;
		fight.monsterwepdmg = 12;
		fight.monsterAttackNum = 2;
		fight.monsterATT = 5;
		fight.monsterAC = 14;
		break;
	}


}

void findMonsterHARD(PlayervMonster &fight, Items &inv)
{
	//srand(time(NULL));
	int rollMonster = rand() % 5;
	switch (rollMonster) {
	case 0:
		fight.monstername = "Hell Hound";
		fight.monsterHP = 45;
		fight.monsterwepdmg = 20;
		fight.monsterATT = 5;
		fight.monsterAC = 15;
		break;
	case 1:
		fight.monstername = "Cross-Phased Cowman";
		fight.monsterHP = 76;
		fight.monsterwepdmg = 24;
		fight.monsterATT = 6;
		fight.monsterAC = 14;
		break;
	case 2:
		fight.monstername = "Flesh Freak";
		fight.monsterHP = 93;
		fight.monsterwepdmg = 16;
		fight.monsterAttackNum = 2;
		fight.monsterATT = 7;
		fight.monsterAC = 9;
		break;
	case 3:
		fight.monstername = "Arena Champion";
		fight.monsterHP = 37;
		fight.monsterwepdmg = 16;
		fight.monsterAttackNum = 3;
		fight.monsterATT = 7;
		fight.monsterAC = 16;
		break;
	case 4:
		fight.monstername = "Rad-Dragon";
		fight.monsterHP = 110;
		fight.monsterwepdmg = 20;
		fight.monsterAttackNum = 3;
		fight.monsterATT = 7;
		fight.monsterAC = 17;

		break;
	}


}

void monsterFight(PlayervMonster fight, Items inv)
{
	int damage;
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠
	findMonster(fight, inv);

	cout << "\nA " << fight.monstername << " Meets you in the arena" << endl;
	system("pause");
	system("CLS");

	bool isAlive = true;
	while (isAlive == true)
	{
		int userInput = 0;
		int monsterhit = GenerateMonsterHit(fight);
		int playerHit = GenerateHit(fight);

		for (int i = 0; i < 75; i++) { cout << b; };
		
		cout << endl;
		
		cout << p << "Your HP :" << fight.playerHP << p << "                                               " << p << "MonsterHP:" << fight.monsterHP << p << endl;
		
		for (int i = 0; i < 75; i++) { cout << b; };
		
		cout << endl;

		DelayText(1, ("                                                                                "));
		DelayText(1, ("                                                                                "));
		DelayText(1, ("                          What will you do?                                     "));
		DelayText(1, ("                                                                                "));
		DelayText(1, ("1.Attack                                                                        "));
		DelayText(1, ("2.Inventory                                                                     "));
		DelayText(1, ("3.Mutations                                                                     "));
		//DelayText(1, ("4.Talk it out                                                                   "));
		
		cout << ">";
		cin >> userInput;
		
		switch (userInput)
		{
		case 1:
			DelayText(1, ("                                                                                "));
			DelayText(1, ("                                                                                "));
			DelayText(1, ("                          What weapon will you use?                             "));
			DelayText(1, ("                                                                                "));
			WepChoice(inv, fight);
			//rollAnimate(fight);
			if (GenerateHit(fight) > fight.monsterAC)
			{
				damage = GenerateDamge(fight);
				fight.monsterHP -= damage;
				if (fight.monsterHP <= 0)
				{
					isAlive = false;
				}
				cout << "You hit the " << fight.monstername << "for " << damage << ", the " << fight.monstername << " is now at :" << fight.monsterHP << endl;
			}
			else
			{
				cout << "You miss!" << endl;
			}
			system("pause");
			system("CLS");
			break;
		}
		if (fight.monsterHP > 0)
		{
			int attack = fight.monsterAttackNum;
			//rollAnimate(fight);

			do {
				monsterhit = GenerateMonsterHit(fight);

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
				attack--;
				system("pause");
			} while (attack > 0);
		}
		else
		{
			isAlive = false;
			cout << "The " << fight.monstername << " dies!" << endl;
		}
		system("pause");
		system("CLS");
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
	system("CLS");
}

void rollAnimate(PlayervMonster fight)
{
	//srand(time(NULL));
	int animate = 0;
	int roll;
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠

	for (int i = 0; i < 20; i++)
	{
		cout << l;
		for (int i = 0; i < 10; i++) { cout << b; };
		cout << r;
		cout << "           ";
		cout << l;
		for (int i = 0; i < 11; i++) { cout << b; };
		cout << r << endl;
		cout << p << "Your HP :" << fight.playerHP << p << "           " << p << "MonsterHP:" << fight.monsterHP << p << endl;
		cout << "           " << bl;
		for (int i = 0; i < 11; i++) { cout << b; };
		cout << br;
		cout << endl;

		cout << "                                                                                ";
		cout << "                                                                                ";
		cout << "                          What will you do?                                     ";
		cout << "                                                                                ";
		cout << "1.Attack                                                                        ";
		cout << "2.Inventory                                                                     ";
		cout << "3.Mutations                                                                     ";
		cout << "4.Talk it out                                                                   ";
		
		animate = i % 8;
		switch (animate)
		{
		case 0:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling.                                   "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 1:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling.                                   "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 2:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling..                                  "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 3:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling..                                  "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 4:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling...                                 "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 5:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling...                                 "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 6:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling....                                "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		case 7:
			roll = rand() % 20 + 1;
			DelayText(1, ("                                     Rolling....                                "));
			DelayText(1, ("                                         "));
			cout << roll << endl;
			Sleep(10);
			system("CLS");
			break;
		}
		
	}
}


void CheckReward(PlayervMonster &fight, Items &inv, int x)
{
	int cash = 0;
	int xp = 0;
	system("CLS");
	switch (x)
	{
	case 1:
		cash = rand() % 5 + 1;
		xp = rand() % 5 + 1;
		cout << "YOUR PRIZE :$" << cash << endl;
		cout << "           :" << xp << "XP" << endl;
		fight.playerXP += xp;
		inv.playerCash += cash;
		break;
	case 2:
		cash = rand() % 15 + 5;
		xp = rand() % 15 + 5;
		cout << "YOUR PRIZE :$" << cash << endl;
		cout << "           :" << xp << "XP" << endl;
		fight.playerXP += xp;
		inv.playerCash += cash;
		break;
	case 3:
		cash = rand() % 50 + 10;
		xp = rand() % 50 + 10;
		cout << "YOUR PRIZE :$" << cash << endl;
		cout << "           :" << xp << "XP" << endl;
		fight.playerXP += xp;
		inv.playerCash += cash;
		break;
	}
	checkLevelUP(fight);
	system("pause");
	system("CLS");
}

