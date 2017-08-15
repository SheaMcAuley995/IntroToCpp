#include<iostream>

using namespace std;
/* ^^ Apparent bad practice according to the internet ^^ */
/* ^^    also bad pracitce according to Terry :(      ^^ */

int main()
{
	// Hello World program
	cout << "Hello AIE\n\n";

	// Mix Tape program (Would look prettier with endl instead of \n. Possible changes
	cout << "1.Everybody gets high - Missio\n2.Boom (Jason) (Or Walking out of hell one step at a time) - Dominia OST\n3.Megalovania - Undertale OST\n4.Turbo Killer - Carpenter Brut\n5.Bellbottoms - The Jon Spencer Blues Explosion\n\n";
	
	// Count from 0 to 5 back down from 5 to 0
	int k;
	k = 0;
	
	while (k <= 5)
	{
		cout << (k) << endl;
		k++;
	}
	cout << endl;
	
	/* This is a break between the two while loops
	   Switching from an ascension to a decline*/
	
	while (k >= 1)
	{
		k--;
		cout << k << endl;
		
	}
	
	cout << endl;
	
	system("pause");
	return 0;
}



//Problem B
// main.cpp/main()
// ...

// SyntacticalErrors-B)
/*
std::cout << "SyntacticalErrors-B)" << std::endl;
std::cout << "Four score and seven years ago" << std::endl;
std::cout << "our fathers brought forth on this continent," << std::endl;
std::cout << "a new nation," << std::endl;
std::cout << "conceived in Libery, and dedicated to the proposition" << std::endl;
std::cout << "that all men are created equal." << std::endl;

std::cout << "Now we are engaged in a great civil war," << std::endl;
std::cout << "testing whether that nation, or any nation" << std::endl;
std::cout << "so conceived and so dedicated, can long endure." << std::endl;
// ...
*/