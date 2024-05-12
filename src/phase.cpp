//
#include<iostream>
#include<vector>
#include "roll.h"
#include "die.h"

#ifndef MY_PHASE_H
#define MY_PHASE_H

class Phase //an abstract class has one pure virtual function
{
public:
    enum RollOutcome get_outcome(Roll* roll);
private:
};

#endif