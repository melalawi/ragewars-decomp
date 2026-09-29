/* Steps index through the eleven entries (wrapping 10 to 0 and below 0 to 10), before the test when mode is 0 and after it otherwise, until one whose flag bit is set in D_801462CC; returns that index, or -1 after eleven tries. */
#include "basetypes.h"

extern s32 D_801462CC;

s32 func_8043D164(s32 index, s32 step, s32 mode) {
    s32 i;
    s32 mask;
    s32 *flags; /* FAKEMATCH: copy-only local, set inside the loop, orders the hoisted flag and jump-table addresses */

    for (i = 0; i < 11; i++) {
        if (mode == 0) {
            index += step;
            if (index >= 11) {
                index = 0;
            } else if (index < 0) {
                index = 10;
            }
        }
        switch (index) {
        case 0:
        default:
            mask = 0x10000;
            break;
        case 1:
            mask = 0x20000;
            break;
        case 2:
            mask = 0x40000;
            break;
        case 3:
            mask = 0x80000;
            break;
        case 4:
            mask = 0x100000;
            break;
        case 5:
            mask = 0x200000;
            break;
        case 6:
            mask = 0x800000;
            break;
        case 7:
            mask = 0x400000;
            break;
        case 8:
            mask = 0x1000000;
            break;
        case 9:
            mask = 0x2000000;
            break;
        case 10:
            mask = 0x4000000;
            break;
        }
        flags = &D_801462CC;
        if (*flags & mask) {
            return index;
        }
        if (mode != 0) {
            index += step;
            if (index >= 11) {
                index = 0;
            } else if (index < 0) {
                index = 10;
            }
        }
    }
    return -1;
}
