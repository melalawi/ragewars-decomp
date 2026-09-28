#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
s32 func_8021917C(void *arg0, void *arg1) {
    if (((*(s32 *)((s8 *)((*(void **)((s8 *)(arg1) + (0x698)))) + (0xB0))) & 0x8000) && ((*(u8 *)((s8 *)((*(void **)((s8 *)(arg1) + (0x5D8)))) + (0x92))) != 0xFF)) {
        (*(s32 *)((s8 *)(arg0) + (0x6C))) = -1;
        return 1;
    }
    return 0;
}
