#pragma once
#ifndef __MAP_H__
#define __MAP_H__
#include<iostream>
#include<vector>
#include"Actor.h"
#include"Floor.h"
#include"Wall.h"

using namespace std;

class Map
{
protected:

	int map[10][10] = {
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
	};

	int MapRow = 10;
	int MapColumn = 10;

public:

	Map();
	virtual ~Map();
	
	void drowmap();
	
};

#endif