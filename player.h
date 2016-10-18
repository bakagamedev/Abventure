#pragma once
#include "rooms.h"

class System;

class Player
{
private:
	System * ab;

	int16_t x,y;
	uint8_t room;
	uint8_t holding;

	getPF() 
	{
		pgm_read_byte(rooms[room].map);
	}
public:
	Player(System & ab)
	{
		this->ab = &ab;
	}
	void step()
	{
		/*
		int16_t oldx,oldy;
		if(ab->isPressed(LEFT_BUTTON))
			x -= 1;
		if(ab->isPressed(RIGHT_BUTTON))
			x += 1;
		if(ab->isPressed(UP_BUTTON))
			y -= 1;
		if(ab->isPressed(DOWN_BUTTON))
			y += 1;

		if ab->playFieldCollision(room->map,x,y)
		{
			x = oldx;
			y = oldy;
		}
		*/
	}
	void draw()
	{
		ab->fillRect(x-4,y-4,8,8,0);
	}
};