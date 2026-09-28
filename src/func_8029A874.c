#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern s32 D_8014D080;
void func_8029A874(s32 arg0, s32 arg1) {
    s32 var_a2;
    void *var_v1;
    var_a2 = 0;
    var_v1 = D_8014D080 + 0x1C;
    do {
        if ((*(s32 *)((s8 *)(var_v1) + (0))) == arg0) {
            (*(s32 *)((s8 *)(var_v1) + (0x10))) = arg1;
        }
        var_a2 += 1;
        var_v1 += 0x14;
    } while (var_a2 < 0x40);
}
