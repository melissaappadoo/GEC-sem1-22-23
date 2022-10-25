// Program19_OddsandEvens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int numOfOdd;
int oddTotal;
int numOfEven;
int evenTotal;

bool OddOrEven(int num)
{
	if (num % 2 == 0)
	{
		evenTotal++;
		numOfEven += num;
		return true;
	}
	else
	{
		oddTotal++;
		numOfOdd += num;
		return false;
	}
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "Sum of odd numbers: " << numOfOdd << endl;
	cout << "Number of odd numbers: " << oddTotal << endl;
	cout << "Sum of even numbers: " << numOfEven << endl;
	cout << "Number of even numbers: " << evenTotal << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		int num;
		cout << "Enter a number: " << endl;
		cin >> num;
		OddOrEven(num);
	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
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
