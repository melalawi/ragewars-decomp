#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80264268();
void func_80264808(void *arg0, s32 arg1) {
    (*(s32 *)((s8 *)(arg0) + (0xCC))) = arg1;
    if (arg1 == 0) {
        func_80264268();
    }
}
