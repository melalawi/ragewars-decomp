#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80209AE8.h"
#include "types.h"
















f32 func_80209B64_de(void *arg0) {
    f32 value;
    u8 state;
    void *base;

    base = *(void **)arg0;
    state = ((func_80209B64_S2 *)(((func_80209B64_S1 *)(base))->unk5D8))->unk93;
    value = ((func_80209B64_S3 *)(((func_80209B64_S1 *)(base))->unk18))->unk28;
    value *= D_800C1C9C_de;
    switch (state) {
    case 1:
        break;
    default:
        ((func_80209B64_S5 *)(((func_80209B64_S4 *)(*(void **)arg0))->unk5D8))->unk93 = 0;
    case 0:
        value *= D_800C1CA0_de;
        break;
    case 2:
        value *= D_800C1CA4_de;
        break;
    }
    return value;
}
