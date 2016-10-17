#pragma once

class System;

class Player
{
private:
	int16_t x,y;
	uint8_t room;

	System * ab;
public:
	Player(System & ab)
	{
		this->ab = &ab;
	}
	void step()
	{

	}
	void draw()
	{
		ab->fillRect(x-4,y-4,8,8,0);
	}
};