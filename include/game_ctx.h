#ifndef GAME_CTX_H

#include <stdbool.h>
#include <windows.h>
#include "snake-struct.h"
#include "food-struct.h"
#include "board-struct.h"
#include "list.h"

enum con_opt {
	CON_SINGLE,
	CON_SERVER,
	CON_CLIENT
};

struct food_ctx {
	struct list * syms;
	struct list * colors;
	struct list * scores;	
};

struct friend {
	struct snake * s;
	struct food * f;
	struct board * b;
	bool isPause;
};

struct game_ctx {
	struct snake * s;
	struct food * f;
	struct board * b;
	bool isPause;
	bool isExit;
	bool isMenu;
	struct food_ctx fc;
	
	/* Fields for the network game. */
	enum con_opt conOpt;
	WORD wsaVer;
	WSADATA wsaData;
	SOCKET curFd, friendFd;
	SOCKADDR_IN comAddr;
	struct friend friend;
};

#define GAME_CTX_H
#endif
