#include<iostream>

using namespace std;

int sumOfTwoInts(int a, int b)
{
	cout << "\nThe sum of " << a << " + " << b << " = " << a + b;
	cout << endl << endl;
	return 0;
}

int main()
{
	int x;
	int y;

	for (int i=1; i > 0; i++) 
	{
		cout << "Please enter two numbers and I will add them together \n1:";
		cin >> x;
		cout << "2:";
		cin >> y;
		sumOfTwoInts(x, y);
	}
	system("pause");
	return 0;
}