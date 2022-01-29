#include"MyEngine.h"

int MyEngine::Input()
{
	Key = _getch();

	return 0;
}

void MyEngine::Tick()
{
	if (Key == 'Q' || Key == 'q') {
		bIsRunning = false;
	}
	else if (Key == 'A' || Key == 'a')
	{
		player->moveXRLeft();
	}
	else if (Key == 'D' || Key == 'd')
	{
		player->moveXRight();
	}
	else if (Key == 'W' || Key == 'w')
	{
		player->moveYUp();
	}
	else if (Key == 'S' || Key == 's')
	{
		player->moveYDown();
	}

}

void MyEngine::Rander()
{
	system("cls");

	Map maps;

	maps.drowmap();

	gotoxy(goal->getX(), goal->getY());
	cout << goal->getShape();

	gotoxy(player->getX(), player->getY());
	cout << player->getShape();

	if (player->getX() == goal->getX() && player->getY() == goal->getY())
	{
		cout << "µµÂø" << endl;
	}
}

void MyEngine::gotoxy(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}