#pragma once
#ifndef __WALL_H__
#define __WALL_H__
#include "Actor.h"

class Wall :public Actor
{
public:

	Wall();

	Wall(int startX, int startY);

	virtual ~Wall(){}
	
	char getShape();

};

#endif