#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80212BD0(void *arg0) {
    void *temp_s0;
    temp_s0 = (*(void **)((s8 *)((*(void **)((s8 *)(arg0) + (0x1D8)))) + (0x1454)));
    (*(s32 *)((s8 *)(temp_s0) + (0x220))) = 0;
    func_80209988(temp_s0);
    (*(s32 *)((s8 *)(temp_s0) + (0x2FC))) = 0;
}
