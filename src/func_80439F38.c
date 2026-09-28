#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C: 0x3DA waits through
   func_80299368 for a time chosen by setting D_801462D5 through jtbl_800E1FA0 (20, 15 or 10, and
   3 for any other setting); 0x3DB sends code -1 to func_8042EB68 and calls func_8029A8A8.
   Returns zero. */
extern u8 D_801462D5;
extern void *jtbl_800E1FA0[];
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_80299368(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8(void);

s32 func_80439F38(void) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&wait_20, &&wait_15, &&wait_10, &&wait_3
    };
    s32 time;
    u32 setting;

    func_8029A73C();
    switch (func_8029AA08()) {
    case 0x3DA:
        setting = D_801462D5;
        if (setting >= 5) {
            goto wait_3;
        }
        goto *jtbl_800E1FA0[setting];
    wait_20:
        time = 20;
        goto wait;
    wait_15:
        time = 15;
        goto wait;
    wait_10:
        time = 10;
        goto wait;
    wait_3:
        time = 3;
    wait:
        func_80299368(time);
        return 0;
    case 0x3DB:
        func_8042EB68(-1);
        func_8029A8A8();
        return 0;
    }
    return 0;
}
