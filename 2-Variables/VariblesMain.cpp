// Problem A
/* // main.cpp/main()
// ...

// A)
int number = 5;

number = 9;
number = 11;
number = 14;

std::cout << "A) " << number << std::endl;

Output will be : A) 14
// ...

*/

// Problem B
/*
// main.cpp/main()
// ...

// B)
int number = 10;
number = 9;

int thing = 55;
thing = 22;

std::cout << "B) " << number << std::endl;

Output will be : B) 9
// ...
*/

// Problem C
/*
// main.cpp/main()
// ...

// C)
int number = 3;
number = 7;
number = 1;

int something = 23;
something = 21;

number = something;

std::cout << "C) " << number << std::endl;

Output will be : C) 21

// ...

*/

// Problem D 
/*
// main.cpp/main()
// ...

// D)
int number = 1;
int something = 3;

number = something;

std::cout << "D) " << something << std::endl;

Output will be : D) 3
// ...

*/

// Problem E
/*
// main.cpp/main()
// ...

// E)
int x = 13;

x = x / 2;

std::cout << "E) " << x << std::endl;

Output will be :E) 6
// ...

*/

// Problem F
/*
// main.cpp/main()
// ...

// F)
float x = 13;

x = x / 2;

std::cout << "F)" << x << std::endl;

Output will be F)6.5
// ...

*/

#include<iostream>
using namespace std;

int main()
{
	// initialization 

	// Addition with int
	int n = 0;
	int age = 15;
	int x = 5;
	int y = 10;
	int z;
	
	// Addition with float
	float a = 5.3;
	float b = 2.5;
	float c;
	
	//User input
	int Userinput;
	
	// F to C conversion
	float UserinF;
	float Celcius;

	//Rectangle Area
	float Width = 0.0f;
	float Height = 0.0f;
	float Area = 0.0f;

	//Average of five
	float numA, numB, numC, numD, numE;
	float avg;
	avg = numA = numB = numC = numD = numE = 0.0f;

	

	// Initial "Age" program
	cout << "Age :" << age << endl << endl;

	// Changing the "Age" integer using the previous 0 to 5 program in a loop 10 times

	age = 1;

	while (age <= 22)
	{
		cout << "I am now " << age << " years old!" << endl;
		age++;
	}
	cout << "\nThey grow up so fast!\n" << endl;

	// addition program

	// Int
	z = x + y;
	cout << "Int Number with whole numbers :" << z << endl;

	x = 0.5;
	y = 2.5;
	z = x + y;
	cout << "Int Number with decimals :" << z << endl;

	// Float
	c = a + b;
	cout << "Float Number with decimals :" << c << endl;

	a = 3;
	b = 7;
	c = a + b;
	cout << "Float Number with whole numbers :" << c << endl;

	// User Input

	cout << "\nEnter literally any whole number and \nI'll show you that number on the screen :";
	cin >> Userinput;
	cout << "The number you entered was :" <<Userinput << endl;
	
	// Fahrenheit to Celcius conversion
	cout << "\nHow hot is it outside in fahrenheit? :";
	cin >> UserinF;
	UserinF = UserinF - 32;
	UserinF = UserinF * 5;
	UserinF = UserinF / 9;
	Celcius = UserinF;
	cout << "It is :" << Celcius << "C degrees outside!" << endl;

	// Rectangle conversion
	cout << "\nPlease enter the width and height of the rectangle below\n\nWidth :";
	cin >> Width;
	cout << "\nHeight :";
	cin >> Height;
	Area = Width * Height;

	cout << "\nThe area the the rectrangle is :" << Area << endl;

	// Average of Five
	cout << "\nPlease enter a total of 5 numbers so an average may be provided\n\n";

	cout << "\n1:";
	cin >> numA;
	cout << "\n2:";
	cin >> numB;
	cout << "\n3:";
	cin >> numC;
	cout << "\n4:";
	cin >> numD;
	cout << "\n5:";
	cin >> numE;

	avg = (numA + numB + numC + numD + numE) / 5;

	cout << "\nThe average of these numbers is :" << avg << endl;

	// Numberswap
	int Num1 = 13;
	int Num2 = 24;
	int swap = 0;

	swap = Num1;
	Num1 = Num2;
	Num2 = swap;

	cout << "Num 1 :" << Num1 << endl;
	cout << "Num 2 :" << Num2 << endl;

	// Fun facts for your age
	age = 22;

	cout << "Shea McAuley is " << age << " years old." << endl;
	cout << "Which means he is " << age * 12 << "Months old\n" << "Aprox :" << age * 365 << " Days old\n" << "and :" << age * 31536000 << " Seconds old\n";


	system("pause");
	return 0;
}


