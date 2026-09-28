#include "basetypes.h"

/* Moves a menu cursor through its entry table in one direction (16 to 19, reading the step byte at that offset of the current entry), wrapping at either end, recording the reverse step on the new entry when its flag allows, until it reaches an entry flagged 0x1800000 whose descriptor word at 0x1C is set. */
struct Target {
    char pad[0x1C];
    s32 ready;
};

struct Entry {
    char pad0[8];
    s32 flags;
    char pad0C[4];
    s8 back[4];
    char pad14[4];
    struct Target *target;
    char pad1C[0xC];
};

struct Menu {
    s16 cursor;
    char pad2[0xA];
    struct Entry *entries;
    s32 count;
};

void func_8044121C(struct Menu *menu, u8 dir) {
    struct Entry *entry;
    s32 old;

    entry = &menu->entries[menu->cursor];
    do {
        old = menu->cursor;
        menu->cursor += ((s8 *)entry)[dir];
        if (menu->cursor < 0) {
            menu->cursor = menu->count - 1;
        } else if (menu->cursor >= menu->count) {
            menu->cursor = 0;
        }
        entry = &menu->entries[menu->cursor];
        old -= menu->cursor;
        switch (dir) {
        case 16:
            if (entry->flags & 0x80000) {
                entry->back[1] = old;
            }
            break;
        case 17:
            if (entry->flags & 0x40000) {
                entry->back[0] = old;
            }
            break;
        case 18:
            if (entry->flags & 0x200000) {
                entry->back[3] = old;
            }
            break;
        case 19:
            if (entry->flags & 0x100000) {
                entry->back[2] = old;
            }
            break;
        }
    } while ((entry->flags & 0x1800000) != 0x1800000 || entry->target->ready == 0);
}
