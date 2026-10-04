#include "span_1000/code_8029D984.h"
#include "span_C76B0/data.h"
#include "types.h"





f64 func_8029DCB0_de(f64 arg0, s32 *arg1) {
    DoubleBits_8029ECB0 u;
    f64 special;

    special = D_800C5BC8_de;
    if (arg0 != special) {
        if (D_800C5BC8_de || arg1) {
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5AF8_8 = 0.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CAD58_8 = 0.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5E68_8 = 0.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5EA8_8 = 0.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5BC8_8 = 0.0;
#endif
