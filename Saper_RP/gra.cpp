#include "gra.h"



gra::gra()
{
	
}


gra::~gra()
{
}

void gra::start()
{
	
	sf::RenderWindow app(sf::VideoMode(ROZ * w, ROZ*w), "Saper_RP");
	sf::Sprite s(t);
	while (app.isOpen())
	{
		sf::Vector2i pos = sf::Mouse::getPosition(app);
		int x = pos.x / w;
		int y = pos.y / w;

		sf::Event e;
		while (app.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
				app.close();

			if (e.type == sf::Event::MouseButtonPressed)
				if (e.key.code == sf::Mouse::Left)
				{
					sgrid[x][y] = grid[x][y];
					/*if (grid[x][y] == 0)
					{
					if (grid[x + 1][y] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x][y + 1] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x - 1][y] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x][y - 1] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x + 1][y + 1] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x - 1][y - 1] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x - 1][y + 1] == 0) sgrid[x][y] = grid[x][y];
					if (grid[x + 1][y - 1] == 0) sgrid[x][y] = grid[x][y];
					}*/
				}
				else if (e.key.code == sf::Mouse::Right) sgrid[x][y] = 11;
		}

		app.clear(sf::Color::White);
		for (int i = 0; i < ROZ; i++)
			for (int j = 0; j < ROZ; j++)
			{
				if (sgrid[x][y] == 9) sgrid[i][j] = grid[i][j];
				s.setTextureRect(sf::IntRect(sgrid[i][j] * w, 0, w, w));
				s.setPosition(i*w, j*w);
				app.draw(s);
			}

		app.display();
	}
}
