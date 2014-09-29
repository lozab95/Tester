#pragma once
#include <string>

class Enemy
{
public:
Enemy();
~Enemy();
int getHealth(void);
std::string getName(void);

private:
int health;
int armour;
std::string name;
int damage;
int goldDrop;
//Appearance
	//--Colour?
	//--Size?
	//--Shape?
int speed;
};

