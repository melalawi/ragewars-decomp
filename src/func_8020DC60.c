#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80209874(void *, s32);
s32 func_8020DD04(s32);
void func_8020DC60(void *arg0) {
    s32 temp_v0;
    temp_v0 = func_8020DD04((*(s32 *)((s8 *)((*(void **)((s8 *)(arg0) + (0)))) + (0x18))) + 0x14);
    (*(s32 *)((s8 *)(arg0) + (0x230))) = temp_v0;
    func_80209874(arg0, temp_v0);
}
