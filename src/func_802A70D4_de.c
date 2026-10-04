#include "span_1000/code_802A776C.h"
#include "types.h"

/* Moves a menu's cursor at 0xE4 over its four 0x38-byte entries, forward when arg1 is zero and backward otherwise, wrapping around and skipping entries whose word at 0x4 is zero; returns the entry landed on. */




s32 func_802A70D4_de(Menu_func_802A70D4_de *menu, s32 backward) {
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
