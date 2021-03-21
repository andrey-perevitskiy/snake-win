#ifndef UNIT_H

#include "unit-struct.h"

void unit_move (struct unit * u);
void unit_draw (const struct unit * u);
void unit_update_dir (struct unit * u, int key);
void unit_follow_to_unit (struct unit * u2, const struct unit * u1);
void unit_bend (struct unit * u2, const struct unit * u1);

#define UNIT_H
#endif
