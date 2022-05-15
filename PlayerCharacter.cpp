#include "PlayerCharacter.h"
//Player character
void PlayerCharacter::setPlayer()
{
    cout << "\nEnter Name: ";
    cin >> player;

    int key;

    cout << "\nWhat is your player type, \n\t1. Swordsman\n\t2. Archer\n\t3. Ax wielder\n\tEnter choice: ";
    cin >> key;

    if (key == 1)
    {
        name = "swordsman";
        cout << "\nEnter possible moves: ";
        cin >> capacity;
    }
    else if (key == 2)
    {
        name = "archer";
        cout << "\nEnter number of bowes: ";
        cin >> capacity;
    }
    else if (key == 3)
    {
        name = "Ax wielder";
        cout << "\nEnter possible attacks: ";
        cin >> capacity;
    }

}