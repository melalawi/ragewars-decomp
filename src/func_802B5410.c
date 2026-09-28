#include "basetypes.h"

s32 func_802B5410(s32 a, s32 b, void *c, s32 d, s32 e) {
    u32 temp_a1;
    u32 temp_v1;
    u32 var_a3;

    temp_a1 = *(u32 *)((char *)c + 4);
    temp_v1 = temp_a1 + (((d * e) + 0xF) & ~0xF);
    var_a3 = 0;
    if ((u32)(*(s32 *)((char *)c + 0) + *(s32 *)((char *)c + 8)) >= temp_v1) {
        var_a3 = temp_a1;
        *(u32 *)((char *)c + 4) = temp_v1;
    }
    return (s32) var_a3;
}
