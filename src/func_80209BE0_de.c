#include "common/types.h"
#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
















f32 func_80209BE0_de(void **arg0) {
    f32 var_f0;
    f32 var_f1;
    u8 state;
    void *base;

    base = *arg0;
    state = ((func_80209B64_S2 *)(((func_80209B64_S1 *)(base))->unk5D8))->unk93;
    var_f1 = ((func_80209BE0_S3 *)(((func_80209B64_S1 *)(base))->unk18))->unk34;
    var_f1 *= D_800C1CA8_de;
    switch (state) {
    case 1:
        goto done;
    default:
        ((func_80209B64_S5 *)(((func_80209B64_S4 *)(*arg0))->unk5D8))->unk93 = 0;
    case 0:
        var_f0 = D_800C1CAC_de;
        goto multiply;
    case 2:
        var_f0 = D_800C1CB0_de;
    }
multiply:
    var_f1 *= var_f0;
done:
    return var_f1;
}
