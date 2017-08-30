#include "setColor.h"
#include<iostream>
#include<Windows.h>
#include<thread>
using namespace std;

void colorTextChange(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

void DelayText(int millisec, char word[])
{
	for (int i = 0; i < strlen(word); i++)
	{
		cout << word[i];
		Sleep(millisec);
	}
}
