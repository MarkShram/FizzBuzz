#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::setupDefaultRules()
{
	engine.addRule(FizzBuzzRule(3, "Fizz"));
	engine.addRule(FizzBuzzRule(5, "Buzz"));

}

void Menu::printMenu()
{
	cout << "=== FIZZBUZZ MENU ===\n";
	cout << "1 - Start FizzBuzz\n";
	cout << "2 - Set Range\n";
	cout << "3 - Quit\n";
	cout << "Choice: ";
}

int Menu::getUserInput(const string& prompt)
{
	int value;
	cout << prompt;
	cin >> value;
	return value;
}

void Menu::handleChoice(int choice)
{
	if (choice == 1)
	{
		for (int i = range.getStart(); i <= range.getEnd(); i++)
		{
			cout << engine.evaluate(i) << endl;
		}

	}
	else if (choice == 2)
	{
		int s = getUserInput("\nEnter start: ");
		int e = getUserInput("Enter end: ");
		cout << "Ranges set!\n\n";
		Range temp(s, e);
		if (!temp.isValid())
		{
			cout << "Invalid range, resetting to default: 1-100\n\n";
			temp = Range();
		}

		range = temp;
	}
}

void Menu::run()
{
	setupDefaultRules();
	int choice = 0;
	while (choice != 3)
	{
		printMenu();
		cin >> choice;
		handleChoice(choice);
	}
}