#include"Wall.h"

Wall::Wall()
{
}

Wall::Wall(int startX, int startY) : Actor(startX, startY)
{
}

char Wall::getShape()
{
	return'*';
}