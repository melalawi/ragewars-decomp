#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_80284408(void *a) {
    if ((*(s32 *)((s8 *)(a) + (0x1DC))) != 0) {
        func_8025CA44(func_8025CC8C(), (*(s32 *)((s8 *)(a) + (0x1DC))));
        (*(s32 *)((s8 *)(a) + (0x1DC))) = 0;
    }
}
