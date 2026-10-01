#include "basetypes.h"

typedef struct { float x, y, z; } Vec3;
typedef struct { float x, y, z, w; } Vec4;

extern float D_800C9AC8[];
extern float D_800C9AD0;
extern float D_80115DEC;
extern void func_80275120(Vec3 *);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern void func_8027200C(Vec3 *, Vec3 *, float);
extern f32 func_802BC380(f32);
extern float func_80274640(float);
extern float func_802BC200(float);
extern float func_802BB630(float);

Vec4 *func_802756F8(Vec4 *out) {
    Vec3 a;
    Vec3 up;
    Vec3 axis;
    Vec4 result;
    float len;
    float angle;
    float scale;
    float one;

    func_80275120(&a);
    one = D_800C9AC8[1];
    up.x = 0;
    up.y = one;
    up.z = 0;
    func_80272088(&axis, &up, &a);
    len = func_802BC380(axis.x * axis.x + axis.y * axis.y + axis.z * axis.z);
    if (len == 0) {
        result.z = 0;
        result.y = 0;
        result.x = 0;
        result.w = one;
    } else {
        func_8027200C(&axis, &axis, one / len);
        angle = func_80274640(up.x * a.x + up.y * a.y + up.z * a.z);
        angle *= D_800C9AD0;
        scale = func_802BC200(angle);
        result.x = axis.x * scale;
        result.y = axis.y * scale;
        result.z = axis.z * scale;
        D_80115DEC = scale;
        result.w = func_802BB630(angle);
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
