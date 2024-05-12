//
#include<iostream>
#include "die.h"

#ifndef MY_ROLL_H
#define MY_ROLL_H

class Roll
{
public:
    Roll(Die& firstDie, Die& secondDie) : die1(firstDie), die2(secondDie){}; //constructor with two die references as parameters
    void roll_dice(); //Rolls die1 & die2, saves rolled values to rolled_value (private)
    int roll_value()const{return rolled_value;}
    void set_seed();
private:
    Die& die1; //initialize in Roll constructor
    Die& die2; //initialize in Roll constructor
    int rolled_value; //Set to die1 + die2 rolled values
};

#endif