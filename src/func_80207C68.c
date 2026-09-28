#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80207C68(void *arg0, s32 *arg1) {
    if (!((*(s32 *)((s8 *)((*(void **)((s8 *)(arg0) + (0x18)))) + (0x38))) & 0x80)) {
        *arg1 &= 0xFFFDFFFF;
    }
}
