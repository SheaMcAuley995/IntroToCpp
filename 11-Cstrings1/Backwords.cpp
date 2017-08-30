#include <iostream>
#include <cstring>
#include "Backwords.h"


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

bool isPalindorme(char string[])
{
	int i = 0;
	bool hasChar = false;
	int j = strlen(string)-1;

	do
	{
		while (!isAlpha(string[i]) && i < string[i] !=0 )i++;
		while (!isAlpha(string[j]) && j >= 0)j--;

		if (i == strlen(string) || j < 0)
			return hasChar;

		if (toLower(string[i]) != toLower(string[j]))
			return false;

		i++;
		j--;
	} while (j >= 0);

	return true;
}

void RunBackwords()
{
	char buffer[80];
	std::cin.getline(buffer, 80);
	std::cout << isPalindorme(buffer) << std::endl;
	system("pause");

}


