// Program35_TheChangingPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int num1;
int num2;

void inputDetails(int* n1, int* n2)
{
    cout << "Enter a number: " << endl;
    cin >> num1;
    cout << "Enter another number: " << endl;
    cin >> num2;
    n1 = &num1;
    n2 = &num2;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << "num1 value = " << integer1 << endl;
    cout << "num1 address in memory = " << &integer1 << endl;
    cout << "num2 value = " << integer2 << endl;
    cout << "num2 addres in memory = " << &integer2 << endl;
    cout << "pNum value = " << pointer << endl;
    cout << "pNum dereferenced value = " << *pointer << endl;
    cout << "pNum address in memory = " << &pointer << endl;
    cout << endl;
}

int main()
{
    int* pNum = &num1;
    int* pNum2 = &num2;
    inputDetails(pNum, pNum2);
    outputDetails(num1, num2, pNum);
    pNum = &num2;
    outputDetails(num1, num2, pNum);
    pNum = nullptr;
    pNum2 = nullptr;
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
