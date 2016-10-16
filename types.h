#pragma once

struct Object
{
	const uint8_t* sprite;
	uint8_t data;
	uint8_t room, x, y;
	int8_t movex, movey; 
}

class Player
{
public:
	int8_t room,x,y;
	uint8_t holding; 

	void reset()
	{
		x = 64;
		y = 34;
		room = 0;
		holding = 0;
	}
}

struct Room
{
	const byte* layout;
	uint8_t data;
	uint8_t roomLeft, roomRight, roomUp, roomDown;
}

enum class Objects : uint8_t
{
	None,
	RedDragon,
	YellowDragon,
	GreenDragon,
	Sword,
	Bridge,
	YelloWkey,
	WhiteKey,
	BlackKey,
	Bat,
	Dot,
	Cup,	//I can't spell chalise consistently.
	Magnet
}