#include "common/types.h"
#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
/* FAKEMATCH: retains inherited numeric field accesses because a verified live shared layout for those accesses is not available; the old access widths and evaluation order are preserved. */
#include "types.h"
extern s32 D_80142208_de;

extern f32 func_80274A90_de(f32, f32);










void func_80206080_de(void *arg0, void *arg1) {
    void *base;
    char *ctx;
    f32 result;
    s32 count;
    s32 temp_v1;
    f64 var_f1;
    f32 scaled;

    base = ((func_80205314_S1 *)(arg0))->unk18;
    base = &((func_80206080_S2 *)(base))->unk14;
    result = func_80274A90_de(((func_80206080_S2 *)(base))->unkC, ((func_80206080_S2 *)(base))->unk10);
    ((func_80207BB8_S4 *)(arg1))->unk64 = result;
    ctx = (char *) &D_80142208_de;
    if (((ObjectState1E_2 *)(ctx))->unk_1D != 0) {
        count = *(s32 *) (ctx - 0x1258);
        if ((u32) count >= 3) {
            count -= 2;
            scaled = result * D_800C1AD0_de;
            temp_v1 = 0x64 - count * 25;
            var_f1 = (f64) temp_v1;
            if (temp_v1 < 0) {
                var_f1 += (4294967296.0);
            }
            ((func_80207BB8_S4 *)(arg1))->unk64 = scaled * (f32) var_f1;
        }
    }
}
