#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include<vector>
#include<iostream>

using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test for rolling die from 1 to 6")
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
}