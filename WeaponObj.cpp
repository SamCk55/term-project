#include "WeaponObj.h"
//Weapons

WeaponObj::WeaponObj()
{
    capacity = 0;
}

void WeaponObj::setC(int a)
{
    capacity = a;
}


void WeaponObj::doDamage()
{
    capacity--;
}
