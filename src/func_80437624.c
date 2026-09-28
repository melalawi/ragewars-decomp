#include "basetypes.h"

/* Runs the screen D_800E5780 each frame: when its menu reports 1 for the first time it marks the
   word at 0x14 and, unless bit 0 of the flag set at 0x7E of the first 400-byte record of
   D_80102B00 is set, passes 0x13B to func_8029A1D4; while the menu reports 3 it counts the delay
   at 0xC down and on expiry scrolls the list at 0x8 back one row, wrapping to the menu's own row
   count, and restarts the delay at 3; when the menu reports 4 it calls func_8029A73C and leaves
   through func_80299368 with the target at 0x10, or 3 when that is -1. Returns zero. Adapted from
   func_8042DCD8 with the stage test removed, case 1 added and the -1 target mapped to 3. */

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
    s32 seen;
};

extern struct State *D_800E5780;
extern u8 D_80102B00[];
extern s32 func_8041A4F0(struct Menu *);
extern s32 func_80265670(u8 *, s32);
extern void func_8029A1D4(s32);
extern void func_8029A73C();
extern void func_80299368(s32);

s32 func_80437624(void) {
    s32 result;
    s32 target;

    switch (result = func_8041A4F0(D_800E5780->menu)) {
    case 1:
        if (D_800E5780->seen != 0) {
            return 0;
        }
        D_800E5780->seen = result;
        if (func_80265670(D_80102B00 + 0x7E, 0) != 0) {
            return 0;
        }
        func_8029A1D4(VV_013B);
        return 0;
    case 3:
        if (--D_800E5780->delay <= 0) {
            D_800E5780->list->row--;
            if (D_800E5780->list->row + D_800E5780->list->visible < 0) {
                D_800E5780->list->row = D_800E5780->menu->list->visible;
            }
            D_800E5780->delay = result;
        }
        break;
    case 4:
        func_8029A73C();
        target = D_800E5780->target;
        if (target == -1) {
            target = 3;
        }
        func_80299368(target);
        break;
    default:
        return 0;
    }
    return 0;
}
