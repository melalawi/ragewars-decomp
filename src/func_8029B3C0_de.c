#include "span_1000/code_8029AC80.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Converts an array of three angles into another angle triple via sine/cosine products, clamping and atan2-style calls, and writes it back. Adapted from func_8029B868_de, with the clamped product, branch products, fallback call, and result order changed. */




extern void func_8029BBB0_de(f32, f32 *, f32 *);
extern f32 func_8029DE48_de(f32);
extern f32 func_8029DD18_de(f32);
extern f32 func_8029C044_de(f32, f32);

void func_8029B3C0_de(f32 *arg0) {
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

    func_8029BBB0_de(arg0[0], &sp10, &sp14);
    func_8029BBB0_de(arg0[1], &sp18, &sp1C);
    func_8029BBB0_de(arg0[2], &sp20, &sp24);
    test = (sp14 * sp20 * sp18) - (sp10 * sp24);
    if (D_800C5878_de < test) {
        test = D_800C5878_de;
    }
    if (test < (-1.0f)) {
        test = (-1.0f);
    }
    angle = func_8029DE48_de(-test);
    test = func_8029DD18_de(angle);
    if ((D_800C5880_de < test) || (test < *(&D_800C5880_de + 1))) {
        f32 product = sp14 * sp24;
        f32 cross = sp10 * sp20;
        f32 first0 = (product * sp18) + cross;
        f32 first1 = sp14 * sp1C;
        f32 second0 = sp1C * sp20;
        f32 second1 = (cross * sp18) + product;
        out1 = func_8029C044_de(first0, first1);
        out2 = func_8029C044_de(second0, second1);
    } else {
        out1 = 0.0f;
        out2 = func_8029C044_de(-sp18, sp1C * sp24);
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
