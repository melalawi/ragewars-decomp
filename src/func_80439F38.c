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

#if defined(VERSION_DE)
enum { MENU_80439F38_986 = 980, MENU_80439F38_987 = 981 };
#elif defined(VERSION_EU_X)
enum { MENU_80439F38_986 = 990, MENU_80439F38_987 = 991 };
#else
enum { MENU_80439F38_986 = 986, MENU_80439F38_987 = 987 };
#endif

s32 func_80439F38(void) {
    /* FAKEMATCH: preserve resident jump-table labels and recovered dispatch schedule. */
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&wait_20, &&wait_15, &&wait_10, &&wait_3
    };
    s32 time;
    u32 setting;

    func_8029A73C();
    switch (func_8029AA08()) {
    case MENU_80439F38_986:
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
    case MENU_80439F38_987:
        func_8042EB68(-1);
        func_8029A8A8();
        return 0;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCC20_14[] = {0x00439F98U, 0x00439FB0U, 0x00439FA0U, 0x00439FA8U, 0x00439FA8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1FA0_14[] = {0x00439F98U, 0x00439FB0U, 0x00439FA0U, 0x00439FA8U, 0x00439FA8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE5F0_14[] = {0x0043AC88U, 0x0043ACA0U, 0x0043AC90U, 0x0043AC98U, 0x0043AC98U};
#endif
