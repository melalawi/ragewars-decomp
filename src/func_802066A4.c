#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern s32 func_80285F28(void *, void *);
extern s32 D_8011FE88;
extern f32 D_800C6BD0;

void func_802066A4(void *arg0, void *arg1) {
    *(s32 *)((char *)arg1 + 0x124) = *(s32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x18);
    func_80214178(arg0, arg1, 0);
    *(f32 *)((char *)arg1 + 0x128) = D_800C6BD0;
    *(f32 *)((char *)arg1 + 0x12C) = D_800C6BD0;
    if (func_80285F28(&D_8011FE88, arg0) == 1) {
        *(s32 *)((char *)arg0 + 0x100) &= ~0x2000;
        *(s32 *)((char *)arg0 + 0x100) &= ~0x100;
    }
}
