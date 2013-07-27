#include "position.h"
#include "io.h"
#include "player.h"
#include "game.h"

#include <iostream>

int main (int argc, char **argv)
{
	game g;
	g.set_type(0,1);
	g.initialize(1);
	if (argc >= 2)
	{
		g.cp[0].set_depth(argv[1][0] - 48);
		g.cp[1].set_depth(argv[1][0] - 48);
	}
//	g.play();
	g.cp[0].choose_move(g.pos, 0);
}
