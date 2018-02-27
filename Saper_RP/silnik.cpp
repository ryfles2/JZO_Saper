#include "Silnik.h"
#include <cstdlib>
#include <time.h>
#include <SFML/Graphics.hpp>



Silnik::Silnik()
{
	
	srand(time(NULL));
	t.loadFromFile("images/saper.jpg");
	
}


Silnik::~Silnik()
{

}
void Silnik::InitMan()
{
	for (int i = 0; i < ROZ; i++)
		for (int j = 0; j < ROZ; j++)
		{
			sgrid[i][j] = 10;
			if (rand() % 5 == 0)  grid[i][j] = 9;
			else grid[i][j] = 0;
		}

	for (int i = 0; i < ROZ; i++)
		for (int j = 0; j < ROZ; j++)
		{
			int n = 0;
			if (grid[i][j] == 9) continue;
			if (grid[i + 1][j] == 9) n++;
			if (grid[i][j + 1] == 9) n++;
			if (grid[i - 1][j] == 9) n++;
			if (grid[i][j - 1] == 9) n++;
			if (grid[i + 1][j + 1] == 9) n++;
			if (grid[i - 1][j - 1] == 9) n++;
			if (grid[i - 1][j + 1] == 9) n++;
			if (grid[i + 1][j - 1] == 9) n++;
			grid[i][j] = n;
		}

}



