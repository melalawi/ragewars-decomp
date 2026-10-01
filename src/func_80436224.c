#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C: 0x3D5 waits 1 through
   func_80299368; 0x3D3 plays cue 0x34 through func_8025E2F4 when func_8025E2E4 reports sound on,
   resets through func_802A338C, sets the timer at 0x1C of screen D_800E5554 by setting
   D_801462D5 through jtbl_800E1F20 (10, 15 or 10, and 20 for any other setting) and shows the
   screen through func_8043C458. Returns zero. */
struct Screen {
    char pad0[0x1C];
    s32 timer;
};

extern struct Screen *D_800E5554;
extern u8 D_801462D5;
extern void *jtbl_800E1F20[];
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_80299368(s32);
extern s32 func_8025E2E4(void);
extern void func_8025E2F4(s32);
extern void func_802A338C(void);
extern void func_8043C458(struct Screen *);

s32 func_80436224(void) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&timer_10, &&timer_15, &&timer_10_again, &&timer_20
    };
    u32 setting;

    func_8029A73C();
    switch (func_8029AA08()) {
    case 0x3D5:
        func_80299368(1);
        return 0;
    case 0x3D3:
        if (func_8025E2E4() != 0) {
            func_8025E2F4(0x34);
        }
        func_802A338C();
        setting = D_801462D5;
        if (setting >= 5) {
            goto timer_20;
        }
        goto *jtbl_800E1F20[setting];
    timer_10:
        D_800E5554->timer = 10;
        goto show;
    timer_15:
        D_800E5554->timer = 15;
        goto show;
    timer_10_again:
        D_800E5554->timer = 10;
        goto show;
    timer_20:
        D_800E5554->timer = 20;
    show:
        func_8043C458(D_800E5554);
        return 0;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCBA0_14[] = {0x004362DCU, 0x004362ACU, 0x004362BCU, 0x004362CCU, 0x004362CCU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1F20_14[] = {0x004362DCU, 0x004362ACU, 0x004362BCU, 0x004362CCU, 0x004362CCU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE570_14[] = {0x00436E2CU, 0x00436DFCU, 0x00436E0CU, 0x00436E1CU, 0x00436E1CU};
#endif
