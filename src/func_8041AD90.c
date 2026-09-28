#include "basetypes.h"

/* Selects entry i of the 20-byte records at offset 0x48 of an object: records the index at 0x110
   and points word 0x38 of the object at 0x44 to that record. func_8041AD84 returns the index. */
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
};

void func_8041AD90(struct Menu *menu, s32 index) {
    menu->index = index;
    menu->owner->selected = &menu->entries[index];
}
