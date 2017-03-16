#pragma once
#include "arduboy2.h"

class System : public Arduboy2
{
	public:
		void drawPlayfield(const uint8_t * PF)
		{		
			for(uint8_t offset=0; offset<128; ++offset)	
			{
				//Finds bit on playfield for current block on the screen.
				const uint8_t byte   = pgm_read_byte(PF+(offset/8));
				const uint8_t bit 	 = 7 - (offset % 8);
				const uint8_t buffer = bitRead(byte,bit)*0xFF;
				for(uint8_t y=0; y<8; ++y)	//repeats each line 8 times on y axis to draw a block
					this->sBuffer[(offset*8)+y] = buffer;	
			}
		}

		bool const collidePlayfield(const uint8_t * PF,int8_t x,int8_t y)
		{
			x = x>>3;	//Transform to playfield pixels
			y = y>>3;			

			if((x<0) or (y<0) or (x>16) or (y>8))
				return true;

			const auto byte = ((x>>3)+(y<<1));
			const auto bit = 7-(x%8);

			return bitRead(pgm_read_byte(PF+byte),bit);
		}
	};