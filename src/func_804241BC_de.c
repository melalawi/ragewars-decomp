#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80423280.h"
#include "types.h"

/* Runs the screen D_800E4600 each frame: past stage 1 of D_800E28E0 it only calls func_802A2394_de;
   otherwise it calls func_802A2360_de and, while the opening delay at 0xC runs, counts it down and
   calls func_8041A47C_de on its menu when it expires; after that, while the menu reports 3, it counts
   the scroll delay at 0x14 down and on expiry scrolls the list at 0x8 back one row, wrapping to
   the menu's own row count, and restarts the delay at 3, and when the menu reports 4 it calls
   func_8029973C_de and leaves through func_80298368_de with the target at 0x18. Returns zero. Adapted
   from func_8042DAF8_de with the opening delay added, the scroll delay and target moved and the -1
   target test removed. */







extern s32 D_800DE890;
extern struct State_func_804241BC_de *D_800E05B0_de;
extern void func_802A2394_de();
extern void func_802A2360_de();
extern s32 func_8041A470_de(struct Menu_func_804241BC_de *);
extern void func_8041A47C_de(struct Menu_func_804241BC_de *);
extern void func_8029973C_de();
extern void func_80298368_de(s32);

s32 func_804241BC_de(void) {
    s32 result;

    if (D_800DE890 >= 2) {
        func_802A2394_de();
        return 0;
    }
    func_802A2360_de();
    if (D_800E05B0_de->opening > 0) {
        if (--D_800E05B0_de->opening == 0) {
            func_8041A47C_de(D_800E05B0_de->menu);
            return 0;
        }
        return 0;
    }
    switch (result = func_8041A470_de(D_800E05B0_de->menu)) {
    case 3:
        if (--D_800E05B0_de->delay <= 0) {
            D_800E05B0_de->list->unk16--;
            if (D_800E05B0_de->list->unk16 + D_800E05B0_de->list->unk1A < 0) {
                D_800E05B0_de->list->unk16 = D_800E05B0_de->menu->list->unk1A;
            }
            D_800E05B0_de->delay = result;
        }
        break;
    case 4:
        func_8029973C_de();
        func_80298368_de(D_800E05B0_de->target);
        break;
    default:
        return 0;
    }
    return 0;
}
