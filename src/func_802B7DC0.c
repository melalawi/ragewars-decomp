/* Divides an integer by a float and truncates toward zero, asserting first if the divisor is
   zero; clamps the result to 0x7FFFFFFF when the quotient would overflow a signed 32-bit int. */
#include "basetypes.h"

extern char D_800CC798[];
extern char D_800CC79C[];
extern f64 D_800CC7B0;

extern void func_802BFD40(char *, char *, s32);

s32 func_802B7DC0(s32 val, f32 div) {
    f32 fval;
    f64 dresult;
    s32 result;

    if (div == 0.0f) {
        func_802BFD40(D_800CC798, D_800CC79C, 0x11D);
    }

    result = 0x7FFFFFFF;
    fval = (f32)val / div;
    dresult = (f64)fval;
    if (!(D_800CC7B0 < dresult)) {
        result = (s32)dresult;
    }
    return result;
}
