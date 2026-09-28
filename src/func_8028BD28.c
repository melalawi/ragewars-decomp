#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8028BD28(void *arg0, s32 arg1) {
    u8 *temp_v0_2;
    void *temp_v0;
    temp_v0 = func_8028FD94((*(void **)((s8 *)(arg0) + (0x80))), 1);
    func_8028FD94(temp_v0, 0);
    temp_v0_2 = func_8028FD94(temp_v0, 1) + arg1;
    *temp_v0_2 -= 1;
}
