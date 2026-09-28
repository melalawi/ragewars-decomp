#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80274090(void *);
void func_80217074(void *arg0, f32 arg1) {
    (*(f32 *)((s8 *)(arg0) + (0x6C))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x6C))) + arg1);
    func_80274090(arg0 + 0x6C);
}
