#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8028FEB0(void *arg0, void **arg1, s32 *arg2) {
    *arg1 = arg0;
    *arg2 = ((*(s32 *)((s8 *)(arg0) + (0))) * (*(s32 *)((s8 *)(arg0) + (4)))) + 8;
}
