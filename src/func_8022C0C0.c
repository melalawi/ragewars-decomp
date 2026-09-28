#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800D2988;
void func_8022C0C0(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    temp_f1 = (*(f32 *)((s8 *)(arg0) + (0x678)));
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800D2988;
        (*(f32 *)((s8 *)(arg0) + (0x678))) = temp_f0;
        if (temp_f0 < 0.0f) {
            (*(f32 *)((s8 *)(arg0) + (0x678))) = 0.0f;
        }
    }
}
