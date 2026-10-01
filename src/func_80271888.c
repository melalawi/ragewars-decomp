#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

extern f32 D_800C9910;
extern f32 D_800C9914;
extern f32 D_800C9918;
extern f32 D_800C991C;
extern f32 D_800C9920;
extern f32 D_800C9924;
extern f32 D_80115DEC;

extern f32 func_802BC380(f32);
extern f32 func_80274640(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);

Quat func_80271888(Vec3 *input) {
    Quat result;
    Vec3 normalized;
    Vec3 basis;
    Vec3 axis;
    f32 magnitude;
    f32 angle;
    f32 axisMagnitude;

    magnitude = func_802BC380((input->x * input->x) +
                              (input->y * input->y) +
                              (input->z * input->z));
    if (magnitude == 0.0f) {
        result.z = 0.0f;
        result.y = 0.0f;
        result.x = 0.0f;
        result.w = D_800C9910;
    } else {
        f32 normalizationScale;

        normalizationScale = D_800C9914 / magnitude;
        normalized.x = input->x * normalizationScale;
        normalized.y = input->y * normalizationScale;
        normalized.z = input->z * normalizationScale;

        basis.x = 0.0f;
        basis.y = 0.0f;
        basis.z = D_800C9914;

        if (normalized.z < 0.0f) {
            if (D_800C9918 < -normalized.z) {
                goto pole;
            }
            goto general;
        }
        if (D_800C991C < normalized.z) {
pole:
        {
            f32 halfAngle;
            f32 scale;

            halfAngle = 0.0f;
            scale = func_802BC200(halfAngle);
            result.z = normalized.z * scale;
            D_80115DEC = scale;
            result.x = halfAngle;
            result.y = halfAngle;
            result.w = func_802BB630(halfAngle);
        }
        } else {
general:
        {
            f32 halfAngle;
            f32 scale;

            angle = func_80274640((normalized.x * basis.x) +
                                  (normalized.y * basis.y) +
                                  (normalized.z * basis.z));
            axis.x = (basis.y * normalized.z) - (basis.z * normalized.y);
            axis.y = (basis.z * normalized.x) - (basis.x * normalized.z);
            axis.z = (basis.x * normalized.y) - (basis.y * normalized.x);

            axisMagnitude = func_802BC380((axis.x * axis.x) +
                                          (axis.y * axis.y) +
                                          (axis.z * axis.z));
            if (axisMagnitude != 0.0f) {
                f32 axisScale;

                axisScale = D_800C9920 / axisMagnitude;
                axis.x *= axisScale;
                axis.y *= axisScale;
                axis.z *= axisScale;
            }

            halfAngle = angle * D_800C9924;
            scale = func_802BC200(halfAngle);
            result.x = axis.x * scale;
            result.y = axis.y * scale;
            result.z = axis.z * scale;
            D_80115DEC = scale;
            result.w = func_802BB630(halfAngle);
        }
        }
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4750_4 = 1.0f;
const float unbake_rodata_800C4754_4 = 1.0f;
const float unbake_rodata_800C4758_4 = 0.999989986f;
const float unbake_rodata_800C475C_4 = 0.999989986f;
const float unbake_rodata_800C4760_4 = 1.0f;
const float unbake_rodata_800C4764_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9910_4 = 1.0f;
const float unbake_rodata_800C9914_4 = 1.0f;
const float unbake_rodata_800C9918_4 = 0.999989986f;
const float unbake_rodata_800C991C_4 = 0.999989986f;
const float unbake_rodata_800C9920_4 = 1.0f;
const float unbake_rodata_800C9924_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4AD0_4 = 1.0f;
const float unbake_rodata_800C4AD4_4 = 1.0f;
const float unbake_rodata_800C4AD8_4 = 0.999989986f;
const float unbake_rodata_800C4ADC_4 = 0.999989986f;
const float unbake_rodata_800C4AE0_4 = 1.0f;
const float unbake_rodata_800C4AE4_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4B10_4 = 1.0f;
const float unbake_rodata_800C4B14_4 = 1.0f;
const float unbake_rodata_800C4B18_4 = 0.999989986f;
const float unbake_rodata_800C4B1C_4 = 0.999989986f;
const float unbake_rodata_800C4B20_4 = 1.0f;
const float unbake_rodata_800C4B24_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4820_4 = 1.0f;
const float unbake_rodata_800C4824_4 = 1.0f;
const float unbake_rodata_800C4828_4 = 0.999989986f;
const float unbake_rodata_800C482C_4 = 0.999989986f;
const float unbake_rodata_800C4830_4 = 1.0f;
const float unbake_rodata_800C4834_4 = 0.5f;
#endif
