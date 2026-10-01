#include "basetypes.h"

extern f32 D_800CAA38;
extern f32 D_800CAA3C;
extern f32 D_800CAA40;

extern void func_8029CBB0(f32, f32 *, f32 *);
extern f32 func_8029EE48(f32);
extern f32 func_8029ED18(f32);
extern f32 func_8029D044(f32, f32);

void func_8029C868(f32 *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 angle;
    f32 test;
    f32 out0;
    f32 out2;

    func_8029CBB0(arg0[0], &sp10, &sp14);
    func_8029CBB0(arg0[1], &sp18, &sp1C);
    func_8029CBB0(arg0[2], &sp20, &sp24);
    test = (sp1C * sp10 * sp20) - (sp18 * sp24);
    if (D_800CAA38 < test) {
        test = D_800CAA38;
    }
    if (test < D_800CAA3C) {
        test = D_800CAA3C;
    }
    angle = func_8029EE48(-test);
    test = func_8029ED18(angle);
    if ((D_800CAA40 < test) || (test < *(&D_800CAA40 + 1))) {
        f32 product = sp1C * sp24;
        f32 cross = sp18 * sp20;
        f32 first0 = cross + (sp10 * product);
        f32 first1 = sp14 * sp1C;
        f32 second0 = sp14 * sp20;
        f32 second1 = product + (cross * sp10);
        out0 = func_8029D044(first0, first1);
        out2 = func_8029D044(second0, second1);
    } else {
        out0 = func_8029D044(sp10, sp14 * sp24);
        out2 = 0.0f;
    }
    arg0[0] = out0;
    arg0[1] = angle;
    arg0[2] = out2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C57D8_4 = 1.0f;
const float unbake_rodata_800C57DC_4 = (-1.0f);
const float unbake_rodata_800C57E0_4 = 9.99999975e-05f;
const float unbake_rodata_800C57E4_4 = (-9.99999975e-05f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAA38_4 = 1.0f;
const float unbake_rodata_800CAA3C_4 = (-1.0f);
const float unbake_rodata_800CAA40_4 = 9.99999975e-05f;
const float unbake_rodata_800CAA44_4 = (-9.99999975e-05f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C5B48_4 = 1.0f;
const float unbake_rodata_800C5B4C_4 = (-1.0f);
const float unbake_rodata_800C5B50_4 = 9.99999975e-05f;
const float unbake_rodata_800C5B54_4 = (-9.99999975e-05f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5B88_4 = 1.0f;
const float unbake_rodata_800C5B8C_4 = (-1.0f);
const float unbake_rodata_800C5B90_4 = 9.99999975e-05f;
const float unbake_rodata_800C5B94_4 = (-9.99999975e-05f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C58A8_4 = 1.0f;
const float unbake_rodata_800C58AC_4 = (-1.0f);
const float unbake_rodata_800C58B0_4 = 9.99999975e-05f;
const float unbake_rodata_800C58B4_4 = (-9.99999975e-05f);
#endif
