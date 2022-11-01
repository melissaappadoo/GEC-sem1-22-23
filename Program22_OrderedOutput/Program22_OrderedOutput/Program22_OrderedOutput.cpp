// Program22_OrderedOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

void largestNumber(int myArray[])
{
	int max = myArray[0];

	for (int i = 0; i < 5; i++)
	{
		if (myArray[i] > max)
		{
			max = myArray[i];
		}
	}
	cout << "The largest number is: " << max << endl;
}

int main()
{
    int myArray[5];
	for (int i = 0; i < 5; i++)
	{
		int n;
		cout << "Enter a number: " << endl;
		cin >> n;
		myArray[i] = n;
	}
	sort(myArray, myArray + 5);

	cout << endl;
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << myArray[i] << endl;
	}

	cout << endl;
	cout << endl;

	sort(myArray, myArray + 5, greater<int>());
	for (int i = 0; i < 5; i++)
	{
		cout << myArray[i] << endl;
	}

	cout << endl;
	cout << endl;

	largestNumber(myArray);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
