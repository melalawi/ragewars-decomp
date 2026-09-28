#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C7E70;
extern f32 D_800C7E74;
extern f32 D_800C7E78;
void func_8022CD68(void *arg0, void *arg1) {
    if ((*(f32 *)((s8 *)(arg0) + (0x6A4))) < 0.0f) {
        (*(f32 *)((s8 *)(arg0) + (0x6C4))) = (f32) D_800C7E70;
    } else {
        (*(f32 *)((s8 *)(arg0) + (0x6C4))) = (f32) D_800C7E74;
    }
    (*(f32 *)((s8 *)(arg1) + (0x20))) = (f32) D_800C7E78;
}
