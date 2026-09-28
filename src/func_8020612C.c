#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

void func_8020612C(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_a2;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = *(void **)((char *)arg0 + 0x18);
    temp_a2 = (char *)temp_v0 + 0x14;
    if (*(s32 *)((char *)temp_a2 + 4) == 0) {
        if (*(s16 *)((char *)temp_a2 + 0x14) == -1) {
            *(f32 *)((char *)arg1 + 0x40) = 0.0f;
            return;
        }
        if (*(s16 *)((char *)temp_a2 + 0x16) == -1) {
            *(f32 *)((char *)arg1 + 0x40) = 0.0f;
            return;
        }
    }
    if (*(s32 *)((char *)arg1 + 0x124) == *(s16 *)((char *)temp_a2 + 0xA)) {
        *(f32 *)((char *)arg1 + 0x40) = 0.0f;
        return;
    }
    temp_v1 = *(s32 *)((char *)temp_a2 + 0x0);
    if (!(temp_v1 & 1)) {
        if (*(s32 *)((char *)arg1 + 0x128) <= 0) {
            return;
        }
    }
    var_v0 = temp_v1 & 2;
    if (var_v0 != 0) {
        if (*(s32 *)((char *)arg0 + 0x100) & 0x200) {
            *(f32 *)((char *)arg1 + 0x40) = 0.0f;
            return;
        }
    }
    if (*(f32 *)((char *)arg1 + 0x40) >= *(f32 *)((char *)arg1 + 0x64)) {
        func_80214178(arg0, arg1, 1);
    }
}
