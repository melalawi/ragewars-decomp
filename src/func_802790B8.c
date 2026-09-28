#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802790B8(void *arg0, void *arg1) {
    (*(s32 *)((s8 *)(arg0) + (0x100))) = (s32) ((*(s32 *)((s8 *)(arg0) + (0x100))) | 0x40000000);
    (*(f32 *)((s8 *)(arg1) + (0x48))) = (f32) (*(f32 *)((s8 *)(arg0) + (8)));
    (*(f32 *)((s8 *)(arg1) + (0x4C))) = (f32) (*(f32 *)((s8 *)(arg0) + (0xC)));
    (*(f32 *)((s8 *)(arg1) + (0x50))) = (f32) (*(f32 *)((s8 *)(arg0) + (0x10)));
    (*(f32 *)((s8 *)(arg1) + (0x60))) = (f32) (*(f32 *)((s8 *)(arg0) + (0x6C)));
}
