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
	int num3 = 0;
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
		if (age >= 65)
		{
			cout << "You are also also eligible for retirement benefits";
		}
	}

	// The Lesser of two numbers
	bool IsEnteredCorrectly = false;
	cout << "\nPretty please enter three numbers so I can tell you which one is smaller\n";
	num = 0;
	num2 = 0;
	while (IsEnteredCorrectly == false)
	{
		
		cout << "Number 1:";
		cin >> num;
		cout << "\nNumber 2:";
		cin >> num2;
		cout << "\nNumber 3:";
		cin >> num3;

		if (num < num2 && num < num3)
		{
			cout << "The smallest number is :" << num;
			IsEnteredCorrectly = true;
			
		}
		else if (num2 < num && num2 < num3)
		{
			cout << "The smallest number is :" << num2;
			IsEnteredCorrectly = true;

		}
		else if (num3 < num2 && num3 < num)
		{
			cout << "The smallest number is :" << num3;
			IsEnteredCorrectly = true;
		}
		else
		{
			cout << "Something has gone wrong please try again" << endl;
		}
	}

	
	/*
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
	}*/
	// Even or Odd
	num = 0;
	cout << "\n\nOk so I think I can tell you if a number is even or if its odd. Give me a good number :";
	cin >> num;
	num %= 2;
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
	//Input Validation
	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.
	int cookies;
	int cookiesremainder = 0;
	cout << "Enter how many cookies you would like to order! Remember only in multiples of 23! :";
	cin >> cookies;
	cookiesremainder %= 23;
	cookies /= 23;
	if (cookies != 0)
	{
		cout << "You ordered " << cookies << " Boxes of cookies" << endl;
		cout << "With a remainder of :" << cookies;
	}
	else
	{
		cout << "You wronged me..";
	}

	// Field:       Purchase Order for Sketchbooks (3pk)
	// Constraints: Must order at least 9 sketchbooks total.
	//              The total may not exceed 30 sketchbooks ordered.
	//
	//              If the total number of sketchbooks ordered does not meet
	//              the minimum order count or exceeds the maximum order count,
	//              provide an error message.

	int Sketchorders;
	int SketchRemainder = 0;
	cout << "Please tell me how many sketchbooks you'd like to order :";
	cin >> Sketchorders;
	if (Sketchorders >= 9 && Sketchorders <= 30)
	{
		Sketchorders /= 3;
		SketchRemainder %= 3;
		cout << "You order a total of " << Sketchorders << " Packs " << endl;
		cout << "With a remainder of " << SketchRemainder << " Books " << endl;
	}
	else
	{
		cout << "Wrooooong" << endl;
	}

	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.

	// Field:       Texture Size
	// Constraints: Round to the nearest power of two. Only whole numbers.
	//              (hmm, maybe this one isn’t quite doable yet. oops!) :P
	//              If nearest power is zero, provide an error message.

	// ...
	

	char MotionBlur;

	cout << "Please enter y or n to enable or disable motion blur :";
	cin >> MotionBlur;

	if (MotionBlur == 'y')
	{
		cout << "Motion Blur enabled!" << endl;
	}
	else if (MotionBlur == 'n')
	{
		cout << "Motion Blur Disabled" << endl;
	}

	num = 0;
	num2 = 0;
	num3 = 0;
	char BinOp;

	cout << "Please enter two numbers and a binary operator \n1:";
	cin >> num;
	cout << "\n2:";
	num2 >> num2;
	cout << "\nBinary operator :";
	cin >> BinOp;

	if (BinOp == '+')
	{
		num3 = num + num2;
		cout << num << " + " << num2 << " = " << num3;
	}
	else if (BinOp == '*')
	{
		num3 = num * num2;
		cout << num << " * " << num2 << " = " << num3;
	}
	else if (BinOp == '-')
	{
		num3 = num - num2;
		cout << num << " - " << num2 << " = " << num3;
	}
	else if (BinOp == '/')
	{
		num3 = num / num2;
		cout << num << " / " << num2 << " = " << num3;
	}
	else
	{
		cout << "You entered something wrong";
	}
	

	// DINOFIGHT
	int UserSTR;
	int UserWEP = 0;
	int UserXP;
	char UserSL;
	int UserVC;
	int userpoints = 0;

	cout << "You were talking a nice walk through the woods whe- OH GOD IS THAT A \nBABY DINOSAUR HOW ARE YOU GOING TO FAIR AGAINST THE BEAST?!" << endl;
	cout << "DO TELL HOW MUCH STRONG DO YOU HAVE ON A SCALE FROM 1 TO 10? :";
	cin >> UserSTR;
	if (UserSTR > 4)
	{
		cout << "YOU MIGHT JUST HAVE ENOUGH MUSCLE JUICE TO DO IT BUT WAIT THERE'S MORE!" << endl;
		userpoints += 1;
	}
	cout << "LOOK IN THY HANDS FOR THERE IS A WEAPON OF MASS... MASS.. what is that? " << endl;
	cout << "\n1. A sack of potatoes?\n\n2. An invisibilty cape? \n\n3. THEMANGOBLADE" << endl;
	cin >> UserWEP;
	if (UserWEP == 1)
	{
		cout << "The dinosaurs invisibility cape is NO MATCH FOR YOUR SACK OF POTATOES!" << endl;
		userpoints += 1;
	}
	else if (UserWEP == 2)
	{
		cout << "You and the dinosaur both flail around helplessly trying to hit eachother with your invisibility capes on" << endl;
	}
	else if (UserWEP == 3)
	{
		cout << "YOU HAVE THE MANGO BLADE but can't land a hit due to the fact that the dinosaur IS INVISIBLE DUE TO HIS ALL MIGHT INVISIBILITY CAPE" << endl;
		cout << "You decide to eat the blade instead" << endl;
		cout << "^*+1 Healthy snack intake*^" << endl;
	}

	cout << "You look like you might know your way around a fight do tell, \nhow many fights have you been in? :" << endl;
	cin >> UserXP;
	if (UserXP >= 2)
	{
		cout << "THe dino is NO MATCH for your fighting prowess" << endl;
		userpoints += 1;
	}
	else if (UserXP < 2)
	{
		cout << "OH MAN this dinosuar has been in a total of TWO fights. There is no way you can match his fighting prowess" << endl;
	}
	cout << "Woah hey there buddy there is no way that you are going into a dino fight \nwithout getting enough sleep the night before" << endl;
	cout << "\nDid you get enough sleep last night? y/n :";
	cin >> UserSL;
	if (UserSL == 'y')
	{
		cout << "Good on you! Sleep is very important when fighting a prehistoric creature!" << endl;
		userpoints += 1;
	}
	if (UserSL == 'n')
	{
		cout << "A good night's sleep is always important!\n You should have thought of the possibilities of getting into a DINOFIGHT last night when you weren't sleeping!";
	}
	cout << "There is no way you can go into a battle with SCURVEY. What is your daily Vitamin C intake every day in MG? :";
	cin >> UserVC;
	if (UserVC >= 75)
	{
		cout << "\nThat's enough to not get scruvey good for you!" << endl;
		userpoints += 1;
		if (UserWEP == 3)
		{
			cout << "With the combination of your healthy vitamin C intake and the MANGOBLAAADE you gain MANGOSTRENGTH" << endl;
			cout << "^*+1 MANGOSTRENGTH ^*" << endl;
		}
	}
	if (userpoints >= 3)
	{
		cout << "The dino lays there in a pile of bloody dino goo.. You really went overboard on that one!" << endl;
	}
	else if (userpoints < 3)
	{
		cout << "You died.. You were not ready to fight this baby dino.." << endl;
	}

	system("pause");
	return 0;
}