#include "basetypes.h"

/* Acts on the mode of the menu held first in the block D_800E4510 points to: in mode 4 it calls
   func_8029A73C and then either func_80299368 with the block's word at 0x20, when that is not -1,
   or func_8029A8A8. Returns zero. */
struct State {
    void *menu;
    char pad4[0x20 - 4];
    s32 value;
};

extern struct State *D_800E4510;
extern s32 func_8041A4F0(void *);
extern void func_8029A73C();
extern void func_80299368(s32);
extern void func_8029A8A8();

s32 func_8042340C(void) {
    switch (func_8041A4F0(D_800E4510->menu)) {
    case 3:
        break;
    case 4:
        func_8029A73C();
        if (D_800E4510->value != -1) {
            func_80299368(D_800E4510->value);
        } else {
            func_8029A8A8();
        }
        break;
    }
    return 0;
}
