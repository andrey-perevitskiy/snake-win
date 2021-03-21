#ifndef UNIT_STRUCT_H

#include <windows.h>

enum dir {
	DIR_LEFT,
	DIR_RIGHT,
	DIR_UP,
	DIR_DOWN
};

struct unit {
	char sym;
	COORD pos;
	COORD prev;
	int color;
	enum dir dir;
};

#define UNIT_STRUCT_H
#endif
