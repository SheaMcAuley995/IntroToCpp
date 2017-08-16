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
	return rand() % 1;
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


