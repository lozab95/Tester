
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

#include "EnemyClass.h"
#include "PlayerClass.h"

using namespace std;



void main (void)
{
	Enemy *enemy1;
	enemy1 = new Enemy();
	Player *player1;
	player1 = new Player();
	std::cout<<"\n Hello Boys and Girls"<<std::endl;
	std::cout<<"\n Below an enemy will be formed using the players level to limit the selection of possiblities."<<std::endl;
	std::cout<<"\n Its also random."<<std::endl;
	std::cout<<(enemy1->getName())<<std::endl;
	std::cin.get();
	return;
}

/*
int main()

{
	int plevel = 20;
	int golddrop = 0;

	int en_i_type	= 0;
	int en_i_size	= 0;
	int en_i_element	= 0;
	int en_i_armed	= 0;
	int en_i_armoured	= 0;
	float en_damage		=0.0;
	float en_health		=0.0;
	int en_v_type		=0;
	int en_v_size		=0;
	int en_v_element	=0;
	float en_v_armed	=0.0;
	float en_v_armoured =0.0;

	string en_type, en_size, en_element, en_armed, en_armoured;

	cout<<"This is the enemy generator"<<endl;
	Sleep(2000);
	system("cls");
	{
		
		unsigned seed = time(0);
		srand(seed);
		


		if((plevel >0) && (plevel <=4))
		{
		en_i_type = rand () %2+1; 
		switch(en_i_type)
		{
		case   1		:	en_type = "Rat";	(en_health = 10) && (en_damage = 2); (golddrop = rand () %5+1);
			break;
		case   2		:	en_type = "Goblin";	(en_health = 12.5) && (en_damage = 3); (golddrop = rand () %5+5);
			break;
		}
		}
		if((plevel >4) && (plevel <=8))
		{
		en_i_type = rand () %4+1; 
		switch(en_i_type)
		{
		case   1		:	en_type = "Rat";	(en_health = 10) && (en_damage = 2); (golddrop = rand () %5+1);
			break;
		case   2		:	en_type = "Goblin";	(en_health = 12.5) && (en_damage = 3); (golddrop = rand () %5+5);
			break;
		case   3		:	en_type = "Skeleton";(en_health = 15) && (en_damage = 4); (golddrop = rand () %5+10);
			break;
		case   4		:	en_type = "Wolf";	(en_health = 22.5) && (en_damage = 6); (golddrop = rand () %5+15);
			break;
		}
		}
		if((plevel >8) && (plevel <=12))
		{
			en_i_type = rand () %4+1; 
		switch(en_i_type)
		{
		case   1		:	en_type = "Skeleton";(en_health = 15) && (en_damage = 4); (golddrop = rand () %5+10);
			break;
		case   2		:	en_type = "Wolf";	(en_health = 22.5) && (en_damage = 6); (golddrop = rand () %5+15);
			break;
		case   3		:	en_type = "Zombie";	(en_health = 30) && (en_damage = 8); (golddrop = rand () %5+20);
			break;
		case   4		:	en_type = "Bear";	(en_health = 45) && (en_damage = 12); (golddrop = rand () %5+25);
			break;
		}
		}
		if((plevel >12) && (plevel <=16))
		{
			en_i_type = rand () %4+1; 
		switch(en_i_type)
		{
		case   1		:	en_type = "Zombie";	(en_health = 30) && (en_damage = 8); (golddrop = rand () %5+20);
			break;
		case   2		:	en_type = "Bear";	(en_health = 45) && (en_damage = 12); (golddrop = rand () %5+25);
			break;
		case   3		:	en_type = "Orc";	(en_health = 60) && (en_damage = 16); (golddrop = rand () %5+30);
			break;
		case   4		:	en_type = "Bandit";	(en_health = 90) && (en_damage = 24); (golddrop = rand () %5+35);
			break;
		}
		}
		if((plevel >16) && (plevel <=20))
		{
			en_i_type = rand () %4+1; 
		switch(en_i_type)
		{
		case   1		:	en_type = "Orc";	(en_health = 60) && (en_damage = 16); (golddrop = rand () %5+30);
			break;
		case   2		:	en_type = "Bandit";	(en_health = 90) && (en_damage = 24); (golddrop = rand () %5+35);
			break;
		case   3		:	en_type = "Troll";	(en_health = 120) && (en_damage = 32); (golddrop = rand () %5+30);
			break;
		case   4		:	en_type = "Witch";	(en_health = 180) && (en_damage = 48); (golddrop = rand () %5+45);
			break;
		}
		}
		if((plevel >20) && (plevel <=24))
		{
			en_i_type = rand () %4+1; 
		switch(en_i_type)
		{
		case   1		:	en_type = "Troll";	(en_health = 120) && (en_damage = 32); (golddrop = rand () %5+30);
			break;
		case   2		:	en_type = "Witch";	(en_health = 180) && (en_damage = 48); (golddrop = rand () %5+45);
			break;
		case   3		:	en_type = "Warlock";(en_health = 240) && (en_damage = 64); (golddrop = rand () %5+50);
			break;
		case   4		:	en_type = "Dragon";	(en_health = 500) && (en_damage = 125); (golddrop = rand () %20+60);
			break;
		}
		}
		en_i_size = rand () %4+1; 
		switch(en_i_size)
		{
		case   1		:	en_size = "Tiny";	(en_health *= 0.60) && (en_damage *= 0.60);
			break;

		case   2		:	en_size = "Small";	(en_health *= 0.75) && (en_damage *= 0.75);
			break;

		case   3		:	en_size = "Large";	(en_health *= 1.25) && (en_damage *= 1.25);
			break;

		case   4		:	en_size = "Gigantic";(en_health *= 1.50) && (en_damage *= 1.50);
			break;


		default		:	cout<<"If this is shown, something is very wrong"<<endl;
			break;
		}
		en_i_element = rand () %4+1; 
		switch(en_i_element)
		{
		case   1		:	en_element = "Earth";	(en_damage *= 1.05);
			break;

		case   2		:	en_element = "Ice";	(en_damage *= 1.10);
			break;

		case   3		:	en_element = "Fire";	(en_damage *= 1.15);
			break;

		case   4		:	en_element = "Light";	(en_damage *= 1.20);
			break;

		default		:	cout<<"If this is shown, something is very wrong"<<endl;
			break;
		}
		}
		en_i_armed = rand () %3+1; 
		switch(en_i_armed)
		{
		case   1		:	en_armed = "Un-Armed";	(en_damage *= 0.70);
			break;

		case   2		:	en_armed = "Armed";	(en_damage *= 1.00);
			break;

		case   3		:	en_armed = "Heavily Armed";	(en_damage *= 1.30);
			break;

		default		:	cout<<"If this is shown, something is very wrong"<<endl;
			break;
		}
		en_i_armoured = rand () %3+1; 
		switch(en_i_armed)
		{
		case   1		:	en_armed = "Bare";	(en_health *= 0.70);
			break;

		case   2		:	en_armed = "Armoured";	(en_health *= 1.00);
			break;

		case   3		:	en_armed = "Heavily Armoured";	(en_health *= 1.30);
			break;

		default		:	cout<<"If this is shown, something is very wrong"<<endl;
			break;
		}


		Sleep(2000);
		cout<< "A " << en_armed <<" "<< en_size <<" " << en_type << " of " << en_element<<endl;
		Sleep(2000);
		cout<<"Its Health "<< en_health << " and its damage per hit is " << en_damage<<endl;
		cout<< "The gold dropped from this enemy is " << golddrop;
		Sleep(10000);

		return 0;
	}
	*/
	
