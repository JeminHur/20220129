#include"Player.h"

Player::Player()
{
}

Player::Player(int startX, int startY) :Actor(startX, startY)
{
}

Player::~Player()
{
}

void Player::Player:: moveXRight()
{
	x++;
}

void Player::moveXRLeft()
{
	x--;
}

void Player::moveYUp()
{
	y--;
}

void Player::moveYDown()
{
	y++;
}

char Player::getShape()
{
	return 'P';
}