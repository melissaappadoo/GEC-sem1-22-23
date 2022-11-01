// Program23_Inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Swap(string inventory[])
{
    char letter;
    cout << "You have picked up a wizard's staff." << endl;
    cout << "Would you like to swap it with the dagger in your inventory?" << endl;
    cin >> letter;
    if (letter == 'Y' || letter == 'y')
    {
        cout << "YOUR INVENTORY: " << endl;
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i] == "dagger")
            {
                inventory[i] = "staff";
            }
            cout << inventory[i] << endl;
        }
    }
    if (letter == 'N' || letter == 'n')
    {
        cout << "You have left the item behind." << endl;
        cout << "YOUR INVENTORY: " << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << inventory[i] << endl;
        }
    }
}

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";
    Swap(inventory);
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
