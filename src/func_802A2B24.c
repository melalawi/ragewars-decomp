#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_802A1C08(void *, M2C_UNK *, s32);
extern M2C_UNK D_800CAF20;
void func_802A2B24(void *arg0, s32 arg1) {
    (*(s32 *)((s8 *)(arg0) + (0x58))) = arg1;
    func_802A1C08(arg0 + 0x60, &D_800CAF20, arg1);
}
