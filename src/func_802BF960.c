#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern void *D_800D8444;
void func_802BF960(f32 arg0) {
    void *temp_v0;
    temp_v0 = func_802C2020();
    (*(f32 *)((s8 *)(D_800D8444) + (0x24))) = arg0;
    (*(u16 *)((s8 *)(D_800D8444) + (0))) = (u16) ((*(u16 *)((s8 *)(D_800D8444) + (0))) | 4);
    func_802C2040(temp_v0);
}
