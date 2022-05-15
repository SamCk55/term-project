#pragma once
#include "Enemies.h"

class items {
public:
    // interface
    virtual int getstats() = 0;
    void setpower(int w); 
    void setrank(int h); 
    


protected:
    int power;
    int rank;

};


class Ring : public items{
public:
    int getstats();
    
};

class Pendant : public items {
public:
    int getstats();
    
};
