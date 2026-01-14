#include "Range.h"

Range::Range(int s, int e) : start(s), end(e)
{

}

bool Range::isValid() const
{
	return start > 0 && end > 0 && start <= end;
}

int Range::getStart() const
{
	return start;
}

int Range::getEnd() const
{
	return end;
}
