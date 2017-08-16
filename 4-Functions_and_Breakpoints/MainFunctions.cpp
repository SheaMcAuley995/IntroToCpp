#include<iostream>
#include<math.h>

using namespace std;
/*
int sumOfTwoInts(int a, int b)
{
	return a + b;
}*/

// Fuction Prototypes



void PrintHelloFuntions()
{
	cout << "Hello Funtions" << endl;
}
int SqareFunction(int x)
{
	return x *= x;
}


// int variable;
// std::cout << value << std::endl;
float DecimalFunction(int x, int y)
{
	return x / y;
}

//Confusing function
/*
float DifferenceFunction(float x, float y, float z)
{
	float Difference;
	float dif1;
	float dif2;
	float dif3;
	
	dif1 = x - y;
	dif2 = x - z;
	dif3 = z - y;

	
}
*/
//Function Definitions
void PrintTwoNum(int x, int y)
{
	cout << x << "," << y << endl;
}
//sum of three
int SumOfThree(int x, int y, int z)
{
	return x + y + z;
}
// Min
int MinFuntion(int x, int y)
{
	int z;
	if (x < y)
	{
		z = x;
	}
	else if (x > y)
	{
		z = y;
	}
	return z;
}
// Max
int MaxFuntion(int x, int y)
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else if (x < y)
	{
		z = y;
	}
	return z;
}
// Clamp
int ClampFunction(int x, int y, int z)
{
	
	if (z >= x && z <= y)
	{
	}
	else if (z < x)
	{
		z = x;
		
	}
	else if (z > y)
	{
		z = y;
		
	}
	return z;
}
// Distance
float DistanceFunction(float x1, float y1, float x2, float y2)
{
	int d;
	d = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));;
	return  d;
}
//Estimated Time of arrival
float TimeArrivalFunction(float x1, float y1, float x2, float y2, float t)
{
	int d;
	d = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));;
	d = d / t;
	return  d;
}
int main()
{
	cout << ClampFunction(15, 30, 11);
	//cout << DistanceFunction(2,2,5,5) << endl;
	system("pause");
	return 0;
}
// Challenge 1

/*
float Challenge1(int x, int y, int z)
{
return (x + y) / z;
}
*/