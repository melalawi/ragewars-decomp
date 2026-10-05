#include "span_1000/code_802AFEAC.h"
#include "types.h"




s32 func_802B0340_de(s32 a, s32 b, void *c, s32 d, s32 e) {
    u32 temp_a1;
    u32 temp_v1;
    u32 var_a3;

    temp_a1 = ((func_802B5410_S1 *)(c))->unk4;
    temp_v1 = temp_a1 + (((d * e) + 0xF) & ~0xF);
    var_a3 = 0;
    if ((u32)(((func_802B5410_S1 *)(c))->unk0 + ((func_802B5410_S1 *)(c))->unk8) >= temp_v1) {
        var_a3 = temp_a1;
        ((func_802B5410_S1 *)(c))->unk4 = temp_v1;
    }
    return (s32) var_a3;
}
