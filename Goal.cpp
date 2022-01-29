#include "Goal.h"

Goal::Goal()
{
}

Goal::Goal(int startX, int startY) : Actor(startX, startY)
{
}

Goal::~Goal()
{
}

char Goal::getShape()
{
	return 'G';
}