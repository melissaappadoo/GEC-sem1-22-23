// Program39_TopTenScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

struct Score
{
    int score;
    string name;
};

Score loadedScores[];

void enterScore()
{

}

void countScores()
{

}

void displayScore()
{

}

void saveScores()
{

}

int main()
{
    ofstream outFile;
    bool running = true;
    int choice;

    while (running)
    {
        cout << "1. Enter a score" << endl;
        cout << "2. Displacy scores" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            enterScore();
        }
        else if (choice == 2)
        {
            countScores();
            displayScore();
        }
        else if (choice == 3)
        {
            saveScores();
        }
        else
        {
            cout << "Please enter a valid choice: " << endl;
            cin >> choice;
        }
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
