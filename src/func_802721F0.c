#include "basetypes.h"

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

void *func_802721F0(void *arg0, void *arg1, void *arg2, f32 arg3) {
    Vec3 tmp;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;

    temp_f5 = *(f32 *)((char *)arg1 + 0);
    temp_f4 = *(f32 *)((char *)arg2 + 0);
    temp_f3 = (temp_f5 * temp_f4) + (*(f32 *)((char *)arg1 + 4) * *(f32 *)((char *)arg2 + 4)) + (*(f32 *)((char *)arg1 + 8) * *(f32 *)((char *)arg2 + 8));
    temp_f2 = (arg3 * temp_f3) + temp_f3;
    tmp.x = temp_f5 - (temp_f2 * temp_f4);
    tmp.y = *(f32 *)((char *)arg1 + 4) - (temp_f2 * *(f32 *)((char *)arg2 + 4));
    tmp.z = *(f32 *)((char *)arg1 + 8) - (temp_f2 * *(f32 *)((char *)arg2 + 8));
    *(Vec3 *)arg0 = tmp;
    return arg0;
}
