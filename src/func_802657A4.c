#include "basetypes.h"

extern char D_800CD390;
extern char D_F641;
extern char jtbl_800C6AB0;
extern char D_655C;
extern void *D_800E2830;
extern char D_3B6E;

/** Return whether an address lies within one of three recognized ranges. */
int func_802657A4(u32 arg0) {
    if (arg0 >= (u32)&D_800CD390 &&
        arg0 < (u32)&D_800CD390 + (u32)&D_F641) {
        return 1;
    }
    if (arg0 >= (u32)&jtbl_800C6AB0 &&
        arg0 < (u32)&jtbl_800C6AB0 + (u32)&D_655C) {
        return 1;
    }
    if (arg0 >= (u32)&D_800E2830 &&
        arg0 < (u32)&D_800E2830 + (u32)&D_3B6E) {
        return 1;
    }
    return 0;
}
