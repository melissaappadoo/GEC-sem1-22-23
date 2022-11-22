// Program14_10Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int inputNum;
    int numCount = 2;
    float mean = 0.0f;
    int total = 0;

    cout << "Enter a number: " << endl;
    cin >> inputNum;
    total += inputNum;

    cout << endl;

    cout << "Enter a number: " << endl;
    cin >> inputNum;
    total += inputNum;

    mean = (float)total / numCount;

    cout << "Sum: " << total << endl;
    cout << "Mean: " << mean << endl;

    do
    {
        cout << endl;

        cout << "Enter a number: " << endl;
        cin >> inputNum;

        if (inputNum != 0) 
        {
            numCount++;
            total += inputNum;
            mean = (float)total / numCount;

            cout << "Sum: " << total << endl;
            cout << "Mean: " << mean << endl;
        }

    } while (inputNum != 0);

    cout << "exiting..." << endl;
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
