#include "EnemyCharacter.h"
//Enemy character
void EnemyCharacter::setEnemy()
{
    cout << "\nEnter Name: ";
    cin >> player;

    int key;

    cout << "\nWhat is your enemy type, \n\t1. Goblin\n\t2. Squeletton\n\t3. Ghost\n\tEnter choice: ";
    cin >> key;

    if (key == 1)
    {
        name = "Goblin";
        cout << "\nEnter possible moves: ";
        cin >> capacity;
    }
    else if (key == 2)
    {
        name = "Squeletton";
        cout << "\nEnter number of bowes: ";
        cin >> capacity;
    }
    else if (key == 3)
    {
        name = "Ghost";
        cout << "\nEnter possible attacks: ";
        cin >> capacity;
    }
}
