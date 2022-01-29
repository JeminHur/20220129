#pragma once
#ifndef __GOAL_H__
#define __GOAL_H__

#include "Actor.h"

class Goal :public Actor
{
public:

	Goal();

	Goal(int startX, int startY);

	virtual ~Goal();
	
	char getShape();

};

#endif