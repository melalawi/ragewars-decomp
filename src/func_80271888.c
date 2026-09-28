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
