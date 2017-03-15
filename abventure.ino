/*

*/
#include <Arduboy2.h>
#include "system.h"
#include "game.h"
#include "rooms.h"
#include "items.h"
#include "sprites.h"
#include "player.h"

Arduboy2 ab = Arduboy2();
Player player = Player(ab);
Game game = Game(ab,player);

int main(void)
{
	init();
	#ifdef USBCON
    	USBDevice.attach();
	#endif
	ab.begin();
	
}