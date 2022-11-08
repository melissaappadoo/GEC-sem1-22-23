// Program25_Initials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;

void ShowInitials(char arr[])
{
    int spaceFound = 0;
    bool doneOnce = false;
    for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
    {
        if (i == 0)
        {
            cout << arr[i] << endl;
        }
        else if (arr[i] == ' ')
        {
            spaceFound++;
            if (spaceFound == 1 && !doneOnce)
            {
                cout << arr[i+1] << endl;
                spaceFound = 0;
                doneOnce = !doneOnce;
            }
            else if (spaceFound == 1 && doneOnce)
            {
                for (int j = i++; j < sizeof(arr) / sizeof(char); j++)
                {
                    cout << arr[j];
                }
            }
        }
    }
}

int main()
{
    char name[256];
    cout << "Enter your name: ";
    cin.getline(name, 256);
    ShowInitials(name);
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
