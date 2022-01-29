#include"Actor.h"

Actor::Actor()
{
}

Actor::Actor(int startX, int startY)
{
		x = startX;
		y = startY;
}

Actor::~Actor()
{
}

void Actor::setX(int x1) 
{ 
	x = x1; 
}

void Actor::setY(int y1)
{ 
	y = y1; 
}

int Actor::getX()
{ 
	return x; 
}

int Actor::getY() 
{ 
	return y;
}

void Actor::SetCount(int CountChange)
{
	Count = CountChange;
}

int Actor::GetCount() 
{
	return Count;
}

