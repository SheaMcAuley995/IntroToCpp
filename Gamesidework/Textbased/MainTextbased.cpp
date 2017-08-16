/* Not offical game project
Will be working on orginization
*/
//More of a Choose your own adventure
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
void Stop()
{
	system("pause");
}
void MoveOn()
{
	/*system("Pause");*/
	system("CLS");
}

int main()
{
	int choiceInt;
	char ChoiceChar;
	int playerHP = 10;

	while (playerHP > 0)
	{

		cout << "Woah where are we?\nThe area around you is a thick jungle. There is a path leading north\nIt smells like bananas.." << endl;
		cout << "What would you like to do?\n1.Down the path\n2.Walk Around a bit and see where it goes\n3.Call out for help" << endl;
		cin >> choiceInt;
		MoveOn();
		if (choiceInt == 1)
		{
			cout << "You walk down the path and the aroma of bananas starts to grow stronger\nSuddenly you hear some shifting up in the trees.\n birds fly overhead and you hear a disgruntled growl.";
			Stop;
			MoveOn();
			cout << "";
		}
		else if (choiceInt == 2)
		{

		}
		else if (choiceInt == 3)
		{

		}


	}
	cout << "You died" << endl;
	system("pause");
	return 0;
}
