#pragma once
#include"items.h"

class A: public Ring,Pendant
{
private:
    int x;
public:
    A() {}
    A(int i)
    {
        x = i;
    }
    void operator+(A);
    void display();
};


