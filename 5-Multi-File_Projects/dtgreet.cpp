#include<iostream>
#include"dtgreet.h"
using std::cout;
using std::endl;
using std::cin;

void dayGreeting(int day, int month, int year)
{
	if (day >= 1 && day <= 30 && month >= 1 && month <= 12 && year >= 1)
	{
		cout << "Day:" << day << "\nMonth:" << month << "\nYear:" << year << endl;
		cout << "Date :" << month << "/ " << day << "/ " << year << endl;
	}
	else
	{
		cout << "Date was entered wrong" <<endl;
	}
}
void timeGreeting(int hour, int minutes)
{
	if (hour <= 1 && hour >= 12 && minutes >= 1 && minutes <= 59)
	{
		cout << "Greetings!\nThe time is " << hour << ":" << minutes << endl;
	}
	else
	{
		cout << "Time was entered wrong." << endl;
	}
}
void isLeapYear(int year)
{
	year %= 4;
	if (year == 0)
	{
		cout << "This year is a leap year!" << endl;
	}
	else
	{
		cout << "This is not a leap year!" << endl;
	}
}