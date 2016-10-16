#pragma once
#include <stdint.h>
#include "types.h"
#include "data.h"

class Arduboy;

class Game
{
	private:
		//handy stuff culled from stack overflow most likely
		inline bool getBit(uint8_t byte, uint8_t position);

		//Important things
		Player player;
		//uint8_t objectData[20,8];
		//uint8_t roomData[20,28];

		void drawRoom(const uint8_t room);
		void drawObjects();
	public:
		Game(Arduboy & ab);
		void reset(uint8_t mode);
		void step();
}