#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80209AE8.h"
#include "types.h"
















f32 func_80209C5C_de(void **arg0) {
    f32 var_f0;
    f32 var_f1;
    u8 state;
    void *base;

    base = *arg0;
    state = ((func_80209B64_S2 *)(((func_80209B64_S1 *)(base))->unk5D8))->unk93;
    var_f1 = ((func_80209C5C_S3 *)(((func_80209B64_S1 *)(base))->unk18))->unk30;
    var_f1 *= D_800C1CB4_de;
    switch (state) {
    case 1:
        break;
    default:
        ((func_80209B64_S5 *)(((func_80209B64_S4 *)(*arg0))->unk5D8))->unk93 = 0;
    case 0:
        var_f0 = D_800C1CB8_de;
        goto multiply;
    case 2:
        var_f0 = D_800C1CBC_de;
multiply:
        var_f1 *= var_f0;
        break;
    }
    return var_f1;
}
