#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern s32 D_801462C8;
void func_802391E8(void *arg0, s8 *arg1, s8 *arg2, s8 *arg3) {
    if (D_801462C8 & 0x4000) {
        *arg1 = 0;
        *arg2 = 0;
        *arg3 = 0;
        return;
    }
    *arg1 = (*(u8 *)((s8 *)(arg0) + (0x520))) & 0xF8;
    *arg2 = (*(u8 *)((s8 *)(arg0) + (0x521))) & 0xF8;
    *arg3 = (*(u8 *)((s8 *)(arg0) + (0x522))) & 0xF8;
}
