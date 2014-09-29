#include "EnemyClass.h"
#include <time.h>
#include <iomanip>
#include <string>


//temp name for player level getter
int getPlayergetLevel =5;

Enemy::Enemy()
{
unsigned seed = time(0);
srand(seed);
int health=100;
int armour=20;
int damage=2;
int speed=5;
	
int i = rand () %getPlayergetLevel+1.; // creates a random number using the players level as a max value then (+1) as a starting value. This limits the player to enemies depending on level.
	switch(i)
	{
		case   1		:	name = "Rat";	(health = 10) && (damage = 2); (goldDrop = rand () %5+1);
			break;
		case   2		:	name = "Goblin";	(health = 12.5) && (damage = 3); (goldDrop = rand () %5+5);
			break;
		case   3		:	name = "Skeleton";(health = 15) && (damage = 4); (goldDrop = rand () %5+10);
			break;
		case   4		:	name = "Wolf";	(health = 22.5) && (damage = 6); (goldDrop = rand () %5+15);
			break;
		case   5		:	name = "Skeleton";(health = 15) && (damage = 4); (goldDrop = rand () %5+10);
			break;
		case   6		:	name = "Wolf";	(health = 22.5) && (damage = 6); (goldDrop = rand () %5+15);
			break;
		case   7		:	name = "Zombie";	(health = 30) && (damage = 8); (goldDrop = rand () %5+20);
			break;
		case   8		:	name = "Bear";	(health = 45) && (damage = 12); (goldDrop = rand () %5+25);
			break;
	}
}

Enemy::~Enemy()
{

}

int Enemy::getHealth()
{
	return health;
}

std::string Enemy::getName()

{
	return name;
}
