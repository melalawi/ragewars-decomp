#include "basetypes.h"

/* When the fourth argument is one, advances a menu's selection at offset 0x110 to the next of its
   0x114 entries, wrapping to the first, points word 0x38 of its owner at 0x44 to the selected
   20-byte entry at 0x48 and plays sound 0xE81. Returns zero. */
struct Entry {
    char data[20];
};

struct Owner {
    char pad[0x38];
    struct Entry *selected;
};

struct Menu {
    char pad0[0x44];
    struct Owner *owner;
    struct Entry entries[(0x110 - 0x48) / 20];
    s32 index;
    s32 count;
};

extern void func_8025DF54(s32);

s32 func_8041B078(struct Menu *menu, void *second, void *third, s32 active) {
    struct Owner *owner;

    if (active == 1) {
        owner = menu->owner;
        if (++menu->index >= menu->count) {
            menu->index = 0;
        }
        owner->selected = &menu->entries[menu->index];
        func_8025DF54(0xE81);
        return 0;
    }
    return 0;
}
