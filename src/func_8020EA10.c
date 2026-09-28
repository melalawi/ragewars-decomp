#include "basetypes.h"

extern void *func_8022A82C(char *);
extern f32 func_80209B64(void *arg0);
extern f32 func_80274B00(f32 arg0, f32 arg1);
extern s32 D_801468A0;
extern f32 D_800C6F40;
extern f32 D_800C6F48;

s32 func_8020EA10(void **arg0) {
    char *base;
    f32 temp_f20;

    base = (char *)&D_801468A0;
    if (*(s32 *)(base + 0x78) == 0) {
        return 0;
    }
    if (*(u8 *)((char *)(*(void **)((char *)(*arg0) + 0x5D8)) + 0x8F) != 0) {
        return 0;
    }
    if (func_8022A82C(base - 0x1860) != 0) {
        return 0;
    }
    temp_f20 = func_80209B64(arg0) * D_800C6F40 + *(f32 *)((char *)&D_800C6F40 + 4);
    if (temp_f20 < func_80274B00(0.0f, D_800C6F48)) {
        return 1;
    }
    return 0;
}
