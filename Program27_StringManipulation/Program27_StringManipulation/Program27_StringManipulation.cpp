// Program27_StringManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void InsertName(string testString, string name1, string name2) {
    cout << testString.insert(testString.find("X") + 1, name1) << endl;
    cout << testString.replace(testString.find(name1), name1.size(), name2) << endl;
}

void ReplaceX(string testString, string name1, string name2) {
    cout << testString.replace(testString.find("X"), 2, name1) << endl;
    cout << testString.replace(testString.find(name1), name1.size(), name2) << endl;
}

int main()
{
    string name1;
    string name2;
    cout << "Enter your name: " << endl;
    cin >> name1;
    while (name2.size() < name1.size()) {
        cout << "Enter another name (must be longer): " << endl;
        cin >> name2;
    }
    string testString = "Do you know who loves C++ XX does!";
    InsertName(testString, name1, name2);
    ReplaceX(testString, name1, name2);
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
