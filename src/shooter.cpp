//
#include "shooter.h"
//#include "roll.h"
//#include "die.h"
#include<iostream>
#include<cstdlib> //std::rand()
#include<time.h>
#include<memory>

using std::cout;

Roll* Shooter::throw_dice(Die& firstDie, Die& secondDie)
{
    Roll roll1(firstDie, secondDie);
    roll1.roll_dice();
    rolls->push_back(&roll1);
    Roll* pRoll = &roll1;
    return pRoll;
}

void Shooter::display_rolled_values()
{
    //for(const int& i: rolls)
    for(long unsigned int i = 0; i < rolls->size(); i++)
    {
        cout<<"The roll value is: "<<rolls->at(i)->roll_value()<<"\n"; 
    }
    cout<<"The roll size is: "<<rolls->size()<<"\n";
}