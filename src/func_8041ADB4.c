#include "basetypes.h"

/* Appends to a menu: passes the next free 20-byte entry at offset 0x48, selected by the count at
   0x114, to func_802A125C and increments the count. func_8041AD90 selects an entry. */
struct Entry {
    char data[20];
};

struct Menu {
    char pad0[0x48];
    struct Entry entries[(0x110 - 0x48) / 20];
    s32 index;
    s32 count;
};

extern void func_802A125C(struct Entry *);

void func_8041ADB4(struct Menu *menu) {
    func_802A125C(&menu->entries[menu->count]);
    menu->count++;
}
