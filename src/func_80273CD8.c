#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

void func_80273CD8(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = *(f32 *) (m + 0x0);
    *(f32 *) (m + 0x0) = (a * cos_v) + (*(f32 *) (m + 0x4) * neg_sin);
    *(f32 *) (m + 0x4) = (a * sin_v) + (*(f32 *) (m + 0x4) * cos_v);

    a = *(f32 *) (m + 0x10);
    *(f32 *) (m + 0x10) = (a * cos_v) + (*(f32 *) (m + 0x14) * neg_sin);
    *(f32 *) (m + 0x14) = (a * sin_v) + (*(f32 *) (m + 0x14) * cos_v);

    a = *(f32 *) (m + 0x20);
    *(f32 *) (m + 0x20) = (a * cos_v) + (*(f32 *) (m + 0x24) * neg_sin);
    *(f32 *) (m + 0x24) = (a * sin_v) + (*(f32 *) (m + 0x24) * cos_v);

    a = *(f32 *) (m + 0x30);
    *(f32 *) (m + 0x30) = (a * cos_v) + (*(f32 *) (m + 0x34) * neg_sin);
    *(f32 *) (m + 0x34) = (a * sin_v) + (*(f32 *) (m + 0x34) * cos_v);
}
