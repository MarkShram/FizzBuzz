#pragma once
#include <string>

using namespace std;

class FizzBuzzRule
{
public: 
	FizzBuzzRule(int divisor, const string& word);
	bool applies(int value) const; //Asks: Does this apply the the number?
	string getWord() const; //Returns matching word 

private:
	int divisor;
	string word;
};