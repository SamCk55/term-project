#pragma once

#include"BaseObj.h"
using namespace std;
class WeaponObj : public BaseObj
{
public:
	int capacity;

	WeaponObj();

	void setC(int a);

	void doDamage();

};
