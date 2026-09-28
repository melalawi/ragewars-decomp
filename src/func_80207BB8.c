#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern f32 D_800D2988;
extern f32 D_800C6C90;

void func_80207BB8(void *arg0, void *arg1) {
    void *temp_a3;
    s32 temp_a2;
    s32 var_v1;

    temp_a3 = (char *)*(void **)((char *)arg0 + 0x18) + 0x14;
    temp_a2 = *(s32 *)((char *)temp_a3 + 0x24);
    var_v1 = 1;
    if (temp_a2 & 0x10000) {
        var_v1 = (u32)(*(s32 *)((char *)arg0 + 0x38) & 0x40) < (u32)var_v1;
    }
    if ((temp_a2 & 0x4000) && !(*(s32 *)((char *)arg0 + 0x38) & 0x40)) {
        var_v1 = 0;
    }
    if (*(s32 *)((char *)arg0 + 0x38) & 8) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        *(f32 *)((char *)arg1 + 0x64) = *(f32 *)((char *)arg1 + 0x64) + (D_800D2988 / *(f32 *)((char *)temp_a3 + 0x38));
    }
    if (*(f32 *)((char *)arg1 + 0x64) >= D_800C6C90) {
        func_80214178(arg0, arg1, 2);
    }
}
