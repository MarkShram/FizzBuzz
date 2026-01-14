#pragma once
#include "FizzBuzzEngine.h"
#include "Range.h"

class Menu
{
public:
	void run(); // main loop

private:
	Range range;
	FizzBuzzEngine engine;

	void setupDefaultRules();
	void printMenu();
	void handleChoice(int choice);
	int getUserInput(const string& prompt); //replaces old function
};

