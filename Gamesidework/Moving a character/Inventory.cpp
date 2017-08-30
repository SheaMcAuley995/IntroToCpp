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


void showInv(Items inv)
{
	DelayText(1, ("                               Inventory                                        "));
	DelayText(1, ("________________________________________________________________________________"));
	cout << "Cash $" << inv.playerCash << endl;
	if (inv.dagger > 0)
	{
		cout << inv.dagger << " Dagger" << endl;
		if (inv.dagger > 1)
		{
			cout << "s";
		}
		cout << endl;
	}
	if (inv.shortSword > 0)
	{
		cout << inv.shortSword << " Short Sword" << endl;
		if (inv.shortSword > 1)
		{
			cout << "s";
		}
		cout << endl;
	}
	if (inv.Battleaxe > 0)
	{

		cout << inv.Battleaxe << " Battleaxe";
		if (inv.Battleaxe > 1)
		{
			cout << "s";
		}
		cout << endl;
	}
	if (inv.Claymore > 0)
	{

		cout << inv.Claymore << " Claymore";
		if (inv.Claymore > 1)
		{
			cout << "s";
		}
		cout << endl;
	}
	if (inv.Leather > 0)
	{

		cout << inv.Leather << " Leather armor";
		if (inv.Leather > 1)
		{
			cout << "s";
		}
		cout << endl;
	}
	if (inv.Bottlecap > 0)
	{

		cout << inv.Bottlecap << " Bottlecap armor";
		if (inv.Battleaxe > 1)
		{
			cout << "s";
		}
		cout << endl;
	}
	if (inv.SleetSheet > 0)
	{

		cout << inv.SleetSheet << " Sleet Sheet armor";
		if (inv.SleetSheet > 1)
		{
			cout << "s";
		}
		cout << endl;
	}

	system("pause");
	system("CLS");
}