#include"Floor.h"

Floor::Floor()
{
}

Floor::Floor(int startX, int startY) : Actor(startX, startY) 
{
}

Floor::~Floor()
{
}

char Floor::getShape()
{
	return ' ';
}