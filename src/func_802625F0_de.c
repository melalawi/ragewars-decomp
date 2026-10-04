#include "common/types.h"
#include "span_1000/code_802625B8.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void *func_8026049C_de(void *arg0);
extern char *func_8028FDB4_de(s32 *, s32);
extern f32 func_80273EE4_de(f32, f32, f32);






void func_802625F0_de(void *arg0, f32 arg1) {
    u8 *base;
    s32 count;
    s32 temp_f2;
    s32 temp_a0;
    s32 var_v1;
    f32 b_term;
    f32 e_term;

    base = &((func_8020CC0C_S1 *)(func_8028FDB4_de(func_8026049C_de(arg0), 0)))->unk8;
    count = ((func_8022BECC_S2 *)(arg0))->unk8;
    var_v1 = count - 1;
    temp_f2 = (s32) arg1;
    temp_a0 = temp_f2 + 1;
    if (temp_a0 < var_v1) {
        var_v1 = temp_a0;
    }
    b_term = (f32) *(s16 *) (base + temp_f2 * 2) * D_800C4258_de;
    e_term = (f32) *(s16 *) (base + var_v1 * 2) * D_800C4258_de;
    func_80273EE4_de(arg1 - (f32) temp_f2, b_term, e_term);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4188_4 = 9.58767268e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9348_4 = 9.58767268e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4508_4 = 9.58767268e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4548_4 = 9.58767268e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4258_4 = 9.58767268e-05f;
#endif
