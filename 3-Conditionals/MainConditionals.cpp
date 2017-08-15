// Problem A
/*
#include <iostream>

int main()
{
int number = 15;

if(number > 10)
{
number = number * 2;
}

std::cout << number << std::endl;
}
Output will be : 30
*/

// Problem B
/*
#include <iostream>

int main()
{
int number = 15;

if(number < 15)
{
number = number * 3;
}

std::cout << number << std::endl;
}

output will be : 15
*/

//Problem C
/*
#include <iostream>

int main()
{
int number = 12;

if(number == 12)
{
number = number * 2;
}

std::cout << number << std::endl;
}
output will be : 24
*/

// problem D
/*

#include <iostream>

int main()
{
int number = 12;

if(number <= 12)
{
number = number * 0;
}

std::cout << number << std::endl;
}

output will be : 0
*/
//problem  E
/*

#include <iostream>

int main()
{
int number = 14;

if(number >= 12)
{
number *= 4;
}

std::cout << number << std::endl;
}

output will be : 56
*/
// problem F
/*
#include <iostream>

int main()
{
int number = 6;

if (number == 0)
{
number = 0;
}
else if (number > 10)
{
number = 1;
}

std::cout << number << std::endl;
}
output will be : 6
*/

// problem G
/*

#include <iostream>

int main()
{
int number = 6;

if (number < 0)
{
number = 0;
}
else if (number < 2)
{
number = 1;
}
else if (number < 5)
{
number = 2;
}
else
{
number = 3;
}
std::cout << number << std::endl;
}
output will be : 3
*/

// Challenge A
/*
int number = 23;
int val = number >= 20 ? number : number *=5;
*/
// Challenge B
/*
int number = 6;
int val = number < 20 ? number - 5 : number / 2;
*/
// Challenge C
/*
int number = 6;
int val = number < 35 ? 0 : 1;
val = number < 60 ? val : 2;
val = number < 70 ? val : 3;
*/
#include<iostream>
using namespace std;

int main()
{
	
	int num = 0;
	int num2 = 0;
	int age = 0;


	cout << "Please please PLEASE enter the number 0 :";
	cin >> num;
	if (num == 0)
	{
		cout << "Num is 0!" << endl;
	}
	else if (num != 0)
	{
		cout << "The number is not 0..";
	}
	
	// Number Judging

	cout << "I need a number between 1 and 100 don't fail me :";
	cin >> num;
	if (num >= 1 && num <= 100)
	{
		if (num > 50)
		{
			cout << num << "? huh? that's a big number" << endl;
		}
		else if (num < 50)
		{
			cout << num << "? huh? that's a small number" << endl;
		}
		else if (num == 50)
		{
			cout << num << "? huh? that's a balanced number" << endl;
		}
		else
		{
			cout << num << "?! That's not what I asked for...";
		}
	}

	// Age gate
	age = 0;

	cout << "Now I really need you to please enter your age below \nAge :";
	cin >> age;

	if (age < 18)
	{
		cout << "You are a minor!";
	}
	else if (age >= 18)
	{
		cout << "You are an adult!\n";
		if (age >= 50)
		{
			cout << "You are also eligible to join AARP!\n";
		}
	}

	// The Lesser of two numbers
	cout << "\nPretty please enter two numbers so I can tell you which one is smaller\nNumber 1:";
	num = 0;
	num2 = 0;
	cin >> num;
	cout << "\nNumber 2:";
	cin >> num2;
	
	if (num < num2)
	{
		cout << "The smallest number is :" <<num;
	}
	else if (num2 < num)
	{
		cout << "The smallest number is :"<<num2;
	}
	else if (num == num2)
	{
		cout << "How am I supposed to work with this?" << endl;
	}
	// Even or Odd
	num = 0;
	cout << "\n\nOk so I think I can tell you if a number is even or if its odd. Give me a good number :";
	cin >> num;
	num % 2;
	if (num == 0)
	{
		cout << "EVEN!";
	}
	else
	{
		cout << "ODD!";
	}
	
	//Clamp the Number

	num = 0;

	cout << "\n Now I need a number between 15 and 30\n Number:";
	cin >> num;
	if (num < 15)
	{
		num = 15;
		cout << num;
	}
	else if (num >= 15 && num <= 30)
	{
		cout << num;
	}
	else if (num > 30)
	{
		num = 30;
		cout << num;
	}
	cout << "\n\n";


	system("pause");
	return 0;
}