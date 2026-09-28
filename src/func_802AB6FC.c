#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_802A8A94();
s32 func_802AB6FC(void *arg0, s32 *arg1) {
    (*(s32 **)((s8 *)(arg0) + (4))) = arg1;
    (*(s32 *)((s8 *)(arg0) + (8))) = 2;
    return func_802A8A94();
}
