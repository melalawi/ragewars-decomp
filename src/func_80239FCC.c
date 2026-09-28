#include "basetypes.h"

extern s32 func_80245788(void);
extern s32 func_802866F8(void *arg0, void *arg1);
extern f32 func_80275E44(s32 arg0, f32 arg1, f32 arg2);
extern s32 D_8011FE88;
extern s32 D_800D2B40;
extern f32 D_800C8680;
extern f32 D_800C8684;
extern f32 D_800C8688;

void func_80239FCC(void *arg0) {
    s32 object;
    f32 value;
    f32 x;
    f32 y;
    f32 z;
    f32 w;

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
        value = ((y + w) - func_80275E44(object, x, z)) * D_800C8680;
        if (value < D_800C8684 && D_800C8688 < value) {
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
