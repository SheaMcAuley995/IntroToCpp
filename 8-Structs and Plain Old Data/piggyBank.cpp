#include <iostream>
#include "piggyBank.h"
using std::cout;
using std::endl;
using std::cin;


float calcPiggybankNotes(piggybank piggy)
{
	float totalDollars = 0;

	cout << "dollar amount:\n$1:" << piggy.dollarOne;
	cout << "\n$2:" << piggy.dollarTwo;
	cout << "\n$5 :" << piggy.dollarFive << endl;

	totalDollars += piggy.dollarFive * 5;
	totalDollars += piggy.dollarOne;
	totalDollars += piggy.dollarTwo * 2;

	return totalDollars;
}


float calcPiggybankCoins(piggybank piggy)
{
	float totalCoins = 0;
	cout << "Cent amount:\n1¢:" << piggy.coinPennies;
	cout << "\n5¢:" << piggy.coinNickle;
	cout << "\n10¢:" << piggy.coinDime;
	cout << "\n25¢:" << piggy.coinQuarter;

	totalCoins += piggy.coinDime*0.1f;
	totalCoins += piggy.coinNickle*0.05f;
	totalCoins += piggy.coinPennies*0.01f;
	totalCoins += piggy.coinQuarter*0.25f;
	return totalCoins;
}

float calcPiggybankTotal(piggybank piggy)
{
	float total = 0;

	total += piggy.coinDime*0.1f;
	total += piggy.coinNickle*0.05f;
	total += piggy.coinPennies*0.01f;
	total += piggy.coinQuarter*0.25f;
	total += piggy.dollarFive * 5;
	total += piggy.dollarOne;
	total += piggy.dollarTwo * 2;

	return total;
}