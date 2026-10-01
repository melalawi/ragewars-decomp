#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

extern f32 D_800CAA28;
extern f32 D_800CAA30;

extern void func_8029CBB0(f32 value, f32 *out0, f32 *out1);
extern f32 func_8029EE48(f32 value);
extern f32 func_8029ED18(f32 value);
extern f32 func_8029D044(f32 x, f32 y);

void func_8029C6E0(Vec3f *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 outX;
    f32 outZ;
    f32 clamped;
    f32 angle;
    f32 test;

    func_8029CBB0(arg0->x, &sp10, &sp14);
    func_8029CBB0(arg0->y, &sp18, &sp1C);
    func_8029CBB0(arg0->z, &sp20, &sp24);

    clamped = -sp18 * sp24;
    if (D_800CAA28 < clamped) {
        clamped = D_800CAA28;
    }
    if (clamped < *(&D_800CAA28 + 1)) {
        clamped = *(&D_800CAA28 + 1);
    }

    angle = func_8029EE48(-clamped);
    test = func_8029ED18(angle);
    if ((D_800CAA30 < test) || (test < *(&D_800CAA30 + 1))) {
        f32 product = sp18 * sp20;
        f32 saved10 = sp10;
        f32 saved20 = sp1C;
        f32 saved21 = sp20;
        f32 secondArg = saved20 * sp24;

        outX = func_8029D044((sp14 * product) + (saved10 * saved20),
                             (-saved10 * product) + (saved20 * sp14));
        outZ = func_8029D044(saved21, secondArg);
    } else {
        outX = func_8029D044(-sp24 * sp10, sp24 * sp14);
        outZ = 0.0f;
    }

    arg0->x = outX;
    arg0->y = angle;
    arg0->z = outZ;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C57C8_4 = 1.0f;
const float unbake_rodata_800C57CC_4 = (-1.0f);
const float unbake_rodata_800C57D0_4 = 9.99999975e-05f;
const float unbake_rodata_800C57D4_4 = (-9.99999975e-05f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAA28_4 = 1.0f;
const float unbake_rodata_800CAA2C_4 = (-1.0f);
const float unbake_rodata_800CAA30_4 = 9.99999975e-05f;
const float unbake_rodata_800CAA34_4 = (-9.99999975e-05f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C5B38_4 = 1.0f;
const float unbake_rodata_800C5B3C_4 = (-1.0f);
const float unbake_rodata_800C5B40_4 = 9.99999975e-05f;
const float unbake_rodata_800C5B44_4 = (-9.99999975e-05f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5B78_4 = 1.0f;
const float unbake_rodata_800C5B7C_4 = (-1.0f);
const float unbake_rodata_800C5B80_4 = 9.99999975e-05f;
const float unbake_rodata_800C5B84_4 = (-9.99999975e-05f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C5898_4 = 1.0f;
const float unbake_rodata_800C589C_4 = (-1.0f);
const float unbake_rodata_800C58A0_4 = 9.99999975e-05f;
const float unbake_rodata_800C58A4_4 = (-9.99999975e-05f);
#endif
