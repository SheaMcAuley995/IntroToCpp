/* Not offical game project
Will be working on orginization
*/
#include <iostream>
using std::endl;
using std::cout;
using std::cin;

void MoveOn()
{
	system("Pause");
	system("CLS");
}

int main()
{
	int choiceInt;
	char ChoiceChar;

	cout << "Woah where are we?\nThe area around you is a thick jungle. There is a path leading north\nIt smells like bananas.." << endl;
	system("Pause");
	system("CLS");
	cout << "Where would you like to go?\n1.Down the path\n2.Walk Around a bit and see where it goes\n3.Call out for help" << endl;
	cin >> choiceInt; 
	system("Pause");
	system("CLS");
	if (choiceInt == 1)
	{
		cout << "You walk down the path and the aroma of bananas starts to grow stronger"
	}
	else if (choiceInt == 2)
	{

	}
	else if (choiceInt == 3)
	{

	}




	system("pause");
	return 0;
}
