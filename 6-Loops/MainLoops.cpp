//Walkthrough
/*  int zero = 0;
int UserInput;*/
//	/*while (zero == 0)
//	{
//		cout << "Infinity " << endl;
//	}*/
//
//	/*while (zero < 9)
//	{
//		cout << "Waiting for 9" << endl;
//		zero++;
//	}*/
//
//	for (int i = 0; i < 9; i++)
//	{
//		cout << "Waiting for 9" << endl;
//	}
//
//	do 
//	{
//		cout << zero + 1 << endl;
//		zero++;
//	} while (zero < 9);
//
//	/*do
//	{
//		cout << "Enter a number between 0 and 10 :";
//		cin >> UserInput;
//	} while (UserInput <= 0 || UserInput >= 10);
//*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using std::cout;
using std::cin;
using std::endl;

// From 1 to 100
void AcendingOrder()
{
	for (int i = 0; i < 100; i++)
	{
		cout << i + 1 << endl;
	}
}
// From 100 to 1
void Decending()
{
	int x = 100;
	while (x > 0)
	{
		cout << x << endl;
		x--;
	}
}
//From 1995 to 2017
void YearsAcending()
{
	int x;
	x = 1995;
	do
	{
		cout << x << endl;
		x++;
	} while (x < 2018);

}
//Your Three Positive Numbers
void FavNumber()
{
	int num1;
	int num2;
	int num3;

	cout << "Howdy! What are your favorite positive numbers? Please anser one at a time." << endl;
	cout << "What is the first number?\n>";
	cin >> num1;
	while (num1 < 0)
	{
		cout << "That doesn't look like a positive number" << endl;
		cout << "\n>";
		cin >> num1;

	}
	cout << "Okay your first number is " << num1 << "." << endl;
	cout << "What's your second number?\n";
	cin >> num2;
	while (num2 < 0)
	{
		cout << "That doesn't look like a positive number" << endl;
		cout << "\n>";
		cin >> num2;

	}

	cout << "Okay, your favorites have been " << num1 << " and " << num2 << "." << endl;
	cout << "What's your third number?\n";
	cin >> num3;
	while (num3 < 0)
	{
		cout << "That doesn't look like a positive number" << endl;
		cout << "\n>";
		cin >> num3;

	}

	cout << "Okay, your favorite numbers are " << num1 << ", " << num2 << ", and " << num3 << "." << endl;

}
//From X to Y
void PrintXY(int x, int y)
{
	while (x <= y)
	{
		cout << x << endl;
		x++;
	}
}
//Largest of Any Number of Numbers
int PromptLargest(int qtyRequested)
{
	int largest = 0;
	int usernum = 0;
	while (qtyRequested > 0)
	{
		cout << ">";
		cin >> usernum;
		if (usernum > largest)
		{
			largest = usernum;
		}
		qtyRequested--;
	}
	return largest;
}
//Smallest of Any number of numbers
int PromptSmallest(int qtyRequested)
{
	int smallest = 0;
	int usernum = 0;
	cout << ">";
	cin >> usernum;
	smallest = usernum;
	while (qtyRequested > 1)
	{
		cout << ">";
		cin >> usernum;
		if (usernum < smallest)
		{
			smallest = usernum;
		}
		qtyRequested--;
	}
	cout << smallest << endl;
	return smallest;
}
//Even or Odd 2:Electric boogaloo
int  EvenOrOdd(int start, int end)
{
	int x;
	
	while (start <= end)
	{
		x = start;
		x %= 2;
		if (x == 0)
		{
			cout << "Even" << endl;
		}
		else if (x == 1)
		{
			cout << "Odd" << endl;
		}
		start++;
	}
	return 0;
}
//Fizz Buzz
void fizzBuzz(int start, int end)
{
	int x;
	int y;
	while (start <= end)
	{
		x = start;
		y = start;
		x %= 3;
		y %= 5;

		if (x == 0 && y == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (y == 0)
		{
			cout << "Buzz" << endl;
		}
		else if (x == 0)
		{
			cout << "Fizz" << endl;
		}
		else
		{
			cout << start << endl;
		}
		start++;
	}
}
//Grid Generator
void gridGen(int width, int height)
{
	
	for (int i = 0; i < height; i++)
	{
		for (int i = 0; i < width; i++)
		{
			cout << "X";
		}
		cout << endl;
	}

}
// Higher or Lower
void guessTheNumber(int lower, int upper, int tryCount)
{
	int guesscount = 1;
	int guess = 0;
	int r;
	srand(time(NULL));
	r = rand() % upper + lower;
	cout << "Hey there! I'm going to generate a number between " << lower << " and " << upper << ". You have " << tryCount << " tries to guess it!" << endl;
	for (int i = 0; i < tryCount; i++)
	{
		while (guess != r)
		{
			cout << "Round " << guesscount << " - Make your guess\n>";
			cin >> guess;
			guesscount++;
			break;
		}
		
	}
	if (guess == r)
	{
		cout << "You guessed the number!" << endl;
	}
	else if (guess != r)
	{
		cout << "You did not guess the number!" << endl;
	}
	else
	{
		cout << "Something went wrong" << endl;
	}

}
//Fibonacci Sequence
//Not working
void FibonacciSequence(int qtyRequested)
{
	int x = 1;
	int num1 = 0;
	int num2 = 1;

	for (int i = 0; qtyRequested > i; i++)
	{

		x = num1 + num2;
		num1 = num2;
		num2 = x;
		cout << x << endl;
	
		
		
	}

}

int main()
{
	/*AcendingOrder();
	Decending();
	YearsAcending();
	FavNumber();*/
	//PrintXY(1, 10);
	//PromptLargest(3);
	//PromptSmallest(5);
	//EvenOrOdd(2, 4);
	//fizzBuzz(13, 18);
	//gridGen(6, 3);
	//guessTheNumber(1, 10, 5);
	//FibonacciSequence(9);

	system("pause");
	return 0;
}
