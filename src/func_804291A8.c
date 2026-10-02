#include "basetypes.h"
#include "shared/menu_transition.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C. 0x1D9 sends code 3 to
   func_8042EB68 unless func_8029A9A0(0) reports 0x16; then it stops the match objects at D_80145088
   and 0x48 bytes before it, releases D_8011FE88, restarts func_8025470C when func_8025471C reports
   it idle, sets the word at 0x17F0 of the objects to 8 and sends 20, 10, 15 or 10 by the byte at
   0x124D through jtbl_800E1A40, or 3 for any other value. 0x1DA sends 11 when func_8029A9A0(0)
   reports 11 and -1 otherwise. Either then calls func_8029A8A8. Returns zero. */
extern char D_80145088[];
extern char D_8011FE88[];
extern void *jtbl_800E1A40[];
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern s32 func_8029A9A0(s32);
extern void func_8044AFC0(void *, s32);
extern void func_8044A600(void *, s32, s32);
extern void func_80286A78(void *, s32, s32);
extern s32 func_8025471C(void);
extern void func_8025470C(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8(void);


#if defined(VERSION_DE)
enum { MENU_804291A8_473 = 469, MENU_804291A8_474 = 470 };
#elif defined(VERSION_EU_X)
enum { MENU_804291A8_473 = 477, MENU_804291A8_474 = 478 };
#else
enum { MENU_804291A8_473 = 473, MENU_804291A8_474 = 474 };
#endif

s32 func_804291A8(void) {
    /* FAKEMATCH: preserve resident jump-table labels and recovered dispatch schedule. */
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&send_20, &&send_10, &&send_15, &&send_10_again, &&send_3
    };
    char *objects;
    s32 code;
    u32 level;

    func_8029A73C();
    switch (func_8029AA08()) {
    case MENU_804291A8_473:
        if (func_8029A9A0(0) != 0x16) {
            goto send_3;
        }
        objects = D_80145088;
        func_8044AFC0(objects, 0);
        func_8044A600(objects - 0x48, 0, 0);
        func_80286A78(D_8011FE88, 0, 0);
        if (func_8025471C() == 0) {
            func_8025470C(1);
        }
        level = (u8)objects[0x124D];
        ((MatchMenuObjects *)(objects))->transition = 8;
        if (level >= 5) {
            goto send_3;
        }
        goto *jtbl_800E1A40[level];
    send_20:
        code = 20;
        goto send;
    send_10:
        code = 10;
        goto send;
    send_15:
        code = 15;
        goto send;
    send_10_again:
        code = 10;
        goto send;
    send_3:
        code = 3;
        goto send;
    case MENU_804291A8_474:
        if (func_8029A9A0(0) == 11) {
            code = 11;
        } else {
            code = -1;
        }
    send:
        func_8042EB68(code);
        func_8029A8A8();
        return 0;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC6C0_14[] = {0x00429270U, 0x00429278U, 0x00429280U, 0x00429288U, 0x00429288U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1A40_14[] = {0x00429270U, 0x00429278U, 0x00429280U, 0x00429288U, 0x00429288U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE090_14[] = {0x00429BF0U, 0x00429BF8U, 0x00429C00U, 0x00429C08U, 0x00429C08U};
#endif
