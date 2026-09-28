#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);
extern f32 D_800C99F0;

void func_802737D0(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 zero;
    f32 one;

    sin_v = func_802BC200(arg1);
    zero = (f32) 0;
    one = D_800C99F0;
    *(f32 *) (m + 0x08) = zero;
    *(f32 *) (m + 0x20) = zero;
    *(f32 *) (m + 0x18) = zero;
    *(f32 *) (m + 0x24) = zero;
    *(f32 *) (m + 0x38) = zero;
    *(f32 *) (m + 0x34) = zero;
    *(f32 *) (m + 0x30) = zero;
    *(f32 *) (m + 0x2C) = zero;
    *(f32 *) (m + 0x1C) = zero;
    *(f32 *) (m + 0x0C) = zero;
    *(f32 *) (m + 0x28) = one;
    *(f32 *) (m + 0x3C) = one;
    cos_v = func_802BB630(arg1);
    *(f32 *) (m + 0x14) = cos_v;
    *(f32 *) (m + 0x00) = cos_v;
    *(f32 *) (m + 0x10) = -sin_v;
    *(f32 *) (m + 0x04) = sin_v;
}
