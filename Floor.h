#pragma once
#ifndef __FLOOR_H__
#define __FLOOR_H__

#include "Actor.h"

class Floor : public Actor
{
public:

	Floor();

	Floor(int startX, int startY);

	virtual ~Floor();
	
	char getShape();

};

#endif