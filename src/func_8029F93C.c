#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

extern f32 D_800CAE3C;
extern f32 D_800CAE40;
extern f32 D_800CAE44;

void func_8029F93C(Vector3f *arg0, Vector3f *arg1, Vector3f *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vector3f delta;
    f32 numerator;
    f32 denominator;
    f32 fraction;

    delta.x = arg2->x - arg1->x;
    delta.y = arg2->y - arg1->y;
    delta.z = arg2->z - arg1->z;
    numerator = -((arg3 * arg1->x) + (arg4 * arg1->y) + (arg5 * arg1->z) + arg6);
    denominator = (arg3 * delta.x) + (arg4 * delta.y) + (arg5 * delta.z);
    if (!(denominator < D_800CAE3C) || (fraction = D_800CAE44, !(D_800CAE40 < denominator))) {
        fraction = numerator / denominator;
    }
    arg0->x = arg1->x + (fraction * delta.x);
    arg0->y = arg1->y + (fraction * delta.y);
    arg0->z = arg1->z + (fraction * delta.z);
}
