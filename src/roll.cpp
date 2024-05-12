//
#include "roll.h"
#include "die.h"
#include<iostream>
#include<cstdlib> //std::rand()
#include<time.h>
#include<memory>

using std::cout; using std::srand;
using std::make_unique;

void Roll::set_seed()
{
    die1.set_seed();
    die2.set_seed();
}

void Roll::roll_dice()
{
    int result1 = die1.roll();
    int result2 = die2.roll();
    rolled_value = result1 + result2;
}