#include "common/types.h"
#include "span_1000/code_802A31F4.h"
#include "span_C76B0/data.h"
#include "types.h"






extern f32 D_80111D2C;
extern void func_80272018_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern f32 func_802B72B0_de(f32);
extern void func_80271F9C_de(Vec3 *out, Vec3 *in, f32 scale);
extern f32 func_802745D0_de(f32 arg0);
extern f32 func_802B7130_de(f32 arg0);
extern f32 func_802B6560_de(f32 arg0);

Vector4f *func_802A5020_de(Vector4f *out, u32 bx, u32 by, u32 bz) {
    Vec3 axis;
    Vec3 cross;
    Vector4f result;
    f32 one;
    f32 magnitude;
    f32 angle;
    f32 trig;

    one = D_800C5E88_de;
    axis.x = 0.0f;
    axis.y = one;
    axis.z = 0.0f;
    func_80272018_de(&cross, &axis, (Vec3 *)&bx);

    magnitude = func_802B72B0_de((cross.x * cross.x) +
                              (cross.y * cross.y) +
                              (cross.z * cross.z));
    if (magnitude == 0.0f) {
        result.z = 0.0f;
        result.y = 0.0f;
        result.x = 0.0f;
        result.w = one;
    } else {
        func_80271F9C_de(&cross, &cross, one / magnitude);
        angle = func_802745D0_de((axis.x * *(f32 *)&bx) +
                              (axis.y * *(f32 *)&by) +
                              (axis.z * *(f32 *)&bz));
        angle *= ((struct func_802077F4_S2 *) ((f32 *) (&D_800C5E88_de)))->unk4;
        trig = func_802B7130_de(angle);
        result.x = cross.x * trig;
        result.y = cross.y * trig;
        result.z = cross.z * trig;
        D_80111D2C = trig;
        result.w = func_802B6560_de(angle);
    }
    *out = result;
    return out;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DB8_4 = 1.0f;
const float unbake_rodata_800C5DBC_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB018_4 = 1.0f;
const float unbake_rodata_800CB01C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6128_4 = 1.0f;
const float unbake_rodata_800C612C_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6168_4 = 1.0f;
const float unbake_rodata_800C616C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5E88_4 = 1.0f;
const float unbake_rodata_800C5E8C_4 = 0.5f;
#endif
