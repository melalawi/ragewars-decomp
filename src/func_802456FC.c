#include "basetypes.h"

extern int func_80245774(void);
extern int func_80245754(void);
extern void *D_800E2830;
extern f32 D_800C88C0;

void func_802456FC(void) {
    if (func_80245774() != 0 && func_80245754() != 0 && *(s32 *)((char *)D_800E2830 + 0x60) == 0) {
        f32 temp = D_800C88C0;
        *(s32 *)((char *)D_800E2830 + 0x60) = 1;
        *(f32 *)((char *)D_800E2830 + 0x64) = temp;
    }
}
