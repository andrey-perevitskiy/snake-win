#ifndef EVENT_H

#include "menu.h"
#include "game_ctx.h"

void evt_menu (struct menu * m);
int evt_pause (struct game_ctx * ctx, int yfset);
void evt_win (int yfset);
void evt_lose (int yfset);

#define EVENT_H
#endif
