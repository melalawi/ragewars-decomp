#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802B76A0(void *a, s16 b) {
    void *temp_v1;
    temp_v1 = (b * 0x30) + (*(s32 *)((s8 *)(a) + (0x40)));
    if ((*(s32 *)((s8 *)(temp_v1) + (0x28))) == 0) {
        (*(s32 *)((s8 *)(temp_v1) + (0x1C))) = 0;
        if ((*(s32 *)((s8 *)(a) + (0x3C))) == b) {
            (*(s32 *)((s8 *)(a) + (0x3C))) = -1;
        }
    }
}
