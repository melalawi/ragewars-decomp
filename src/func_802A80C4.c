#include "basetypes.h"

/* Moves a menu's cursor at 0xE4 over its four 0x38-byte entries, forward when arg1 is zero and backward otherwise, wrapping around and skipping entries whose word at 0x4 is zero; returns the entry landed on. */
typedef struct Entry {
    char pad0[0x4];
    s32 active;
    char pad8[0x38 - 0x8];
} Entry;

typedef struct Menu {
    Entry entries[4];
    char padE0[0xE4 - 0xE0];
    u16 cursor;
} Menu;

s32 func_802A80C4(Menu *menu, s32 backward) {
    u16 cursor;

    if (backward == 0) {
        do {
            menu->cursor++;
            menu->cursor %= 4;
        } while (menu->entries[menu->cursor].active == 0);
        return menu->cursor;
    }
    do {
        cursor = --menu->cursor;
        if (cursor >= 4) {
            cursor = 3;
        }
        menu->cursor = cursor;
    } while (menu->entries[cursor].active == 0);
    return cursor;
}
