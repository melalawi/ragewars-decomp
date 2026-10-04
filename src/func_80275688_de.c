#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_C76B0/data.h"
#include "types.h"




extern float D_800C49D8_de[];

extern float D_80111D2C;
extern void func_802750B0_de(Vec3 *);
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80271F9C_de(Vec3 *, Vec3 *, float);
extern f32 func_802B72B0_de(f32);
extern float func_802745D0_de(float);
extern float func_802B7130_de(float);
extern float func_802B6560_de(float);

Vector4f *func_80275688_de(Vector4f *out) {
    Vec3 a;
    Vec3 up;
    Vec3 axis;
    Vector4f result;
    float len;
    float angle;
    float scale;
    float one;

    func_802750B0_de(&a);
    one = D_800C49D8_de[1];
    up.x = 0;
    up.y = one;
    up.z = 0;
    func_80272018_de(&axis, &up, &a);
    len = func_802B72B0_de(axis.x * axis.x + axis.y * axis.y + axis.z * axis.z);
    if (len == 0) {
        result.z = 0;
        result.y = 0;
        result.x = 0;
        result.w = one;
    } else {
        func_80271F9C_de(&axis, &axis, one / len);
        angle = func_802745D0_de(up.x * a.x + up.y * a.y + up.z * a.z);
        angle *= D_800C49E0_de;
        scale = func_802B7130_de(angle);
        result.x = axis.x * scale;
        result.y = axis.y * scale;
        result.z = axis.z * scale;
        D_80111D2C = scale;
        result.w = func_802B6560_de(angle);
    }
    *out = result;
    return out;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C490C_4 = 1.0f;
const float unbake_rodata_800C4910_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9ACC_4 = 1.0f;
const float unbake_rodata_800C9AD0_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C8C_4 = 1.0f;
const float unbake_rodata_800C4C90_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CCC_4 = 1.0f;
const float unbake_rodata_800C4CD0_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49DC_4 = 1.0f;
const float unbake_rodata_800C49E0_4 = 0.5f;
#endif
