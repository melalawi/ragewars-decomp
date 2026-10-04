#include "common/types.h"
#include "span_1000/code_80208410.h"
#include "span_C76B0/data.h"
#include "types.h"



extern f32 func_80274A90_de(f32 arg0, f32 arg1);









f32 func_80209DAC_de(void *arg0) {
    f32 temp_f20;
    f32 var_f14;
    u8 state;

    state = ((func_80209DAC_S2 *)(((func_80209B64_S4 *)(*(void **)arg0))->unk5D8))->unk93.v0;
    switch (state) {
    default:
        ((func_80209DAC_S2 *)(((func_80209B64_S4 *)(*(void **)arg0))->unk5D8))->unk93.v1 = 0;
    case 0:
        var_f14 = (1.2217305898666382f);
        break;
    case 1:
        var_f14 = (0.8726646900177002f);
        break;
    case 2:
        var_f14 = (0.523598849773407f);
        break;
    }
    temp_f20 = ((func_80209DAC_S3 *)(arg0))->unk244;
    if (temp_f20 < func_80274A90_de(-var_f14, var_f14)) {
        temp_f20 += D_800C1CC0_de;
    } else {
        temp_f20 -= D_800C1CC4_de;
    }
    ((func_80209DAC_S3 *)(arg0))->unk244 = temp_f20;
    return temp_f20;
}
