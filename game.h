#pragma once
#include "rooms.h"
#include "system.h"
#include "player.h"

class Game
{
private:
	System * ab;
	Player * player;
public:
	Game(System ab,Player player)
	{
		this->ab = &ab;
		this->player = &player;
	}

	frame()
	{
		//step
		ab->fillScreen(1);

		ab->display();
	}
};