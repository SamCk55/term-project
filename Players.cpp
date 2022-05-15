#include"Players.h"

void Players::setPlayers()
{
    cout << "\nFor player 1.....";
    player1.setPlayer();
    cout << "\nFor player 2.....";
    player2.setPlayer();
}

void Players::printPlot()
{
    cout << "\n\nPlayer 1:\n\tName: " << player1.player;
    cout << "\n\tType: " << player1.name;
    cout << "\n\tCapacity: " << player1.capacity;

    cout << "\n\nPlayer 2:\n\tName: " << player2.player;
    cout << "\n\tType: " << player2.name;
    cout << "\n\tCapacity: " << player2.capacity;
    cout << endl;
}
