#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8028DF6C(void *arg0, s32 arg1) {
    void *temp_v0;
    temp_v0 = func_8028FD94((*(void **)((s8 *)(arg0) + (0x80))), 1);
    func_8028FD94(temp_v0, 0);
    return func_8028FD94(temp_v0, 1) + arg1;
}
