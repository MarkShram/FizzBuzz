#include "FizzBuzzEngine.h"

void FizzBuzzEngine::addRule(const FizzBuzzRule& rule)
{
	rules.push_back(rule);
}

string FizzBuzzEngine::evaluate(int value) const
{
	string result;
	for (const auto& r : rules)
	{
		if (r.applies(value)) result += r.getWord();

	}
	if (result.empty()) result = to_string(value);
	return result;
}