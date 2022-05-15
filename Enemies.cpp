#include "Enemies.h"
//Enemy Team
void Enemies::setEnemies()
{
    cout << "\nFor enemy 1.....";
    enemy1.setEnemy();
    cout << "\nFor enemy 2.....";
    enemy2.setEnemy();
}

void Enemies::printPlot()
{
    cout << "\n\nEnemy 1:\n\tName: " << enemy1.player;
    cout << "\n\tType: " << enemy1.name;
    cout << "\n\tCapacity: " << enemy1.capacity;

    cout << "\n\nEnemy 2:\n\tName: " << enemy2.player;
    cout << "\n\tType: " << enemy2.name;
    cout << "\n\tCapacity: " << enemy2.capacity;
    cout << endl;
}