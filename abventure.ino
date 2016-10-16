#include <Arduino.h>
#include <Arduboy.h>

Arduboy ab;
Game game(ab);
  
int main(void)
{
	init();

	#ifdef USBCON
    	USBDevice.attach();
	#endif
 
	ab.begin();
  
  	bool ready = false;
  	uint8_t mode = 0;

  	while(!ready)	//titlescreen
  	{
		if(ab.nextFrame())
	    {
	  		if ab.pressed(BUTTON_UP)	{	if (mode>0) 	mode--;	}
	  		if ab.pressed(BUTTON_DOWN)	{	if (mode<10) 	mode++;	}

	  		if ab.pressed(BUTTON_A)		{	ready = true;	}

	  		ab.clear();
	  		ab.print(mode);
	  		ab.display();
  		}

  	}

	game.reset(mode);

	while(1)	//game
	{
		if(ab.nextFrame())
	    {
	      ab.clear();
	      
	      game.step();
	      
	      ab.display();
	    }
	}
}
