#include "basetypes.h"

/* Moves the menu cursor on event 1: when the current slot's successor in the 28-byte slot table
   (word at D_800E46A4) exists and func_80265670 reports it set in the menu's flags at 0xA74, it
   plays sound 0xE7D, shades the old window 0x46 or 0xAA by whether the old slot is set in the
   flags at 0xA79, opens the successor's window (halfword at D_800E4696) under arg0, refreshes
   through func_8042829C and, by the mode byte at 0xD of D_801462C8, through func_80428388 and
   func_80427CE8 unless the mode is 2 and func_80427B98 when it is 4; returns zero. Adapted from func_80428A30 with the successor word changed. */
struct Window {
    char pad0[0x10];
    u8 shade;
};

struct Menu {
    char pad0[0xA44];
    s32 current;
    struct Window *window;
    char padA4C[0xA6C - 0xA4C];
    s32 idle;
    char padA70[0xA74 - 0xA70];
    u8 reachable[5];
    u8 visited[5];
};

extern struct Menu *D_800E4690;
extern u16 D_800E4696[];
extern s32 D_800E46A4[];
extern u8 D_801462C8[];
extern void func_8029A73C(void);
extern s32 func_80265670(u8 *, s32);
extern void func_8025DF54(s32);
extern struct Window *func_8040ECB0(void *, s32);
extern void func_8042829C(void);
extern void func_80428388(void);
extern void func_80427CE8(void);
extern void func_80427B98(void);

s32 func_80428CF8(void *parent, s32 arg1, s32 arg2, s32 event) {
    s32 next;
    s32 set;
    u8 *options;

    func_8029A73C();
    if (event != 1) {
        return 0;
    }
    next = D_800E46A4[D_800E4690->current * 7];
    if (next == -1) {
        return 0;
    }
    set = func_80265670(D_800E4690->reachable, next);
    if (set != 1) {
        return 0;
    }
    func_8025DF54(0xE7D);
    if (func_80265670(D_800E4690->visited, D_800E4690->current) == set) {
        D_800E4690->window->shade = 0x46;
    } else {
        D_800E4690->window->shade = 0xAA;
    }
    D_800E4690->current = next;
    D_800E4690->window = func_8040ECB0(parent, D_800E4696[next * 14]);
    func_8042829C();
    options = D_801462C8;
    if (options[0xD] != 2) {
        func_80428388();
        D_800E4690->idle = 0;
        func_80427CE8();
    }
    if (options[0xD] == 4) {
        func_80427B98();
    }
    return 0;
}
