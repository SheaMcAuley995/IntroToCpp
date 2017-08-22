#include "Vector2D.h"
#include <math.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int vectorSum(positions spot)
{
	int sum = spot.PositionX + spot.PositionY;
	

	return sum;
}

int vectorDifference(positions spot)
{
	int difference = (spot.PositionX + spot.PositionY) - (spot.PositionX2 + spot.PositionY2);
	return difference;
}

int vectorDistance(positions spot)
{
	int d;
	d = sqrt(((spot.PositionX2 - spot.PositionX)*(spot.PositionX2 - spot.PositionX)) + ((spot.PositionY2 - spot.PositionY)*(spot.PositionY2 - spot.PositionY)));;
	return  d;
	
}


