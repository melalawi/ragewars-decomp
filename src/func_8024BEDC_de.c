#include "span_1000/code_8024BA6C.h"
#include "span_1000/code_8024BA6C.h"
#include "types.h"
#include "common/unused.h"
#include "span_C76B0/data.h"
#include "packed_float.h"

extern f32 func_802B72B0_de(f32);

void func_8024BEDC_de(void *arg0) {
    float temp_f12 = ((func_8024BECC_S1 *)(arg0))->unk50;
    float temp_f1 = ((func_8024BECC_S1 *)(arg0))->unk54;
    float temp_f0 = ((func_8024BECC_S1 *)(arg0))->unk58;
    func_802B72B0_de(((temp_f12 * temp_f12) + (temp_f1 * temp_f1) + (temp_f0 * temp_f0)) * (0.3333333432674408f));
}
extern char D_800C3AE8_de;

extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);

extern void func_80253754_de(s32 arg0, s32 arg1);

f32 func_8024BF24_de(void *arg0) {
    f32 var_f20;
    void **temp_s0;

    var_f20 = D_800C3B5C;
    if (((func_8024C284_S1 *)(arg0))->unk100 & 0x40000) {
        temp_s0 = func_8025193C_de(0, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C3AE8_de, 1);
        if (temp_s0 != 0) {
            var_f20 = RW_BITS_TO_FLOAT((s32) ((func_8024BF14_S2 *)(func_8028FDB4_de(*temp_s0, 0)))->unk1E);
            func_80253754_de(0, (s32) temp_s0);
        }
    }
    return var_f20;
}
