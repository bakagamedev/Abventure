/*

*/
#include <Arduboy.h>
#include "system.h"
#include "game.h"
#include "rooms.h"
#include "items.h"
#include "sprites.h"
#include "player.h"

System ab = System();
Player player = Player(ab);
Game game = Game(ab,player);

int main(void)
{
	init();

	#ifdef USBCON
    	USBDevice.attach();
	#endif

	ab.begin();

	bool ready = false;
	uint8_t map = 0;

	while(!ready)
	{

		if(ab.nextFrame())
		{
			/*
	  		if (ab.pressed(BUTTON_UP))	 {	if (map>0) 	map--;	}
	  		if (ab.pressed(BUTTON_DOWN)) {	if (map<10) map++;	}
			*/
			ab.fillScreen(1);
			ab.drawPlayfield(mapGraphics[map]);
			ab.display();

			map++;
			delay(1000);
		}
	}

	while(1)
	{
		if(ab.nextFrame())
		{
			game.frame();
		}
	}
}