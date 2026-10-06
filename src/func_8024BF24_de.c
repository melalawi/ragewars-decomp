#include "span_1000/code_8024BA6C.h"
#include "common/unused.h"
#if defined(VERSION_EU)
#define func_802B2350 func_802AD520_eu
#else
#define func_802B2350 func_802AD280_de
#endif
#include "span_C76B0/data.h"
#include "span_1000/code_8024BA6C.h"



extern char D_800C3AE8_de;



extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern f32 func_802B2350(s32 arg0);
extern void func_80253754_de(s32 arg0, s32 arg1);

f32 func_8024BF24_de(void *arg0) {
    f32 var_f20;
    void **temp_s0;

    var_f20 = D_800C3B5C;
    if (((func_8024C284_S1 *)(arg0))->unk100 & 0x40000) {
        temp_s0 = func_8025193C_de(0, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C3AE8_de, 1);
        if (temp_s0 != 0) {
            var_f20 = func_802B2350((s32) ((func_8024BF14_S2 *)(func_8028FDB4_de(*temp_s0, 0)))->unk1E);
            func_80253754_de(0, (s32) temp_s0);
        }
    }
    return var_f20;
}

