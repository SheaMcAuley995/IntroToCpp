#include <iostream>
#include <cstring>
#include "Piglatin.h"


bool isAlpha(char query)
{
	return query >= 'A' && query <= 'Z' ||
		query >= 'a' && query <= 'z';
}

char toLower(char query)
{
	if (query >= 'A' && query <= 'Z')

		query += 'a' - 'A';
	return query;
}


void changePigLatin(char string[])
{
	int i = 0;
	int j = strlen(string) - 1;

	if (toLower(string[i]) == 'a', 'e','i','o','u')
	{
		string[j + 1] = 'a';
		string[j + 2] = 'y';
		strlen(string) + 2;
	}

	else if (toLower(string[i]) == 's' && toLower(string[i + 1] == 'h'))
	{
		string[i + 1] = 32;
		string[j + 1] = 'h';
		string[j + 2] = 'a';
		string[j + 3] = 'y';
		strlen(string) + 2;
	}
	else if (toLower(string[i]) == 'c' && toLower(string[i + 1] == 'h'))
	{
		string[i + 1] = 32;
		string[j + 1] = 'h';
		string[j + 2] = 'a';
		string[j + 3] = 'y';
		strlen(string) + 3;
	}
	else if (toLower(string[i]) == 's' && toLower(string[i + 1] == 'm'))
	{
		string[i + 1] = 32;
		string[j + 1] = 'm';
		string[j + 2] = 'a';
		string[j + 3] = 'y';
		strlen(string) + 3;
	}
	else if (toLower(string[i]) == 's' && toLower(string[i + 1] == 't'))
	{
		string[i + 1] = 32;
		string[j + 1] = 't';
		string[j + 2] = 'a';
		string[j + 3] = 'y';
		strlen(string) + 3;
	}
	else if (toLower(string[i]) == 't' && toLower(string[i + 1] == 'h'))
	{
		string[i + 1] = 32;
		string[j + 1] = 'h';
		string[j + 2] = 'a';
		string[j + 3] = 'y';
		strlen(string) + 3;
	}
	else 	
	{
		string[j + 1] = 'a';
		strlen(string) + 1;
	}
	string[j] = string[i];
	string[i] = ' ';


}


char RunPigLatin(int i)
{
	char buffer[80];
	std::cin.getline(buffer, 80);
	changePigLatin(buffer);
	
	system("pause");
	return
}