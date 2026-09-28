#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

void func_80273930(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = *(f32 *) (m + 0x4);
    *(f32 *) (m + 0x4) = (a * cos_v) + (*(f32 *) (m + 0x8) * neg_sin);
    *(f32 *) (m + 0x8) = (a * sin_v) + (*(f32 *) (m + 0x8) * cos_v);

    a = *(f32 *) (m + 0x14);
    *(f32 *) (m + 0x14) = (a * cos_v) + (*(f32 *) (m + 0x18) * neg_sin);
    *(f32 *) (m + 0x18) = (a * sin_v) + (*(f32 *) (m + 0x18) * cos_v);

    a = *(f32 *) (m + 0x24);
    *(f32 *) (m + 0x24) = (a * cos_v) + (*(f32 *) (m + 0x28) * neg_sin);
    *(f32 *) (m + 0x28) = (a * sin_v) + (*(f32 *) (m + 0x28) * cos_v);

    a = *(f32 *) (m + 0x34);
    *(f32 *) (m + 0x34) = (a * cos_v) + (*(f32 *) (m + 0x38) * neg_sin);
    *(f32 *) (m + 0x38) = (a * sin_v) + (*(f32 *) (m + 0x38) * cos_v);
}
