#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B030(void *arg0, s32 arg1) {
    (*(s32 *)((s8 *)(arg0) + (0x16D0))) = arg1;
    func_802227D0(arg0, arg0, 0x10);
}
