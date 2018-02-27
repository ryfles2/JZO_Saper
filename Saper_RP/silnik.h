#pragma once
#include <time.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#define ROZ 10



class Silnik
{
public:
	Silnik();//inicjalizacja zmiennych
	~Silnik();
	void InitMan();//inicjalizuje tablice manualnie


protected:
	const int w=32;
	int grid[ROZ][ROZ];	//plansza
	int sgrid[ROZ][ROZ]; //to co widzimy
	sf::Texture t;
	
	
};
