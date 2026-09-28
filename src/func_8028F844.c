#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_802C2260(s32);
void func_8028F844(void *arg0, void *arg1, s32 arg2) {
    s32 temp_v0;
    temp_v0 = func_802C2260(1);
    (*(s32 *)((s8 *)(arg1) + (4))) = arg2;
    (*(void **)((s8 *)(arg1) + (0))) = (void *) (*(void **)((s8 *)(arg0) + (0x2E0)));
    (*(void **)((s8 *)(arg0) + (0x2E0))) = arg1;
    func_802C2260(temp_v0);
}
