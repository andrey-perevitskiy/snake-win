#ifndef SNAKE_STRUCT_H

#include "unit-struct.h"

struct snake {
	struct unit * u;
	int length;
	int score;
};

#define SNAKE_STRUCT_H
#endif
