#include "span_16E000/code_80444030.h"
#include "types.h"
#include "common/draft_fields_func_80444148_de.h"

extern int D_800D3C50;

s32 func_804441B0_de(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;
    u8 temp_v0_2;
    u8 *temp_v1;

    var_a1 = 0;
    do {
        temp_v1 = (u8 *)(u32)arg0 + var_a1;
        temp_v0_2 = *((u8 *)(u32)D_800D3C50 + var_a1);
        var_a1 += 1;
        ((struct Measured_func_80444148_de_871c3919fce3 *)temp_v1)->value = temp_v0_2;
        temp_v0 = var_a1 < 8;
    } while (temp_v0 != 0);
    return temp_v0;
}
