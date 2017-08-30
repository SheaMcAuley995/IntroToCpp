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



int GenerateDamge(PlayervMonster &fight)
{
	srand(time(NULL));
	return (rand() % fight.playerwepdmg + 1) + fight.playerSTRscore;
}

int GenerateMonsterDamge(PlayervMonster &fight)
{
	srand(time(NULL));
	return (rand() % fight.monsterwepdmg + 1);
}

int GenerateHit(PlayervMonster &fight)
{
	srand(time(NULL));
	return (rand() % 20 + 1 + fight.playerATT);
}

int GenerateMonsterHit(PlayervMonster &fight)
{
	srand(time(NULL));
	return (rand() % 20 + 1 + fight.monsterATT);
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
		fight.monsterAC = 10;
		break;
	case 1:
		fight.monstername = "Zombie";
		fight.monsterHP = 22;
		fight.monsterwepdmg = 5;
		fight.monsterDP = -1;
		fight.monsterATT = 5;
		fight.monsterAC = 8;
		break;
	case 2:
		fight.monstername = "Turtle";
		fight.monsterHP = 2;
		fight.monsterwepdmg = 3;
		fight.monsterDP = 0;
		fight.monsterATT = 1;
		fight.monsterAC = 10;
		break;
	case 3:
		fight.monstername = "Human Fighter";
		fight.monsterHP = 22;
		fight.monsterwepdmg = 8;
		fight.monsterDP = 2;
		fight.monsterATT = 6;
		fight.monsterAC = 8;
		break;
	case 4:
		fight.monstername = "Random Blob monster";
		fight.monsterHP = rand() % 16 + 1;
		fight.monsterwepdmg = rand() % 8 + 1;
		fight.monsterDP = rand() % 4 + 1;
		fight.monsterATT = rand() % 10 + 1;
		break;
	}


}


void monsterFight(PlayervMonster fight)
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
	findMonster(fight);

	cout << "\nA " << fight.monstername << " Meets you in the arena" << endl;
	system("pause");
	system("CLS");

	bool isAlive = true;
	while (isAlive == true)
	{
		int userInput = 0;
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

		DelayText(1, ("                                                                                "));
		DelayText(1, ("                                                                                "));
		DelayText(1, ("                          What will you do?                                     "));
		DelayText(1, ("                                                                                "));
		DelayText(1, ("1.Attack                                                                        "));
		DelayText(1, ("                                                                                "));
		cout << ">";
		cin >> userInput;
		switch (userInput)
		{
		case 1:
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
