#include "basetypes.h"

/* Walks the item list at offset 8 of a menu and sets the byte at offset 0x10 of every item
   whose kind at 0xE is not 8 to 100. Returns zero. */
struct Item {
    s32 pad0;
    struct Item *next;
    char pad8[0xE - 8];
    u16 kind;
    u8 alpha;
};

struct Menu {
    char pad0[8];
    struct Item *items;
    char padC[0x54 - 0xC];
    s32 state;
};

s32 func_8041AFC0(struct Menu *menu) {
    struct Item *item;

    for (item = menu->items; item != 0; item = item->next) {
        if (item->kind != 8) {
            item->alpha = 100;
        }
    }
    return 0;
}
