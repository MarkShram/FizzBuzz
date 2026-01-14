#include "FizzBuzzRule.h"

FizzBuzzRule::FizzBuzzRule(int d, const string& w) : divisor(d), word(w)
{
	//
}

bool FizzBuzzRule::applies(int value) const
{
	return value % divisor == 0;
}

string FizzBuzzRule::getWord() const
{
	return word;
}


