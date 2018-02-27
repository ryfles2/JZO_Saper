#include <SFML/Graphics.hpp>
#include "silnik.h"
#include "gra.h"
#include <time.h>

#define ROZ 10


int main()
{
	gra g;
	g.InitMan();
	g.start();
	
	return 0;
}
