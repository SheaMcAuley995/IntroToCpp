#include "Player.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void zombieFight(PlayervZombie fight)
{
	bool isAlive = true;
	while (isAlive == true)
	{
		fight.playerHP -=(fight.zombieAP - fight.playerDP);
		if (fight.playerHP < 0)
		{
			isAlive = false;
		}
		fight.zombieHP -=(fight.playerAP - fight.zombieDP);
		if (fight.zombieHP < 0)
		{
			isAlive = false;
		}
		cout << "HUMAN HP  :" << fight.playerHP << endl;
		cout << "Zombie HP :" << fight.zombieHP << endl;
	}
	if (fight.playerHP < 0 && fight.zombieHP < 0)
	{
		cout << "It is a tie!" << endl;
	}
	else if (fight.playerHP < 0)
	{
		cout << "Zombie wins!" << endl;
	}
	else if (fight.zombieHP < 0)
	{
		cout << "Player wins!" << endl;
	}
}
