

Game::Game(Arduboy & ab)
{
	this->ab = &ab;
}

Game::reset()
{
	player.reset();
}

Game::step()
{
	
}


inline bool getBit(uint8_t byte, uint8_t position) // position in range 0-7
{
    return (byte >> position) & 0x1;
}

Game::drawRoom(const uint8_t room)
{
	//rooms are sized 20x7, drawn here as 120x63
	static const uint8_t xsize = 6;	
	static const uint8_t ysize = 9;

	uint8_t dx,dy;

	uint8_t shift,readByte;
	for(uint8_t iy = 0; iy<7; ++iy)
	{
		for(uint8_t ix = 0; ix<20; ++ix)
		{
			if getBit(roomData[room,readbyte],shift)
				ab->drawRect(dx,dy,xsize,ysize,1);

			dx += xsize;
			
			if (++shift>8)	//if done with byte, move to start of next one
			{
				shift = 0;
				++readByte;
			}
		}
		wrap = 0;
		dx = 0;
		dy += ysize;

		++readByte;
		shift = 0;
	}
}

Game::drawObjects(const uint8_t room)
{
	ab->drawRect(player.x-4,player.y-4,8,8,1);
}