#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"
#include "die.h"
#include<vector>
#include<iostream>

using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*TEST_CASE("Test for rolling die from 1 to 6")
{
	Die rollDie;
	int dieRolled;
	std::vector<bool> dieRollResult{};
	int falseCount = 0;
	bool result = true;
	rollDie.set_seed();

	for(int i = 0; i < 10; i++)
	{
		dieRolled = rollDie.roll();
		if(dieRolled <= 6 && dieRolled >= 1)
		{
			dieRollResult.push_back(true);
			cout<<"Dice roll: "<< dieRolled <<"\n";
		}
		else
		{
			dieRollResult.push_back(false);
			cout<<"False dice roll: " <<dieRolled <<"\n";
			falseCount++;
		}
	}

	if(falseCount > 0)
	{
		result = false;
	}
	cout<<"False dice num total: "<<falseCount<< " times.\n";
	REQUIRE(result == true);
}*/

TEST_CASE("Test for rolling two dice from 2 to 12")
{
	Die die1;
	Die die2;
	Roll rollTheDice(die1, die2);
	//int diceRolled;
	std::vector<bool> diceRollResult{};
	int falseCount = 0;
	bool result = true;
	rollTheDice.set_seed();

	for(int i = 0; i < 10; i++)
	{
		rollTheDice.roll_dice();
		int diceRolled = rollTheDice.roll_value();
		if(diceRolled <= 12 && diceRolled >= 2)
		{
			diceRollResult.push_back(diceRolled);
			cout<<"Dice roll: "<<diceRolled<<"\n";
		}
		else
		{
			std::cout<<"False dice roll: "<<diceRolled<<"\n";
			falseCount++;
		}
	}

	if(falseCount > 0)
	{
		result = false;
	}
	cout<<"False dice num total: "<<falseCount<< " times.\n";
	REQUIRE(result == true);
}

