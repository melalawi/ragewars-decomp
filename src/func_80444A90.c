#include "basetypes.h"

/* Replaces the option halfword D_801462DC with what func_8044252C returns for the second argument,
   that halfword, 0x10, 0, 0x100 and 0, then stores its low byte in the byte after it, or 0xFF when
   the value is 0xFF or more. Returns zero. */
extern u16 D_801462DC;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80444A90(void *first, void *second) {
    u16 *option = &D_801462DC;
    u8 limited;

    *option = func_8044252C(second, *option, 0x10, 0, 0x100, 0);
    limited = 0xFF;
    if (*option < 0xFF) {
        limited = ((u8 *) option)[1];
    }
    ((u8 *) option)[2] = limited;
    return 0;
}
