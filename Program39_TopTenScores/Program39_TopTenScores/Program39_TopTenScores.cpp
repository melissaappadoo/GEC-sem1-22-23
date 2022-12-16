// Program39_TopTenScores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Score
{
    int score;
    string name;
};

Score loadedScores[];

void saveScores(string name, int score)
{
    ofstream outFile("Score.txt", ios::out);
    if (!outFile.is_open())
    {
        cerr << "File not open" << endl;
    }
    outFile << name << ", " << score << endl;
    outFile.close();
}

void enterScore()
{
    string name;
    int score;
    cout << "Enter a name: " << endl;
    cin >> name;
    cout << "Enter a score: " << endl;
    cin >> score;
    cout << endl;
    saveScores(name, score);
}

void countScores()
{

}

void displayScore()
{

}

void loadScores()
{
    ifstream inFile("Score.txt", ios::in);
    string score;
    string name;
    int commaCount;
    string lineOfText;
    if (inFile.is_open())
    {
        /*while (getline(inFile, lineOfText)
        {

        }*/
    }
}

int main()
{
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
            running = false;
        }
        else if (choice == 2)
        {
            countScores();
            displayScore();
            running = false;
        }
        else if (choice == 3)
        {
            running = false;
        }
        else
        {
            cout << "1. Enter a score" << endl;
            cout << "2. Displacy scores" << endl;
            cout << "3. Exit" << endl;
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
