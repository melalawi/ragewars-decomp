#include "basetypes.h"

extern s32 D_8011FE88;
extern f32 D_800C6B30[];

extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);

void func_80203908(void *arg0, void *arg1) {
    s32 flags;
    void *record;

    record = (char *)*(void **)((char *)arg0 + 0x18) + 0x14;
    if (*(u16 *)((char *)arg0 + 0xE4) == 0x40C) {
        *(f32 *)((char *)arg1 + 0x124) = D_800C6B30[1];
    } else {
        *(s32 *)((char *)arg1 + 0x124) = 0;
    }
    *(s32 *)((char *)arg1 + 0x128) = 0;
    *(f32 *)((char *)arg1 + 0x64) = *(f32 *)((char *)record + 0x6C);

    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        if (*(s32 *)record & 0x1000) {
            flags = *(s32 *)((char *)arg0 + 0x100) & ~0x2000;
            flags = flags & ~0x100;
            *(s32 *)((char *)arg0 + 0x100) = flags;
        }
        if (*(s32 *)record & 0x800) {
            *(s32 *)((char *)arg0 + 0x100) =
                *(s32 *)((char *)arg0 + 0x100) & ~0x100;
            func_80214178(arg0, arg1, 0);
        } else {
            func_80214178(arg0, arg1, 1);
        }
    } else {
        func_80214178(arg0, arg1, 0x40);
    }
    *(s8 *)((char *)arg1 + 0x37) = 0;
}
