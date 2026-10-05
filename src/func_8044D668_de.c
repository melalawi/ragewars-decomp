#include "span_16E000/code_8044E2B8.h"
#include "types.h"

/* Spawns the pickups of a level: between func_802458D8_de and func_802458C4_de it passes every item of both item tables whose kind is 1, 2, 4 or 10 to func_8028787C_de. */




extern void func_802458D8_de(void);
extern void func_802458C4_de(void);
extern void func_8028787C_de(Level *, Item_func_8044D668_de *);

void func_8044D668_de(Level *level) {
    s32 i;
    s32 n;
    Item_func_8044D668_de *item;

    func_802458D8_de();
    n = level->counts[0];
    for (i = 0; i < n; i++) {
        item = &level->items[0][i];
        if (item->kind == 1 || item->kind == 4 || item->kind == 2 || item->kind == 10) {
            func_8028787C_de(level, item);
        }
    }
    n = level->counts[1];
    for (i = 0; i < n; i++) {
        item = &level->items[1][i];
        if (item->kind == 1 || item->kind == 4 || item->kind == 2 || item->kind == 10) {
            func_8028787C_de(level, item);
        }
    }
    func_802458C4_de();
}
