#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_802227F4_de(void *, void *, s32);
extern void func_8022CE78_de(s32 arg0, s32 arg1);








void func_8022CDBC_de(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = ((func_8022CDAC_S1 *)(arg0))->unk6C4;
    if ((temp_f2 < 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 >= 0.0f) ||
        (temp_f2 > 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 <= 0.0f) ||
        (((func_8022CDAC_S1 *)(arg0))->unk658 >= D_800C2D8C_de)) {
        func_802227F4_de(arg0, arg1, 8);
    } else {
        ((func_8022CA04_S3 *)(arg1))->unk20 = D_800C2D90_de;
    }
    func_8022CE78_de((s32)arg0, (s32)arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CBC_4 = 1.5f;
const float unbake_rodata_800C2CC0_4 = 307.199982f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E7C_4 = 1.5f;
const float unbake_rodata_800C7E80_4 = 307.199982f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3030_4 = 1.5f;
const float unbake_rodata_800C3034_4 = 307.199982f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3070_4 = 1.5f;
const float unbake_rodata_800C3074_4 = 307.199982f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D8C_4 = 1.5f;
const float unbake_rodata_800C2D90_4 = 307.199982f;
#endif
