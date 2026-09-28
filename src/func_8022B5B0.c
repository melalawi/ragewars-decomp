#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
f32 func_80274878(f32, f32, s32);
extern M2C_UNK D_800C7E00;
extern s32 D_800CF234;
void func_8022B5B0(void *arg0) {
    if ((*(s32 *)((s8 *)(arg0) + (0x5E4))) != 0) {
        (*(f32 *)((s8 *)(arg0) + (0x12C0))) = func_80274878((*(f32 *)((s8 *)(arg0) + (0x12C0))), (*(f32 *)((s8 *)(&D_800C7E00) + (4))), D_800CF234);
    }
}
