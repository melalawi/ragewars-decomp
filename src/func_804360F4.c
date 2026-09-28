#include "basetypes.h"

/* Event callback for screen D_800E5554: on event 1 while func_8043C4E8 reports the screen in state 1 it advances the screen through func_8043C260 and func_8043C484, and when that leaves it in state 2 it calls func_8040C4A8(0) and func_8029A73C, clears the pause word D_80146894 (0x180C past the match objects at D_80145088), stops those objects and the ones 0x48 bytes before them, releases resource 0x24 of D_8011FE88, restarts func_8025470C when func_8025471C reports it idle, stores 8 at 0x17F0 past the match objects, passes the screen's word at 0x1C to func_80299368 and calls func_8025E3A4, returning zero. Adapted from func_80436488 with the screen D_800E5558 changed to D_800E5554, a func_8040C4A8(0) call added, and the trailing func_8042E080 call replaced by the store of 8 and the func_80299368 call before func_8025E3A4. */
extern void *D_800E5554;
extern char D_80145088[];
extern char D_8011FE88[];
extern s32 func_8043C4E8(void *);
extern void func_8043C260(void *);
extern void func_8043C484(void *);
extern void func_8040C4A8(s32);
extern void func_8029A73C(void);
extern void func_8044AFC0(void *, s32);
extern void func_8044A600(void *, s32, s32);
extern void func_80286A78(void *, s32, s32);
extern s32 func_8025471C(void);
extern void func_8025470C(s32);
extern void func_80299368(void *);
extern void func_8025E3A4(void);

s32 func_804360F4(s32 arg0, s32 arg1, s32 event) {
    if (event == 1) {
        if (func_8043C4E8(D_800E5554) != 1) {
            return 0;
        }
        func_8043C260(D_800E5554);
        func_8043C484(D_800E5554);
        if (func_8043C4E8(D_800E5554) != 2) {
            return 0;
        }
        func_8040C4A8(0);
        func_8029A73C();
        *(s32 *)(D_80145088 + 0x180C) = 0;
        func_8044AFC0(D_80145088, 0);
        func_8044A600(D_80145088 - 0x48, 0, 0);
        func_80286A78(D_8011FE88, 0x24, 0);
        if (func_8025471C() == 0) {
            func_8025470C(1);
        }
        *(s32 *)(D_80145088 + 0x17F0) = 8;
        func_80299368(*(void **)((char *)D_800E5554 + 0x1C));
        func_8025E3A4();
    }
    return 0;
}
