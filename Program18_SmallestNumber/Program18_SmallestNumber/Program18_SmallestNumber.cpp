// Program18_SmallestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void SmallestNumber(int a, int b)
{
    if (a > b)
    {
        cout << b << " is the smallest number" << endl;
        cout << endl;
    }
    if (a < b)
    {
        cout << a << " is the smallest number" << endl;
        cout << endl;
    }
    else
    {
        cout << a << " and " << b << " are the same value." << endl;
        cout << endl;
    }
}

void division(float num)
{
    cout << num << " divided by 3 = " << num / 3 << endl;
    cout << endl;
}

float multiplication(int num)
{
    num = num * 10;
    division(num);
    return num;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int a;
        cout << "Enter your first number: " << endl;
        cin >> a;
        int b;
        cout << "Enter your second number: " << endl;
        cin >> b;
        SmallestNumber(a, b);
    }
    for (int i = 0; i < 3; i++)
    {
        int num;
        cout << "Enter your number to be multiplied: " << endl;
        cin >> num;
        multiplication(num);
    }
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
