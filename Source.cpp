
#include<iostream>
#include<string.h>
#include "Enemies.h"
#include "items.h"
#include "tbd.h"
#include"boss.h"
using namespace std;




int main()
{
    Players p;
    Enemies e;
    Ring r1;
    Pendant  t1;
    p.setPlayers();
    e.setEnemies();
    p.printPlot();
    e.printPlot();
    r1.setpower(e.enemy1.capacity);
    r1.setrank(e.enemy2.capacity);
    t1.setpower(p.player1.capacity);
    t1.setrank(p.player1.capacity);

    // GamePlay
    while (1)
    {

        // Check
        if (p.player1.capacity == 0 && p.player2.capacity == 0)
        {
            cout << "\n\nplayer team is lost....GAME OVER"<<endl;
            break;
        }

        if (e.enemy1.capacity == 0 && e.enemy2.capacity == 0)
        {
            cout << "\n\nenemy team is lost....GAME OVER"<<endl;
            break;
        }

        // First players will attack...
        if (p.player1.capacity > 0)
        {
            cout << "\nplayer 1 " << p.player1.name << " attacked";
            p.player1.doDamage();
        }
        else
        {
            cout << "\nplayer 2 " << p.player2.name << " attacked";
            p.player2.doDamage();
        }

        // Enemy attack
        if (e.enemy1.capacity > 0)
        {
            cout << "\nenemy 1 " << e.enemy1.name << " attacked";
            e.enemy1.doDamage();
        }
        else
        {
            cout << "\nenemy 2 " << e.enemy2.name << " attacked";
            e.enemy2.doDamage();
        }

    }

    cout << " A ring item of power " << r1.getstats() << " dropped from a corpse " << endl;



    cout << " A pendant item of power " << t1.getstats() << " dropped from a corpse " << endl;

    A a1(t1.getstats());
    A a2(r1.getstats());
    a1 + a2;
    Boss A = Boss();
    A.function();  
    Steps m = Steps();
    m.function();   

    

    


    return 0;
}