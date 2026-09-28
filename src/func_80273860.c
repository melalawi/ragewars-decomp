#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

void func_80273860(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = *(f32 *) (m + 0x10);
    *(f32 *) (m + 0x10) = (cos_v * a) + (sin_v * *(f32 *) (m + 0x20));
    *(f32 *) (m + 0x20) = (neg_sin * a) + (cos_v * *(f32 *) (m + 0x20));

    a = *(f32 *) (m + 0x14);
    *(f32 *) (m + 0x14) = (cos_v * a) + (sin_v * *(f32 *) (m + 0x24));
    *(f32 *) (m + 0x24) = (neg_sin * a) + (cos_v * *(f32 *) (m + 0x24));

    a = *(f32 *) (m + 0x18);
    *(f32 *) (m + 0x18) = (cos_v * a) + (sin_v * *(f32 *) (m + 0x28));
    *(f32 *) (m + 0x28) = (neg_sin * a) + (cos_v * *(f32 *) (m + 0x28));
}
