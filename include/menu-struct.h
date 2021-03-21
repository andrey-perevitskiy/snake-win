#ifndef MENU_STRUCT_H

#include "list.h"

enum menu_status {
	MENU_STATUS_OPENED,
	MENU_STATUS_CLOSED	
};

struct menu {
	int offset;
	struct list * items;
	enum menu_status status;
	int key;
	unsigned item_len_max;
};

#define MENU_STRUCT_H
#endif
