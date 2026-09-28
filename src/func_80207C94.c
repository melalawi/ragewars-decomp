#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

void func_80207C94(void *arg0, void *arg1) {
    s32 temp_a2;
    void *temp_a3;
    s32 var_v1;
    s32 temp_v0;

    temp_a3 = (char *)*(void **)((char *)arg0 + 0x18) + 0x14;
    temp_a2 = *(s32 *)((char *)temp_a3 + 0x24);
    var_v1 = 1;
    if (temp_a2 & 0x20) {
        temp_v0 = *(s32 *)((char *)arg1 + 0) & 0x20000;
        var_v1 = (u32)0 < (u32)temp_v0;
    }
    if ((temp_a2 & 0x200) && !(*(s32 *)((char *)arg0 + 0x38) & 0x40)) {
        var_v1 = 0;
    }
    if ((*(s32 *)((char *)temp_a3 + 0x24) & 0x800) && (*(s32 *)((char *)arg0 + 0x38) & 0x40)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (*(f32 *)((char *)arg1 + 0x40) >= *(f32 *)((char *)temp_a3 + 0x50)) {
            func_80214178(arg0, arg1, 3);
        }
    } else {
        *(f32 *)((char *)arg1 + 0x40) = 0.0f;
    }
}
