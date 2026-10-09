#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022BA90.h"
#include "types.h"
#include "span_1000/code_8026AC38.h"


extern u8 D_801462C8[];


extern char D_8011FE88;










void func_8022BB80_de(void *arg0) {
    s32 var_a2;
    u8 *base;

    base = D_801462C8;
    if (base[0x1D] == 0) {
        var_a2 = 0x66;
    } else if (((func_8022BB70_S1 *)(base))->unk62C != 0 && ((func_8021C9B4_S2 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk8F != 0) {
        var_a2 = D_800CE47C;
    } else {
        var_a2 = D_800CE430[((func_8021C9B4_S3 *)(((func_8022BB70_S2 *)(arg0))->unk18))->unkC];
        ((func_8022BB70_S2 *)(arg0))->unk3 = ((func_8021C9B4_S2 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk81;
    }
    ((void (*)(void *, void *, s32, s32))func_8028B274_de)(&D_8011FE88, arg0, var_a2, ((func_8022BB70_S2 *)(arg0))->unk86C);
}
