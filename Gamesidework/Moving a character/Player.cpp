#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 

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


void setPlayerStats(PlayervMonster &fight)
{
	
	srand(time(NULL));
	int screwupcount = 0;
	cout << "Hey there big guy! you look you are ready for THE ARENA. \nFULL OF GLORY AND WONDER!" << endl;
	
	cout << "\nHow would you describe your fightiness level?" << endl;
	cout << "Stat points left :" << fight.statLock << endl;
	cout << "\nStrength  vaule >";
	while (fight.statLock < 0 || fight.statLock !=0)
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
		
		screwupcount = 0;
		cout << "\nHow well can you dodgy dodge?" << endl;
		cout << "Stat points left :" << fight.statLock << endl;
		cout << "\nAgility vaule >";
		
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
		cout << "Stat points left :" << fight.statLock << endl << endl;
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

void playerWeapon(PlayervMonster &fight)
{
	
	
	int userInput;
	cout << "Oh wow look at that there are weapons just laying on the floor in front of you" << endl;
	cout << "1.Dagger\n2.Shortsword\n3.Battleaxe\n>";
	cin >> userInput;
	switch (userInput)
	{
	case 1:
		//srand(time(NULL));
		//fight.weapon = (rand() % 4 + 1) + fight.playerSTR;
		fight.playerwepdmg = 4;
		fight.playerATT = 6;
		break;
	case 2:
		//srand(time(NULL));
		fight.playerwepdmg = 6;
		fight.playerATT = 3;
		break;
	case 3:
		//srand(time(NULL));
		fight.playerwepdmg = 12;
		break;
	}
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
	fight.playerAGscore = (fight.playerAG / 2) - 2;
	fight.playerSTRscore= (fight.playerSTR / 2) - 2;
	fight.playerCONscore = (fight.playerCON / 2) - 2;
	fight.playerHP = ((rand() % 12 + 8) + fight.playerCONscore);

	cout << "Player Strength :" << fight.playerSTRscore << endl;
	cout << "Player agility :" << fight.playerAGscore << endl;
	cout << "Player Constitution :" << fight.playerCONscore << endl;
	cout << "Your health is :" << fight.playerHP << endl;
}

void tester(PlayervMonster fight)
{ 
	for(int i = 0; i < 20; i++)
	{
		
		cout << GenerateDamge(fight) << endl;
	}
}
