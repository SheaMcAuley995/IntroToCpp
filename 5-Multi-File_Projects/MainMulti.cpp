#include<iostream>
#include"mathutils.h"
#include"dtgreet.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	// Creating More Files
	cout << "//Creating more Files\n" << endl;
	cout << min(50, 100) << endl;
	cout << max(50, 100) << endl;
	cout << clamp(50, 100, 65) << endl;
	cout << dist(50, 50, 100, 100) << endl;
	//Date and Time Greetings
	cout << "\n//Date and Time Greeting\n" << endl;
	dayGreeting(5, 1, 1995);
	timeGreeting(12, 30);
	isLeapYear(1984);
	//Random Number Generators
	cout << "\n//Random Number Generator\n" << endl;

	

	system("pause");
	return 0;
}