#include "common/types.h"
#include "span_16E000/code_80435CF0.h"

#include "types.h"


/* Handles the menu message func_80299A08_de reports after func_8029973C_de: 0x3D5 waits 1 through
   func_80298368_de; 0x3D3 plays cue 0x34 through func_8025E2D4_de when func_8025E2C4_de reports sound on,
   resets through func_802A2394_de, sets the timer at 0x1C of screen D_800E1504 by setting
   D_80142215 through jtbl_800DDEF0 (10, 15 or 10, and 20 for any other setting) and shows the
   screen through func_8043C278_de. Returns zero. */
extern MenuRules *D_800E1504;
extern u8 D_80142215;
extern void *jtbl_800DDEF0[];
extern void func_8029973C_de(void);
extern s32 func_80299A08_de(void);
extern void func_80298368_de(s32);
extern s32 func_8025E2C4_de(void);
extern void func_8025E2D4_de(s32);
extern void func_802A2394_de(void);
extern void func_8043C278_de(MenuRules *);

#if defined(VERSION_DE)
enum { MENU_80436224_979 = 973, MENU_80436224_981 = 975 };
#elif defined(VERSION_EU_X)
enum { MENU_80436224_979 = 983, MENU_80436224_981 = 985 };
#else
enum { MENU_80436224_979 = 979, MENU_80436224_981 = 981 };
#endif

s32 func_80436044_de(void) {
    /* FAKEMATCH: preserve resident jump-table labels and recovered dispatch schedule. */
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&timer_10, &&timer_15, &&timer_10_again, &&timer_20
    };
    u32 setting;

    func_8029973C_de();
    switch (func_80299A08_de()) {
    case MENU_80436224_981:
        func_80298368_de(1);
        return 0;
    case MENU_80436224_979:
        if (func_8025E2C4_de() != 0) {
            func_8025E2D4_de(0x34);
        }
        func_802A2394_de();
        setting = D_80142215;
        if (setting >= 5) {
            goto timer_20;
        }
        goto *jtbl_800DDEF0[setting];
    timer_10:
        D_800E1504->locked = 10;
        goto show;
    timer_15:
        D_800E1504->locked = 15;
        goto show;
    timer_10_again:
        D_800E1504->locked = 10;
        goto show;
    timer_20:
        D_800E1504->locked = 20;
    show:
        func_8043C278_de(D_800E1504);
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
