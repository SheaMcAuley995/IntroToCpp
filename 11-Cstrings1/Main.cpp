#include <iostream>
#include <cstring>
#include "Backwords.h"
#include "Piglatin.h"

using std::cout;
using std::cin;
using std::endl;



int main() 
{
	
	/*char name[50] = {};
	
	cout << "Name \n>";
	cin >> name;
	cout << "Hello " << name << "!" << endl;
	*/
	/*char color[50] = {};
	cout << "What is your favorite color? \n>";
	cin >> color;
	if (strcmp(color, "orange") == 0)
	{
		cout << "Orange is also a fruit";
	}
	else if (strcmp(color, "red") == 0)
	{
		cout << "Red? Like the color of roses?" << endl;
	}
	else
	{
		cout << "I've never heard of that color before " << endl;
	}*/


	//char input[80];

	//cout << "3. Input a line with whitespace \n>";
	//cin.ignore(80, '\n');
	//cin.getline(input, 80);

	//char buffer[80] = {80}


	//RunBackwords();
	RunPigLatin();


	system("pause");
	return 0;
}