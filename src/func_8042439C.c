#include "basetypes.h"

/* Runs the screen D_800E4600 each frame: past stage 1 of D_800E28E0 it only calls func_802A338C;
   otherwise it calls func_802A3358 and, while the opening delay at 0xC runs, counts it down and
   calls func_8041A4FC on its menu when it expires; after that, while the menu reports 3, it counts
   the scroll delay at 0x14 down and on expiry scrolls the list at 0x8 back one row, wrapping to
   the menu's own row count, and restarts the delay at 3, and when the menu reports 4 it calls
   func_8029A73C and leaves through func_80299368 with the target at 0x18. Returns zero. Adapted
   from func_8042DCD8 with the opening delay added, the scroll delay and target moved and the -1
   target test removed. */

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
    s32 opening;
    char pad10[0x14 - 0x10];
    s32 delay;
    s32 target;
};

extern s32 D_800E28E0;
extern struct State *D_800E4600;
extern void func_802A338C();
extern void func_802A3358();
extern s32 func_8041A4F0(struct Menu *);
extern void func_8041A4FC(struct Menu *);
extern void func_8029A73C();
extern void func_80299368(s32);

s32 func_8042439C(void) {
    s32 result;

    if (D_800E28E0 >= 2) {
        func_802A338C();
        return 0;
    }
    func_802A3358();
    if (D_800E4600->opening > 0) {
        if (--D_800E4600->opening == 0) {
            func_8041A4FC(D_800E4600->menu);
            return 0;
        }
        return 0;
    }
    switch (result = func_8041A4F0(D_800E4600->menu)) {
    case 3:
        if (--D_800E4600->delay <= 0) {
            D_800E4600->list->row--;
            if (D_800E4600->list->row + D_800E4600->list->visible < 0) {
                D_800E4600->list->row = D_800E4600->menu->list->visible;
            }
            D_800E4600->delay = result;
        }
        break;
    case 4:
        func_8029A73C();
        func_80299368(D_800E4600->target);
        break;
    default:
        return 0;
    }
    return 0;
}
