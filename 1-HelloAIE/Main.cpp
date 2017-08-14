#include<iostream>

using namespace std;
/* ^^ Apparent bad practice according to the internet ^^ */

int main()
{
	// Hello World program
	cout << "Hello AIE\n\n";

	// Mix Tape program
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