//
#include<iostream>

#ifndef MY_DIE_H
#define MY_DIE_H

class Die
{
public:
    int roll(); //return Random in the range of 1 to 6
    void set_seed(); //to change seed for srand
private:
    int sides{6}; //die sides, initialized to 6
};

#endif