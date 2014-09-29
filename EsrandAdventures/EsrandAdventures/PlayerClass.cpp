#include "PlayerClass.h"
#include <string>



Player::Player()
{
int level=5;
int health=100;
int armour=20;
int damage=2;
int speed=5;
}
Player::~Player()
{
}

int Player::getLevel()
{
	return level;
}
int Player::getHealth()
{
	return health;
};