#pragma once
#include <vector>
#include "FizzBuzzRule.h"

using namespace std;

class FizzBuzzEngine
{
public:
	void addRule(const FizzBuzzRule& rule); //Adds a custom rule (Fizz Buzz ect)
	string evaluate(int value) const; //Evaulte number based on set rules

private:
	vector<FizzBuzzRule> rules; //stores all rules

};