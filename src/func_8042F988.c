#include "basetypes.h"

/* Runs the block D_800E54A4 points to on event 1: in phase 3 at 0x4C it counts each player's timer
   at 0x14 of its 2920-byte record at 0x58 down and, when one expires, marks it -1 and resets that
   player through func_80404E28 and func_804337EC between func_802A338C and func_802A3358; then it
   advances the menu at 0x8 with func_8043C260 and func_8043C484 while func_8043C4E8 reports 1, and
   once it reports 2 in phase 5 at 0x54 calls func_8029A73C and moves on through func_8042D1BC,
   func_8042D214 or func_80438BD0 as the cartridge's jump table jtbl_800E1BB0 chooses for option
   byte D_801462D5 up to 4. Returns zero. */

struct Player {
    char pad0[0x14];
    s32 timer;
    char pad18[0xB68 - 0x18];
};

struct Block {
    char pad0[0x8];
    char menu[0x4C - 0x8];
    s32 phase4C;
    char pad50[0x54 - 0x50];
    s32 phase54;
    struct Player players[4];
};

extern struct Block *D_800E54A4;
extern u8 D_801462D5;
extern void *jtbl_800E1BB0[];
extern void func_802A338C();
extern void func_802A3358();
extern void func_80404E28(s32);
extern void func_804337EC(s32);
extern s32 func_8043C4E8(void *);
extern void func_8043C260(void *);
extern void func_8043C484(void *);
extern void func_8029A73C();
extern void func_8042D1BC();
extern void func_8042D214();
extern void func_80438BD0();

s32 func_8042F988(void *arg0, void *arg1, s32 event) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&option_a, &&option_b, &&option_c, &&done
    };
    s32 i;
    u32 option;

    if (event != 1) {
        return 0;
    }
    if (D_800E54A4->phase4C == 3) {
        for (i = 0; i < 4; i++) {
            if (D_800E54A4->players[i].timer > 0 && --D_800E54A4->players[i].timer == 0) {
                D_800E54A4->players[i].timer = -1;
                func_802A338C();
                func_80404E28(i);
                func_804337EC(i);
                func_802A3358();
            }
        }
    }
    if (func_8043C4E8(D_800E54A4->menu) != 1) {
        return 0;
    }
    func_8043C260(D_800E54A4->menu);
    func_8043C484(D_800E54A4->menu);
    if (func_8043C4E8(D_800E54A4->menu) != 2) {
        return 0;
    }
    if (D_800E54A4->phase54 != 5) {
        return 0;
    }
    func_8029A73C();
    option = D_801462D5;
    if (option >= 5) {
        goto done;
    }
    goto *jtbl_800E1BB0[option];
option_a:
    func_8042D1BC();
    return 0;
option_b:
    func_8042D214();
    return 0;
option_c:
    func_80438BD0();
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC830_14[] = {0x0042FAB8U, 0x0042FAD8U, 0x0042FAC8U, 0x0042FAD8U, 0x0042FAD8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1BB0_14[] = {0x0042FAB8U, 0x0042FAD8U, 0x0042FAC8U, 0x0042FAD8U, 0x0042FAD8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE200_14[] = {0x00430578U, 0x00430598U, 0x00430588U, 0x00430598U, 0x00430598U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E93C0_14[] = {0x004306C8U, 0x004306E8U, 0x004306D8U, 0x004306E8U, 0x004306E8U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDB80_14[] = {0x0042F8D8U, 0x0042F8F8U, 0x0042F8E8U, 0x0042F8F8U, 0x0042F8F8U};
#endif
