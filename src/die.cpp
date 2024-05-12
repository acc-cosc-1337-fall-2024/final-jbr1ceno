//
#include "die.h"
#include<iostream>
#include<cstdlib> //std::rand()
#include<time.h>

using std::cout; using std::srand;

//public class function
int Die::roll()
{   
    int rollNum = std::rand() % 6 + 1; //will roll from 1 to 6
    return rollNum;
}

/*void Die::set_seed()
{
    srand(time(0));
}*/