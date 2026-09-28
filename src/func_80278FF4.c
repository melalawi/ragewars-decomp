#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80278FF4(void *arg0) {
    func_802472E0(arg0);
    (*(s32 *)((s8 *)(arg0) + (0x100))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0x100))) | 0x2100);
}
