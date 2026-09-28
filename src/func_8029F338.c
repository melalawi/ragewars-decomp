#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8029F338(void *arg0, void *arg1, void *arg2) {
    (*(f32 *)((s8 *)(arg0) + (0))) = (f32) ((*(f32 *)((s8 *)(arg1) + (0))) - (*(f32 *)((s8 *)(arg2) + (0))));
    (*(f32 *)((s8 *)(arg0) + (4))) = (f32) ((*(f32 *)((s8 *)(arg1) + (4))) - (*(f32 *)((s8 *)(arg2) + (4))));
    (*(f32 *)((s8 *)(arg0) + (8))) = (f32) ((*(f32 *)((s8 *)(arg1) + (8))) - (*(f32 *)((s8 *)(arg2) + (8))));
}
