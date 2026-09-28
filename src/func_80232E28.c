#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8022AF64(void *, M2C_UNK);
void func_80232E28(void *arg0) {
    void *temp_a0;
    temp_a0 = (*(void **)((s8 *)(arg0) + (0x1D8)));
    if ((*(s32 *)((s8 *)(temp_a0) + (0x11C0))) == 0) {
        func_8022AF64(temp_a0, 0x9E2);
    }
}
