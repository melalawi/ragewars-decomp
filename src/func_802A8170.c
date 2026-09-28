#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802A8170(void *arg0, void *arg1) {
    s32 temp_v0;
    temp_v0 = (*(s32 *)((s8 *)(arg0) + (4))) == 0;
    (*(s32 *)((s8 *)(arg0) + (4))) = temp_v0;
    if (temp_v0 != 0) {
        (*(s16 *)((s8 *)(arg0) + (0x18))) = 5;
        (*(s32 *)((s8 *)(arg0) + (0x1C))) = (s32) (*(s32 *)((s8 *)(arg1) + (0xE8)));
        (*(f32 *)((s8 *)(arg0) + (0x20))) = (f32) (*(f32 *)((s8 *)(arg0) + (0x28)));
        (*(s32 *)((s8 *)(arg0) + (0x24))) = (s32) (*(s32 *)((s8 *)(arg0) + (0x2C)));
        return;
    }
    (*(s16 *)((s8 *)(arg0) + (0x18))) = -5;
}
