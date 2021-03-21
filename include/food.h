#ifndef FOOD_H

#include "game_ctx.h"
#include "food-struct.h"
#include "snake-struct.h"

struct food * food_alloc (void);
void food_draw (struct food * f);
void food_draw_super (struct food * f, struct food_ctx * fc);
void food_gen (struct food * f, struct food_ctx * fc, const struct snake * s);
void food_free (struct food * f);

#define FOOD_H
#endif
