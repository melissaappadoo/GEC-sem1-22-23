// Program36_UsingReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int plus25(int& rNum)
{
    rNum += 25;
    return rNum;
}

int minus25(int& rNum)
{
    rNum -= 25;
    return rNum;
}

int main()
{
    int num;
    int& rNum = num;
    cout << "Enter a number: " << endl;
    cin >> rNum;
    cout << num << endl;
    cout << plus25(rNum) << endl;
    cout << "Enter another number: " << endl;
    cin >> rNum;
    cout << num << endl;
    cout << minus25(rNum);
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
