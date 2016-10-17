#pragma once

enum roomFlag : uint8_t
{
	none = B00000000,
	mirror = B0000001,
};

typedef struct Room
{
	const uint8_t* map;
	//uint8_t flags;
	uint8_t north,east,south,west;
};

