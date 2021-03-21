#ifndef FOOD_STRUCT_H

#include <windows.h>

struct food {
	char sym;
	COORD pos;
	int color;
	int score;
};

#define FOOD_STRUCT_H
#endif
