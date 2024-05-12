//
//
#include<iostream>
#include<vector>
#include "roll.h"
#include "die.h"

#ifndef MY_SHOOTER_H
#define MY_SHOOTER_H

class Shooter
{
public:
    Roll* throw_dice(Die& firstDie, Die& secondDie);
    void display_rolled_values(); //Iterate the vector<*Roll>, display roll_value
private:
    std::vector<Roll*> *rolls = new std::vector<Roll*>;
};

#endif