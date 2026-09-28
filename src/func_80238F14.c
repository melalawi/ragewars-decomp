/* Stores its parameters into the object at arg0 offsets 0x24 through 0x60, then refreshes the object's ground reference and picks its surface value at 0x64 from the ground under it. Adapted from func_80239FCC with the parameter block stores added and the D_800C8610 thresholds changed. */
#include "basetypes.h"

typedef struct {
    s32 w[4];
} Quad80238F14;

extern s32 func_80245788(void);
extern s32 func_802866F8(void *arg0, void *arg1);
extern f32 func_80275E44(s32 arg0, f32 arg1, f32 arg2);
extern s32 D_8011FE88;
extern s32 D_800D2B40;
extern f32 D_800C8610;
extern f32 D_800C8614;
extern f32 D_800C8618;

void func_80238F14(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6,
                   f32 arg7, f32 arg8, f32 arg9, Quad80238F14 arg10, s32 arg11, f32 arg12,
                   f32 arg13) {
    s32 object;
    f32 value;
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    *(s32 *)((char *)arg0 + 0x24) = arg1;
    *(f32 *)((char *)arg0 + 0x28) = arg2;
    *(f32 *)((char *)arg0 + 0x2C) = arg3;
    *(f32 *)((char *)arg0 + 0x30) = arg4;
    *(f32 *)((char *)arg0 + 0x34) = arg5;
    *(f32 *)((char *)arg0 + 0x38) = arg6;
    *(f32 *)((char *)arg0 + 0x3C) = arg7;
    *(f32 *)((char *)arg0 + 0x40) = arg8;
    *(f32 *)((char *)arg0 + 0x44) = arg9;
    *(Quad80238F14 *)((char *)arg0 + 0x48) = arg10;
    *(s32 *)((char *)arg0 + 0x58) = arg11;
    *(f32 *)((char *)arg0 + 0x5C) = arg12;
    *(f32 *)((char *)arg0 + 0x60) = arg13;
    if (func_80245788() != 0) {
        *(s32 *)((char *)arg0 + 0x58) = func_802866F8(&D_8011FE88, (char *)arg0 + 0x38);
    }
    object = *(s32 *)((char *)arg0 + 0x58);
    x = *(f32 *)((char *)arg0 + 0x38);
    y = *(f32 *)((char *)arg0 + 0x3C);
    z = *(f32 *)((char *)arg0 + 0x40);
    w = *(f32 *)((char *)arg0 + 0x44);
    *(s32 *)((char *)arg0 + 0x64) = D_800D2B40;
    if (object != 0 && func_80245788() == 0) {
        value = ((y + w) - func_80275E44(object, x, z)) * D_800C8610;
        if (value < D_800C8614 && D_800C8618 < value) {
            *(s32 *)((char *)arg0 + 0x64) = *(s32 *)((char *)object + 0x1C);
        }
    }
    if (func_80245788() != 0) {
        *(s32 *)((char *)arg0 + 0x64) = D_800D2B40;
    }
    if (*(f32 *)((char *)arg0 + 0x5C) > 0.0f) {
        *(s32 *)((char *)arg0 + 0x64) = D_800D2B40;
    }
}
