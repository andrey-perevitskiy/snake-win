#ifndef SCORE_H

#include "board.h"
#include "snake-struct.h"
#include "food-struct.h"

#define SCORE_POS_X (BOARD_RIGHT + 2)
#define SCORE_POS_Y BOARD_TOP
#define SCORE_ADD_VALUE 1

void score_draw (int x, int y, struct snake * s);
void score_add (int v, struct snake * s);
void score_add_draw (struct food * f, int yfset);

#define SCORE_H
#endif
