#include "basetypes.h"

/* Moves menu focus and sends leave and enter events through menu and element callbacks. */

typedef struct Element {
    char pad0[0xC];
    s16 id;
    u16 kind;
} Element;

typedef struct Entry {
    Element *primary;
    s32 owner;
    Element *focus;
    char padC[0x10];
} Entry;

typedef struct Menu {
    s32 (*callback)(s32 event, s32, s32, s32);
    s32 current;
    char pad8[4];
    Entry *entries;
    char pad10[0x510];
    s32 handled;
    char pad524[4];
    s32 locked;
} Menu;

extern Menu *D_8014D080;
extern Element *func_80299170(s32 id);
extern s32 func_8029A7E4(s32 kind);
extern s32 func_80411E70(s32 id);
extern s32 func_80298A34(s32 event, s32, s32, s32);
extern s32 func_80297E3C(s32 id, s32 event, s32, s32, s32);

static inline s32 send_event(s32 value, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Menu *manager;
    s32 locked;
    s32 index;
    s32 minusOne;
    s32 saved;
    s32 result;

    if (func_80411E70(value) != 0) {
        if (value != D_8014D080->entries[D_8014D080->current].owner) {
            return 0;
        }
    }
    manager = D_8014D080;
    locked = manager->locked;
    index = manager->current;
    minusOne = -1;
    if ((value == locked) || (index == minusOne)) {
        return 0;
    }
    if (D_8014D080->callback != 0) {
        saved = D_8014D080->handled;
        D_8014D080->handled = 0;
        result = D_8014D080->callback(arg1, arg2, arg3, arg4);
        if (D_8014D080->handled == 1) {
            D_8014D080->handled = saved;
            return result;
        }
        D_8014D080->handled = saved;
    }
    if (value == *(s16 *)((char *)D_8014D080->entries[D_8014D080->current].primary + 0xC)) {
        result = func_80298A34(arg1, arg2, arg3, arg4);
    } else {
        result = func_80297E3C(value, arg1, arg2, arg3, arg4);
    }
    return result;
}

void func_8029A1D4(s32 id) {
    Element *previous;

    if (func_8029A7E4(func_80299170(id)->kind) == 0) {
        return;
    }
    previous = D_8014D080->entries[D_8014D080->current].focus;
    if (previous != 0) {
        send_event(previous->id, 0x10,0,0,0);
    }
    D_8014D080->entries[D_8014D080->current].focus = func_80299170(id);
    send_event(id, 0xF,0,0,0);
}
