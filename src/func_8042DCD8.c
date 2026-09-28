#include "basetypes.h"

/* Runs the screen D_800E5430 each frame: past stage 1 of D_800E28E0 it only calls func_802A338C;
   otherwise it calls func_802A3358 and, while its menu reports 3, counts the delay at 0xC down and
   on expiry scrolls the list at 0x8 back one row, wrapping to the menu's own row count, and
   restarts the delay at 3; when the menu reports 4 it calls func_8029A73C and leaves through
   func_80299368 with the stored target or func_8029A8A8 when that is -1. Returns zero. Written
   from the assembly as a switch on the menu result, matching on the first trial. */

struct List {
    char pad[0x16];
    s16 row;
    char pad18[0x1A - 0x18];
    s16 visible;
};

struct Menu {
    char pad[0x44];
    struct List *list;
};

struct State {
    struct Menu *menu;
    char pad4[0x8 - 0x4];
    struct List *list;
    s32 delay;
    s32 target;
};

extern s32 D_800E28E0;
extern struct State *D_800E5430;
extern void func_802A338C();
extern void func_802A3358();
extern s32 func_8041A4F0(struct Menu *);
extern void func_8029A73C();
extern void func_80299368(s32);
extern void func_8029A8A8();

s32 func_8042DCD8(void) {
    s32 result;

    if (D_800E28E0 >= 2) {
        func_802A338C();
        return 0;
    }
    func_802A3358();
    switch (result = func_8041A4F0(D_800E5430->menu)) {
    case 3:
        if (--D_800E5430->delay <= 0) {
            D_800E5430->list->row--;
            if (D_800E5430->list->row + D_800E5430->list->visible < 0) {
                D_800E5430->list->row = D_800E5430->menu->list->visible;
            }
            D_800E5430->delay = result;
        }
        break;
    case 4:
        func_8029A73C();
        if (D_800E5430->target != -1) {
            func_80299368(D_800E5430->target);
            return 0;
        }
        func_8029A8A8();
        break;
    default:
        return 0;
    }
    return 0;
}
