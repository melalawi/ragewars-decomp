#include "basetypes.h"

/* Builds a 4x4 transform from a rotation quaternion (x, y, z, w) and a translation, with a zero fourth column and the corner set to the constant at D_800C8CA0. */

extern f32 D_800C8CA0;

void func_8024D018(f32 *m, f32 *q, f32 *t)
{
    f32 x = q[0];
    f32 xx = x * x;
    f32 y = q[1];
    f32 yy = y * y;
    f32 z = q[2];
    f32 zz = z * z;
    f32 w = q[3];
    f32 ww = w * w;
    f32 x2 = x + x;
    f32 xy = x2 * y;
    f32 w2 = w + w;
    f32 wz = w2 * z;
    f32 xz = x2 * z;
    f32 wy = w2 * y;
    f32 wx = w2 * x;
    f32 yz = (y + y) * z;

    m[0] = ww + xx - yy - zz;
    m[1] = xy + wz;
    m[2] = xz - wy;
    m[4] = xy - wz;
    m[5] = ww - xx + yy - zz;
    m[6] = yz + wx;
    m[8] = xz + wy;
    m[9] = yz - wx;
    m[10] = ww - xx - yy + zz;
    m[12] = t[0];
    m[13] = t[1];
    m[14] = t[2];
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[15] = D_800C8CA0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3AE0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8CA0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E60_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3EA0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3BB0_4 = 1.0f;
#endif
