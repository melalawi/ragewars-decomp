#include "basetypes.h"

extern s32 D_80105190;
extern s32 D_80105194;

void func_80255428(s32 arg0) {
    s32 key;
    s32 *temp_v0;
    s32 *var_a0;
    s32 *var_a2;
    s32 *var_v1;

    key = arg0;
    var_v1 = (s32 *)(D_80105194 + ((((key << 5) ^ ((u32)key >> 1) ^
                                      ((u32)key >> 9) ^ ((u32)key >> 0x11)) &
                                     D_80105190) * 0x10));
    var_a2 = 0;
    if (*var_v1 != key) {
loop:
        var_a2 = var_v1;
        var_v1 = *(s32 **)((char *)var_v1 + 0xC);
        if (var_v1 != 0) {
            if (*var_v1 == key) {
                goto found;
            }
            goto loop;
        }
    } else {
found:
        if (var_v1 != 0) {
            var_a0 = *(s32 **)((char *)var_v1 + 0xC);
            if (var_a0 != 0) {
                *(s32 *)((char *)var_v1 + 4) = *(s32 *)((char *)var_a0 + 4);
                *var_v1 = *var_a0;
                *(s32 **)((char *)var_v1 + 0xC) = *(s32 **)((char *)var_a0 + 0xC);
                temp_v0 = var_v1;
                var_v1 = var_a0;
                var_a0 = temp_v0;
            }
            if (var_a2 != 0) {
                *(s32 **)((char *)var_a2 + 0xC) = var_a0;
            }
            *(s32 *)((char *)var_v1 + 4) = 0;
            *var_v1 = 0;
            *(s32 *)((char *)var_v1 + 0xC) = 0;
        }
    }
}
