#ifndef UTILS_H

#include <windows.h>
#include "list.h"

enum del_target {
	TARGET_FIRST = 0x1,
	TARGET_LEAD = 0x2,
	TARGET_TRAIL = 0x4,
	TARGET_ALL = 0x8
};

int random (int min, int max);
int digits_count (int v);
struct list * strtkn (const char * str, const char delim);
bool strdch (char * str, const char exile, int mask);
void req_trunc (struct list * list);
void wprintfr (COORD crd, const char * fmt, ...);

#define UTILS_H
#endif
