#include <stdio.h>
#include "food.h"
#include "board.h"
#include "utils.h"
#include "winconf.h"

struct food *
food_alloc (void)
{
    return calloc(sizeof(struct food), 1);
}

void
food_draw (struct food * f)
{
    SetConsoleCursorPosition(h, f->pos);
    SetConsoleTextAttribute(h, f->color | 0);
    printf("%c", f->sym);
    SetConsoleTextAttribute(h, FG_LIGHTGRAY | 0);
}

void
food_draw_super (struct food * f, struct food_ctx * fc)
{
    if (f->score == 1000) {
        f->color = *(int *) list_nth_data_rand(fc->colors);

        food_draw(f);
    }
}

void
food_gen (struct food * f, struct food_ctx * fc, const struct snake * s)
{
    struct list * vcrds = list_alloc();
    bool is_done;

    for (int y = BOARD_TOP + 1; y < BOARD_BOTTOM; y++)
        for (int x = BOARD_LEFT + 1; x < BOARD_RIGHT; x++) {
            is_done = true;
            for (int i = 0; i < s->length; i++)
                if (x == s->u[i].pos.X && y == s->u[i].pos.Y)
                    is_done = false;
            if (is_done)
                list_appenda(vcrds, sizeof(COORD), &(COORD) {x, y});
        }

    f->pos = *(COORD *) list_nth_data(vcrds, random(0, list_count(vcrds) - 1));
    f->sym = *(const char *) list_nth_data_rand(fc->syms);
    f->color = *(int *) list_nth_data_rand(fc->colors);
    f->score = *(int *) list_nth_data_rand(fc->scores);

    list_free(vcrds, NULL);
}

void
food_free (struct food * f)
{
    free(f);
}
