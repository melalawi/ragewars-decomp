#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"











extern f32 D_80111D2C;

extern f32 func_802B72B0_de(f32);
extern f32 func_802745D0_de(f32);
extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);

Vector4f func_80271818_de(Vec3 *input) {
    Vector4f result;
    Vec3 normalized;
    Vec3 basis;
    Vec3 axis;
    f32 magnitude;
    f32 angle;
    f32 axisMagnitude;

    magnitude = func_802B72B0_de((input->x * input->x) +
                              (input->y * input->y) +
                              (input->z * input->z));
    if (magnitude == 0.0f) {
        result.z = 0.0f;
        result.y = 0.0f;
        result.x = 0.0f;
        result.w = D_800C4820_de;
    } else {
        f32 normalizationScale;

        normalizationScale = D_800C4824_de / magnitude;
        normalized.x = input->x * normalizationScale;
        normalized.y = input->y * normalizationScale;
        normalized.z = input->z * normalizationScale;

        basis.x = 0.0f;
        basis.y = 0.0f;
        basis.z = D_800C4824_de;

        if (normalized.z < 0.0f) {
            if (D_800C4828_de < -normalized.z) {
                goto pole;
            }
            goto general;
        }
        if (D_800C482C_de < normalized.z) {
pole:
        {
            f32 halfAngle;
            f32 scale;

            halfAngle = 0.0f;
            scale = func_802B7130_de(halfAngle);
            result.z = normalized.z * scale;
            D_80111D2C = scale;
            result.x = halfAngle;
            result.y = halfAngle;
            result.w = func_802B6560_de(halfAngle);
        }
        } else {
general:
        {
            f32 halfAngle;
            f32 scale;

            angle = func_802745D0_de((normalized.x * basis.x) +
                                  (normalized.y * basis.y) +
                                  (normalized.z * basis.z));
            axis.x = (basis.y * normalized.z) - (basis.z * normalized.y);
            axis.y = (basis.z * normalized.x) - (basis.x * normalized.z);
            axis.z = (basis.x * normalized.y) - (basis.y * normalized.x);

            axisMagnitude = func_802B72B0_de((axis.x * axis.x) +
                                          (axis.y * axis.y) +
                                          (axis.z * axis.z));
            if (axisMagnitude != 0.0f) {
                f32 axisScale;

                axisScale = D_800C4830_de / axisMagnitude;
                axis.x *= axisScale;
                axis.y *= axisScale;
                axis.z *= axisScale;
            }

            halfAngle = angle * D_800C4834_de;
            scale = func_802B7130_de(halfAngle);
            result.x = axis.x * scale;
            result.y = axis.y * scale;
            result.z = axis.z * scale;
            D_80111D2C = scale;
            result.w = func_802B6560_de(halfAngle);
        }
        }
    }
    return result;
}
