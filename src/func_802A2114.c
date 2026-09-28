#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern M2C_UNK D_800D2BB0;
void func_802A2114(void) {
    if ((*(s32 *)((s8 *)(&D_800D2BB0) + (0))) != 0) {
        func_80254784((*(s32 *)((s8 *)(&D_800D2BB0) + (0))));
    }
    (*(s32 *)((s8 *)(&D_800D2BB0) + (0))) = 0;
    (*(s32 *)((s8 *)(&D_800D2BB0) + (0xC))) = 0;
    (*(s32 *)((s8 *)(&D_800D2BB0) + (0x10))) = 0;
}
