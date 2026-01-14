#pragma once

class Range
{
public:
	Range(int start = 1, int end = 100); //base
	bool isValid() const;
	int getStart() const;
	int getEnd() const;

private:
	int start;
	int end;

};