#pragma once
#include "types.h"

static const PROGMEM uint8_t sprSword[] =
{
	8,3,
	B01000000,
	B11111111,
	B01000000,
};
static const PROGMEM uint8_t sprMagnet[] =
{
	8,4,
	B11000011,
	B11000011,
	B11000011,
	B01111110,
};

static const PROGMEM Object objects[] =
{
	{	sprSword,64,32,2	},
	{	sprMagnet,64,32,3	},
};