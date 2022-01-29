#pragma once
#ifndef __MYENGINE_H__
#define __MYENGINE_H__
#include<iostream>
#include <conio.h>
#include"Player.h"
#include"Actor.h"
#include<vector>
#include"Floor.h"
#include"Goal.h"
#include"Wall.h"
#include"Map.h"
#include <windows.h>

using namespace std;

class MyEngine
{
protected:

	char Key=' ';
	Player* player = new Player(1,1);
	Actor* goal = new Goal(8,8);

public:
	
	bool bIsRunning = true;

	int Input();

	void Tick();

	void Rander();

	void gotoxy(int x, int y);
};

#endif