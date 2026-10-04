#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_80274870_de(f32 *, f32, f32);
extern f32 D_800C2DF8_de[2];





void func_8022DD94_de(void *arg0) {
    f32 sp10;
    f32 var_f1;
    f32 var_f2;

    var_f1 = 0.0f;
    if ((u32)(((func_8022DD84_S1 *)(arg0))->unk650 - 9) < 4U) {
        var_f1 = D_800C2DF8_de[0];
    }
    sp10 = ((func_8022DD84_S1 *)(arg0))->unk720;
    func_80274870_de(&sp10, var_f1, 0.25f);
    var_f2 = sp10 - ((func_8022DD84_S1 *)(arg0))->unk720;
    if (var_f2 < 0.0f) {
        if (-var_f2 < D_800C2DF8_de[1]) {
            goto clamp;
        }
    } else if (var_f2 < D_800C2E00_de) {
clamp:
        var_f2 = 0.0f;
    }
    ((func_8022DD84_S1 *)(arg0))->unk720 = ((func_8022DD84_S1 *)(arg0))->unk720 + var_f2;
}
