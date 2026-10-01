/* Converts an array of three angles into another angle triple via sine/cosine products, clamping and atan2-style calls, and writes it back. Adapted from func_8029C868, with the clamped product, branch products, fallback call, and result order changed. */
#include "basetypes.h"

extern f32 D_800CAA08;
extern f32 D_800CAA0C;
extern f32 D_800CAA10;

extern void func_8029CBB0(f32, f32 *, f32 *);
extern f32 func_8029EE48(f32);
extern f32 func_8029ED18(f32);
extern f32 func_8029D044(f32, f32);

void func_8029C3C0(f32 *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 angle;
    f32 test;
    f32 out1;
    f32 out2;

    func_8029CBB0(arg0[0], &sp10, &sp14);
    func_8029CBB0(arg0[1], &sp18, &sp1C);
    func_8029CBB0(arg0[2], &sp20, &sp24);
    test = (sp14 * sp20 * sp18) - (sp10 * sp24);
    if (D_800CAA08 < test) {
        test = D_800CAA08;
    }
    if (test < D_800CAA0C) {
        test = D_800CAA0C;
    }
    angle = func_8029EE48(-test);
    test = func_8029ED18(angle);
    if ((D_800CAA10 < test) || (test < *(&D_800CAA10 + 1))) {
        f32 product = sp14 * sp24;
        f32 cross = sp10 * sp20;
        f32 first0 = (product * sp18) + cross;
        f32 first1 = sp14 * sp1C;
        f32 second0 = sp1C * sp20;
        f32 second1 = (cross * sp18) + product;
        out1 = func_8029D044(first0, first1);
        out2 = func_8029D044(second0, second1);
    } else {
        out1 = 0.0f;
        out2 = func_8029D044(-sp18, sp1C * sp24);
    }
    arg0[0] = angle;
    arg0[1] = out1;
    arg0[2] = out2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C57A8_4 = 1.0f;
const float unbake_rodata_800C57AC_4 = (-1.0f);
const float unbake_rodata_800C57B0_4 = 9.99999975e-05f;
const float unbake_rodata_800C57B4_4 = (-9.99999975e-05f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAA08_4 = 1.0f;
const float unbake_rodata_800CAA0C_4 = (-1.0f);
const float unbake_rodata_800CAA10_4 = 9.99999975e-05f;
const float unbake_rodata_800CAA14_4 = (-9.99999975e-05f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C5B18_4 = 1.0f;
const float unbake_rodata_800C5B1C_4 = (-1.0f);
const float unbake_rodata_800C5B20_4 = 9.99999975e-05f;
const float unbake_rodata_800C5B24_4 = (-9.99999975e-05f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5B58_4 = 1.0f;
const float unbake_rodata_800C5B5C_4 = (-1.0f);
const float unbake_rodata_800C5B60_4 = 9.99999975e-05f;
const float unbake_rodata_800C5B64_4 = (-9.99999975e-05f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C5878_4 = 1.0f;
const float unbake_rodata_800C587C_4 = (-1.0f);
const float unbake_rodata_800C5880_4 = 9.99999975e-05f;
const float unbake_rodata_800C5884_4 = (-9.99999975e-05f);
#endif
