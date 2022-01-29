#include<iostream>
#include"MyEngine.h"

using namespace std;

int main()
{
	MyEngine* myengine = new MyEngine;

	while (myengine->bIsRunning)
	{
		myengine->Input();
		myengine->Tick();
		myengine->Rander();
	}

	return 0;
}