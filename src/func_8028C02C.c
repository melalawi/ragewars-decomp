#include "basetypes.h"

extern s32 func_80275B80(void *arg0, f32 arg1, f32 arg2);
extern f32 func_80275E44(s32, s32, s32);
extern f32 func_802752CC(void *arg0, s32 arg1, s32 arg2);
extern s32 func_802866F8(void *, void *);
extern char D_8011FE88[];

void *func_8028C02C(void *arg0, void *arg1) {
    f32 lower;
    f32 upper;
    f32 value;

    if (arg0 != 0 &&
        func_80275B80(arg0, *(f32 *)((char *)arg1 + 0),
                          *(f32 *)((char *)arg1 + 8)) != 0) {
        if (!(*(u16 *)((char *)arg0 + 2) & 0x40)) {
            return arg0;
        }
        lower = func_80275E44(arg0,
            *(s32 *)((char *)arg1 + 0), *(s32 *)((char *)arg1 + 8));
        upper = func_802752CC(arg0,
            *(s32 *)((char *)arg1 + 0), *(s32 *)((char *)arg1 + 8));
        value = *(f32 *)((char *)arg1 + 4);
        if (lower <= value && value <= upper) {
            return arg0;
        }
    }
    return func_802866F8(D_8011FE88, arg1);
}
