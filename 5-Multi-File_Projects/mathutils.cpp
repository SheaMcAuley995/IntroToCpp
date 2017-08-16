#include<iostream>
#include<math.h>
#include"mathutils.h"
using std::cout;
using std::endl;
using std::cin;


int min(int a, int b)
{
	int c;
	if (a < b)
	{
		c = a;
	}
	else if (b < a)
	{
		c = b;
	}
	return c;
}
int max(int a, int b)
{
	int c;
	if (a > b)
	{
		c = a;
	}
	else if (b > a)
	{
		c = b;
	}
	return c;
}
int clamp(int lower, int upper, int value)
{
	if (value >= lower && value <= upper)
	{
	}
	else if (value < lower)
	{
		value = lower;

	}
	else if (value > upper)
	{
		value = upper;

	}
	return value;
}
float dist(float x1, float y1, float x2, float y2)
{
	int d;
	d = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));;
	return  d;
}