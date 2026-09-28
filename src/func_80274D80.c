#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

s32 func_80274D80(f32 *arg0, f32 *arg1, f32 *arg2) {
    volatile Vector3f delta;
    f32 temp_f6;
    f32 temp_f5;
    f32 temp_f3;
    s32 result;

    temp_f6 = arg1[0] - arg0[0];
    delta.x = temp_f6;
    temp_f5 = arg1[2] - arg0[2];
    delta.z = temp_f5;
    temp_f3 = (arg1[6] * arg0[12]) + (arg1[8] * arg0[14]);
    result = 0;
    if (temp_f3 != 0.0f) {
        result = 1;
        *arg2 = ((temp_f6 * arg0[12]) + (temp_f5 * arg0[14])) / -temp_f3;
    }
    return result;
}
