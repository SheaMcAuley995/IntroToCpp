#include "Randnum.h"
#include<iostream>
#include<cstdlib>

int seedRng(int r)
{
	srand(r);
	return 0;
}

int rng()
{
	int r;
	r = rand() % 100 + 1;
	return r;
}

int rngRange(int x, int y)
{
	int r;
	r = rand() % y + x;
	return 0;
}

bool Rngb()
{
	int r;
	r = rand() % 2 + 1;
	if (r == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool rngbChance(int n)
{
	int r;
	r = rand() % 100 + 1;

	if (n <= r)
	{
		return true;
	}
	else
	{
		return false;
	}
}


