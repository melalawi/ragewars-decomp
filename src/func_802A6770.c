#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80279578(s32, void *);
M2C_UNK func_802795C0(void *, void *);
void func_802A6770(s32 arg0, void *arg1, void *arg2) {
    (*(f32 *)((s8 *)(arg1) + (0x4C))) = (f32) ((*(f32 *)((s8 *)(arg1) + (0x4C))) - (*(f32 *)((s8 *)(arg2) + (0xAC))));
    func_802795C0(arg1 + 0x40, arg2);
    func_80279578(arg0 + 0x6A90, arg2);
}
