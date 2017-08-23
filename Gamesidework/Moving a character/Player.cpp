#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 

using std::cout;
using std::cin;
using std::endl;

void playerStats(PlayervMonster &fight)
{
	srand(time(NULL));
	int r;
	r = rand() % 12 + 1;
	int screwupcount = 0;
	cout << "Hey there big guy! you look you are ready for THE ARENA. FULL OF GLORY AND WONDER!" << endl;
	cout << "Stat points left :" << fight.statLock;
	cout << "How would you describe your fightiness level? \nStrength  vaule >";
	while (fight.statLock != 0)
	{

		while (fight.playerSTR <= 0)
		{
			cin >> fight.playerSTR;
			if (fight.playerSTR < 0 && screwupcount == 0)
			{
				cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nStrength  vaule >";
				screwupcount++;
			}
			else if (fight.playerSTR < 0 && screwupcount > 0)
			{
				cout << "Agian.. Physically impossible, try again. \nStrength vaule >";
			}
		}
		fight.statLock -= fight.playerSTR;
		cout << "\nStat points left :" << fight.statLock;
		screwupcount = 0;
		cout << "\nHow well can you dodgy dodge?\nAgility vaule >";
		
		while (fight.playerAG <= 0)
		{
			cin >> fight.playerAG;
			if (fight.playerAG < 0 && screwupcount == 0)
			{
				cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nAgility vaule >";
				screwupcount++;
			}
			else if (fight.playerAG < 0 && screwupcount > 0)
			{
				cout << "Agian.. Physically impossible, try again. \nAgility vaule >";
			}
		}
		fight.statLock -= fight.playerAG;
		cout << "\nStat points left :" << fight.statLock;
		screwupcount = 0;
		cout << "\nWelcome to the salty splatoon how tough are ya?\nConstitution value >";

		while (fight.playerCON <= 0)
		{
			cin >> fight.playerCON;
			if (fight.playerCON < 0 && screwupcount == 0)
			{
				cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nAgility vaule >";
				screwupcount++;
			}
			else if (fight.playerCON < 0 && screwupcount > 0)
			{
				cout << "Agian.. Physically impossible, try again. \nAgility vaule >";
			}
		}
		fight.statLock -= fight.playerCON;
	}
	fight.playerHP = (rand()%12+1 + fight.playerCON);
	cout << "Your health is :" << fight.playerHP << endl;
	system("pause");

}

void playerWeapon(PlayervMonster fight)
{
	srand(time(NULL));
	
	int userInput;
	cout << "Oh wow look at that there are weapons just laying on the floor in front of you" << endl;
	cout << "1.Dagger\n2.Shortsword\n3.Battleaxe\n>";
	cin >> userInput;
	switch (userInput)
	{
	case 1:

		fight.weapon = (rand() % 4 + 1) + fight.playerSTR;
		break;
	case 2:
		fight.weapon = (rand() % 6 + 1) + fight.playerSTR;
		break;
	case 3:
		fight.weapon = (rand() % 12 + 1) + fight.playerSTR;

	}
}

void findMonster(PlayervMonster fight)
{
	srand(time(NULL));
	int rollMonster = rand() % 5;
	switch (rollMonster) {
	case 0:
		fight.monstername = "Rat";
		fight.monsterHP = 1;
		fight.monsterAP = rand()%2+1;
		fight.monsterDP = 0;
		break;
	case 1:
		fight.monstername = "Zombie";
		fight.monsterHP = 5;
		fight.monsterAP = rand()%4+1;
		fight.monsterDP = rand()%2;
		break;
	case 2:
		fight.monstername = "Turtle";
		fight.monsterHP = 3;
		fight.monsterAP = rand()%1;
		fight.monsterDP = rand()%5+1;
		break;
	case 3:
		fight.monstername = "Human Fighter";
		fight.monsterHP = 6;
		fight.monsterAP = rand()%4+2;
		fight.monsterDP = rand()%3;
		break;
	case 4:
		fight.monstername = "Random Blob monster";
		fight.monsterHP = rand()%8;
		fight.monsterAP = rand()%8;
		fight.monsterDP = rand()%4;
		break;
	}
	
	
}

void displayStats(PlayervMonster fight) 
{
	cout << "Your health is :" << fight.playerHP << endl;
	system("pause");
}

void monsterFight(PlayervMonster fight)
{
	bool isAlive = true;
	while (isAlive == true)
	{
		fight.playerHP -= (fight.monsterAP - fight.playerAG);
		if (fight.playerHP <= 0)
		{
			isAlive = false;
		}
		cout << "The monster hit you! You are now at :" << fight.playerHP;
		system("pause");

		fight.monsterHP -= (fight.weapon - fight.monsterDP);
		if (fight.monsterHP <= 0)
		{
			isAlive = false;
		}
		cout << "You hit the monster! the monster is now at :" << fight.monsterHP;
		system("pause");
	}
	if (fight.playerHP < 0 && fight.monsterHP < 0)
	{
		cout << "It is a tie!" << endl;
	}
	else if (fight.playerHP < 0)
	{
		cout << "Zombie wins!" << endl;
	}
	else if (fight.monsterHP < 0)
	{
		cout << "Player wins!" << endl;
	}
	system("pause");
}
