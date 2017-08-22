#include <iostream>
#include "piggyBank.h"
#include "studentInfo.h"
#include "Player.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	piggybank cash;

	/*cash.coinDime = 15;
	cash.coinNickle = 24;
	cash.coinPennies = 101;
	cash.coinQuarter = 6;
	cash.dollarFive = 9;
	cash.dollarOne = 21;
	cash.dollarTwo = 1;
	
	cout << "$" << calcPiggybankTotal(cash) << endl;

	studinfo inf = {};
	Storeloop(inf);
	printStudentInfo(inf);
	cout << "test average :" << findTestAvg(inf) << endl;
	cout << "test medium  :" << findTestMed(inf) << endl;
	cout << "please enter the exam you would like to see how many people are in :" << findEnrolled(inf) << endl;
*/

	
	PlayervZombie stats{100, 5, 2, 200, 1, 0};
	//The zombie is actually healing the human 
	zombieFight(stats);


	system("pause");
	return 0;
}