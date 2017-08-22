#include <iostream>
#include<stdio.h>
using std::cout;
using std::cin;
using std::endl;
//void printNumbers(int nums[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << nums[i] << std::endl;
//	}
//}
//
//int main()
//{
//	int values[]{ 1, 3, 5, 7, 9 };
//
//	// print the numbers!
//	printNumbers(values, 5);
//
//	system("pause");
//	return 0;
//}

void printNumbers(int numbers[], int size)
{
	for (int i = 0; i < size; ++i)
			{
				cout << numbers[i] << endl;
			}
}

void sumNumbers(int numbers[], int size)
{
	int sum=0;

	for (int i = 0; i < size; ++i)
	{
		sum += numbers[i];
	}
	cout << sum << endl;
}

int smallestValue(int numbers[], int size)
{
	int smallest;
	smallest = numbers[0];
	for (int i = 0; i < size; ++i)
	{
		if (smallest > numbers[i])
		{
			smallest = numbers[i];
		}
	}
	cout << smallest << endl;
	return smallest;
}

int largestValue(int numbers[], int size)
{
	int Largest;
	Largest = numbers[0];
	for (int i = 0; i < size; ++i)
	{
		if (Largest < numbers[i])
		{
			Largest = numbers[i];
		}
	}
	cout << Largest << endl;
	return Largest;
}

int findIndex(int numbers[], int size, int value)
{
	int index = -1;
	for (int i = 0; i < size; ++i)
	{	
		if (value == numbers[i])
		{
			
			index = i;
		}
	}
	cout << "Index #" << index << endl;
	return index;

}

bool arrayUniqueness(int numbers[], int size)
{
	bool match = true;
	int setnum = 0;
	for (int i = 0; i < size; i++)
	{
		
		for (int x=1; i+x < size; x++)
		{
			if (numbers[i] == numbers[i + x])
			{
				match = false;
			}
		}


	}
	
	return match;
}


void reverseNumbers(int numbers[], int size)
{
	int swapnum;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				swapnum = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = swapnum;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << endl;
	}
}

void DescendingNumbers(int numbers[], int size)
{
	int swapnum;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (numbers[j] < numbers[j + 1])
			{
				swapnum = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = swapnum;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
	cout << numbers[i] << endl;
	}
}

void AcendingNumbers(int numbers[], int size)
{
	int swapnum;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				swapnum = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = swapnum;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << endl;
	}
}

void insertionSort(int numbers[], int size)
{
	// Mainly from the internet
	int i;
	int j;
	int x;

	for (i = 1; i < size; i++)
	{
		x = numbers[i];
		j = i - 1;
		
		while (j >= 0 && numbers[j] > x)
		{
			numbers[j + 1] = numbers[j];
			j = j - 1;
		}
		numbers[j + 1] = x;
	}
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << endl;
	}
}

int main()
{
	//Print an array of numbers.
	int values[]{ 2,21,43,76,10,3};
	//printNumbers(values, 4);
	//sumNumbers(values, 4);
	//smallestValue(values, 6);
	//largestValue(values, 6);
	//findIndex(values, 6, 15);
	//cout << arrayUniqueness(values, 6) << endl;
	//reverseNumbers(values, 6);
	DescendingNumbers(values, 6);
	//insertionSort(values, 6);
	system("pause");
	return 0;
}