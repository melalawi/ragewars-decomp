#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern s32 D_8014AECC;
void func_80295890(void) {
    if ((*(s32 *)((s8 *)(&D_8014AECC) + (0))) != 0) {
        func_802536F4(0, (*(s32 *)((s8 *)(&D_8014AECC) + (0))));
    }
    (*(s32 *)((s8 *)(&D_8014AECC) + (0))) = 0;
    (*(s32 *)((s8 *)(&D_8014AECC) + (8))) = 0;
    (*(s32 *)((s8 *)(&D_8014AECC) + (0xC))) = 0;
    (*(s32 *)((s8 *)(&D_8014AECC) + (4))) = 0;
}
