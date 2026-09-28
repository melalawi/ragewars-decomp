#include "basetypes.h"

/* Returns one when the two arguments are equal or when any of the sixty-four 12-byte pairs of D_800E4A84 holds exactly that ordered pair, zero otherwise.
   Adapted from func_8041F248 with the single-key slot scan changed to an ordered-pair lookup over 64 twelve-byte entries. */

struct Pair {
    s32 a;
    s32 b;
    s32 c;
};

extern struct Pair D_800E4A84[];

s32 func_80428338(s32 a, s32 b) {
    s32 i;

    if (a == b) {
        return 1;
    }
    for (i = 0; i < 64; i++) {
        if (D_800E4A84[i].a == a && D_800E4A84[i].b == b) {
            return 1;
        }
    }
    return 0;
}
