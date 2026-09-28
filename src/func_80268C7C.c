#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80255C58(void *, s32);
M2C_UNK func_80255E78();
void func_80268C7C(void *a, s32 b) {
    (*(s16 *)((s8 *)(b) + (0x16))) = 0;
    func_80255E78();
    func_80255C58(a + 0x14, b);
}
