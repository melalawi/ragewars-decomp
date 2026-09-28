#include "basetypes.h"

extern f64 D_800CAD58;

typedef union {
    f64 d;
    struct {
        u32 hi;
        u32 lo;
    } w;
} DoubleBits_8029ECB0;

f64 func_8029ECB0(f64 arg0, s32 *arg1) {
    DoubleBits_8029ECB0 u;
    f64 special;

    special = D_800CAD58;
    if (arg0 != special) {
        if (D_800CAD58 || arg1) {
            goto normal;
        } else {
            goto normal;
        }
    }
    *arg1 = 0;
    return special;
normal:
    u.d = arg0;

    *arg1 = ((u.w.hi >> 20) & 0x7FF) - 0x3FE;
    u.w.hi = (u.w.hi & 0x800FFFFF) | 0x3FE00000;
    return u.d;
}
