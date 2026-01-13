#include "FizzBuzzGit.h"

//Prints FizzBuzz from start to the end
void printFizzBuzz(int start, int end)
{
	//Loop based off start and end
	for (int i = start; i <= end; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	cout << endl;
}

//Gets an intenger from user input
int getUserInput(string prompt)
{
	int value;
	cout << prompt;
	cin >> value;
	return value;
}