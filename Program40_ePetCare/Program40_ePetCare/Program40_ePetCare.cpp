// Program40_ePetCare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Pet.h"
#include <iostream>

using namespace std;

int main()
{
    Pet* petPtr;
    int choice1;

    cout << "1.Dog 2.Cat 3.Hamster" << endl << "Enter choice: ";
    cin >> choice1;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (choice1)
    {
    case 1:
        petPtr = new Dog();
        break;

    case 2:
        petPtr = new Cat();
        break;

    case 3:
        petPtr = new Hamster();
        break;

    default:
        petPtr = new Pet();
        break;
    }
    petPtr->Talk();

    int choice2 = 5;
    while (choice2 != 0)
    {
        cout << "0.Quit 1.Listen to your pet 2.Feed your pet 3.Play with the pet" << endl << "Enter choice: ";
        cin >> choice2;
        switch (choice2)
        {
        case 0:
            break;
            
        case 1:
            petPtr->Talk();
            break;

        case 2:
            petPtr->Feed();
            break;

        case 3:
            petPtr->Play();
            break;
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
