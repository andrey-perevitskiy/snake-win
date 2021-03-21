#ifndef REQS_H

#include "game_ctx.h"
#include "list.h"

enum req_id {
	REQ_SNAKE = 1,
	REQ_SNAKE_COLLIDE_FOOD,
	REQ_FOOD,
	REQ_PAUSE,
	REQ_RESUME,
	REQ_EVENT_WIN,
	REQ_EVENT_LOSE
};

int req_send_start (struct game_ctx * ctx);
int req_send_snake (struct game_ctx * ctx);
int req_send_snake_collide_board (struct game_ctx * ctx);
int req_send_snake_collide_food (struct game_ctx * ctx);
int req_send_food (struct game_ctx * ctx);
int req_send_pause (struct game_ctx * ctx);
int req_send_resume (struct game_ctx * ctx);
int req_send_event_win (struct game_ctx * ctx);
int req_send_event_lose (struct game_ctx * ctx);
int req_recv (struct game_ctx * ctx);
int poll (struct game_ctx * ctx, const struct list * req);

#define REQS_H
#endif
