#pragma once
#include <string>

class Enemy
{
public:
Enemy();
~Enemy();
void getStats(void);
int getArmour(void);
int getDamage(void);
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

