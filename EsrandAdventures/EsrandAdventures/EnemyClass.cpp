#include "EnemyClass.h"
#include <time.h>
#include <iomanip>
#include <string>
#include <iostream>


//temp name for player level getter
int getPlayergetLevel =5;

Enemy::Enemy()
{
unsigned seed = time(0);
srand(seed);
std::string n;
armour=20;
speed=5;
	
int i = rand () %getPlayergetLevel+1.; // creates a random number using the players level as a max value then (+1) as a starting value. This limits the player to enemies depending on level.
	switch(i)
	{
		case   1		:	n = "Rat";	(health = 10) && (damage = 2); (goldDrop = rand () %5+1);
			break;
		case   2		:	n = "Goblin";	(health = 12.5) && (damage = 3); (goldDrop = rand () %5+5);
			break;
		case   3		:	n = "Skeleton";(health = 15) && (damage = 4); (goldDrop = rand () %5+10);
			break;
		case   4		:	n = "Wolf";	(health = 22.5) && (damage = 6); (goldDrop = rand () %5+15);
			break;
		case   5		:	n = "Skeleton";(health = 15) && (damage = 4); (goldDrop = rand () %5+10);
			break;
		case   6		:	n = "Wolf";	(health = 22.5) && (damage = 6); (goldDrop = rand () %5+15);
			break;
		case   7		:	n = "Zombie";	(health = 30) && (damage = 8); (goldDrop = rand () %5+20);
			break;
		case   8		:	n = "Bear";	(health = 45) && (damage = 12); (goldDrop = rand () %5+25);
			break;
	}

	i = rand () %4+1; 
		switch(i)
		{
		case   1		:	name = "Tiny "+ n;	(health *= 0.60) && (damage *= 0.60); //Add the Appearance modififing variables here! 
			break;

		case   2		:	name = "Small "+ n;	(health *= 0.75) && (damage *= 0.75);//Add the Appearance modififing variables here!
			break;

		case   3		:	name = "Large " + n;	(health *= 1.25) && (damage *= 1.25);//Add the Appearance modififing variables here!
			break;

		case   4		:	name = "Gigantic " + n;(health *= 1.50) && (damage *= 1.50);//Add the Appearance modififing variables here!
			break;
		}
}

Enemy::~Enemy()
{

}

void Enemy::getStats()
{
	std::cout<<"A wild... "<< name << " appears" <<std::endl;
	std::cout<<"Its Health "<< health << " and its damage per hit is " << damage<<std::endl;
	std::cout<<"Its Armour is "<< armour << " and its drops " << goldDrop<< " coins" <<std::endl;
	return;
}
int Enemy::getArmour()
{

	return armour;
}
int Enemy::getDamage()
{

	return damage;
}

std::string Enemy::getName()

{
	return name;
}
