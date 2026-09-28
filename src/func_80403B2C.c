#include "basetypes.h"

/* Sets or clears bit n of a bitmap according to the third argument. */
void func_80403B2C(u8 *bits, s32 n, s32 set) {
    s32 index = n >> 3;
    s32 mask = 1 << (n & 7);

    if (set) {
        bits[index] |= mask;
    } else {
        bits[index] &= ~mask;
    }
}
