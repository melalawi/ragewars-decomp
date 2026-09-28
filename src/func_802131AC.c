#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802131AC(void *arg0) {
    void *temp_a0;
    temp_a0 = (*(void **)((s8 *)((*(void **)((s8 *)(arg0) + (0x1D8)))) + (0x1454)));
    (*(s32 *)((s8 *)(temp_a0) + (0x68))) = 0;
    (*(s32 *)((s8 *)(temp_a0) + (0x238))) = 0;
    (*(s32 *)((s8 *)(temp_a0) + (0x220))) = 0;
    func_80209988(temp_a0);
}
