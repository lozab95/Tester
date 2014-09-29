#pragma once

class Player
{
public:
Player();
~Player();
int getHealth();
int getLevel();

private:
int level;
int health;
int armour;
int damage;
int speed;

};
