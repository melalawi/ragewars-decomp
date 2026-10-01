#include "basetypes.h"

/* Builds screen state D_800E5694 under a parent window: allocates its 0x50 bytes, opens lists 0x1C9, 0x1D1 and 0x1CB filled with the entries in D_800D74xx at 0x0C, 0x08 and 0x10, opens panels 0x1CF and 0x1CD at 0x0 and 0x4, opens window 0x1C7 at 0x18, clears the word at 0x14, resets through func_80436AD8(0) and returns zero.
   Adapted from func_8041C32C with the window openings changed to the list, panel and window calls of this screen and the list entry words declared as arrays. */

struct Screen {
    void *panels[2];
    void *listB;
    void *listA;
    void *listC;
    s32 selection;
    void *window;
};

extern struct Screen *D_800E5694;
extern s32 D_800D749C[];
extern s32 D_800D74A0[];
extern s32 D_800D74D0[];
extern s32 D_800D74DC[];
extern s32 D_800D74E0[];
extern s32 D_800D74E4[];
extern s32 D_800D74E8[];
extern struct Screen *func_80252FFC(s32);
extern void func_8041B190(s32);
extern void *func_8041AC40(s32, s32);
extern void func_8041ADB4(void *, s32);
extern void *func_8041A600(s32, s32, s32);
extern void *func_8040ECB0(void *, s32);
extern void func_80436AD8(s32);

s32 func_80437074(void *parent) {
    void *list;

    D_800E5694 = func_80252FFC(0x50);
    func_8041B190(0x1C6);
    list = func_8041AC40(0x1C9, 0x1CA);
    D_800E5694->listA = list;
    func_8041ADB4(list, D_800D74D0[0]);
    func_8041ADB4(D_800E5694->listA, D_800D74DC[0]);
    list = func_8041AC40(0x1D1, 0x1D2);
    D_800E5694->listB = list;
    func_8041ADB4(list, D_800D749C[0]);
    func_8041ADB4(D_800E5694->listB, D_800D74A0[0]);
    D_800E5694->panels[0] = func_8041A600(0x1CF, 0x1D0, 0xFF);
    D_800E5694->panels[1] = func_8041A600(0x1CD, 0x1CE, 0xFF);
    list = func_8041AC40(0x1CB, 0x1CC);
    D_800E5694->listC = list;
    func_8041ADB4(list, D_800D74E0[0]);
    func_8041ADB4(D_800E5694->listC, D_800D74E4[0]);
    func_8041ADB4(D_800E5694->listC, D_800D74E8[0]);
    func_8041B190(0x1C8);
    D_800E5694->window = func_8040ECB0(parent, 0x1C7);
    D_800E5694->selection = 0;
    func_80436AD8(0);
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2150_4[] = {0x80, 0x0C, 0xF4, 0xBC};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D74D0_4[] = {0x80, 0x0D, 0x48, 0x3C};
#endif
