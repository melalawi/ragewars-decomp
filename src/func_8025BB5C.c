#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8025BB5C(s32 a) {
    s32 var_v0;
    void *var_a0;
    var_a0 = a + 4;
    var_v0 = 0x10;
    do {
        (*(s32 *)((s8 *)(var_a0) + (0x50))) = 0;
        var_v0 -= 1;
        var_a0 += 0xCC;
    } while (var_v0 >= 0);
}
