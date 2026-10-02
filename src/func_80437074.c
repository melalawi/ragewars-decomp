#include "basetypes.h"
#include "shared/menu_list_screen.h"

/* Builds screen state D_800E5694 under a parent window: allocates its 0x50 bytes, opens lists 0x1C9, 0x1D1 and 0x1CB filled with the entries in D_800D74xx at 0x0C, 0x08 and 0x10, opens panels 0x1CF and 0x1CD at 0x0 and 0x4, opens window 0x1C7 at 0x18, clears the word at 0x14, resets through func_80436AD8(0) and returns zero.
   Adapted from func_8041C32C with the window openings changed to the list, panel and window calls of this screen and the list entry words declared as arrays. */

extern MenuListScreen *D_800E5694;
extern s32 D_800D749C[];
extern s32 D_800D74A0[];
extern s32 D_800D74D0[];
extern s32 D_800D74DC[];
extern s32 D_800D74E0[];
extern s32 D_800D74E4[];
extern s32 D_800D74E8[];
extern MenuListScreen *func_80252FFC(s32);
extern void func_8041B190(s32);
extern void *func_8041AC40(s32, s32);
extern void func_8041ADB4(void *, s32);
extern void *func_8041A600(s32, s32, s32);
extern void *func_8040ECB0(void *, s32);
extern void func_80436AD8(s32);

#if defined(VERSION_DE)
enum { MENU_80437074_454 = 450, MENU_80437074_455 = 451, MENU_80437074_456 = 452, MENU_80437074_457 = 453, MENU_80437074_458 = 454, MENU_80437074_459 = 455, MENU_80437074_460 = 456, MENU_80437074_461 = 457, MENU_80437074_462 = 458, MENU_80437074_463 = 459, MENU_80437074_464 = 460, MENU_80437074_465 = 461, MENU_80437074_466 = 462 };
#else
enum { MENU_80437074_454 = 454, MENU_80437074_455 = 455, MENU_80437074_456 = 456, MENU_80437074_457 = 457, MENU_80437074_458 = 458, MENU_80437074_459 = 459, MENU_80437074_460 = 460, MENU_80437074_461 = 461, MENU_80437074_462 = 462, MENU_80437074_463 = 463, MENU_80437074_464 = 464, MENU_80437074_465 = 465, MENU_80437074_466 = 466 };
#endif

s32 func_80437074(void *parent) {
    void *list;

    D_800E5694 = func_80252FFC(0x50);
    func_8041B190(MENU_80437074_454);
    list = func_8041AC40(MENU_80437074_457, MENU_80437074_458);
    D_800E5694->listA = list;
    func_8041ADB4(list, D_800D74D0[0]);
    func_8041ADB4(D_800E5694->listA, D_800D74DC[0]);
    list = func_8041AC40(MENU_80437074_465, MENU_80437074_466);
    D_800E5694->listB = list;
    func_8041ADB4(list, D_800D749C[0]);
    func_8041ADB4(D_800E5694->listB, D_800D74A0[0]);
    D_800E5694->panels[0] = func_8041A600(MENU_80437074_463, MENU_80437074_464, 0xFF);
    D_800E5694->panels[1] = func_8041A600(MENU_80437074_461, MENU_80437074_462, 0xFF);
    list = func_8041AC40(MENU_80437074_459, MENU_80437074_460);
    D_800E5694->listC = list;
    func_8041ADB4(list, D_800D74E0[0]);
    func_8041ADB4(D_800E5694->listC, D_800D74E4[0]);
    func_8041ADB4(D_800E5694->listC, D_800D74E8[0]);
    func_8041B190(MENU_80437074_456);
    D_800E5694->window = func_8040ECB0(parent, MENU_80437074_455);
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
