#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 func_8024E7DC_de(void *);







void func_8022C080_de(void *arg0, void *arg1) {
    void *result;
    f32 t0;
    f32 t1;

    result = (void *)func_8024E7DC_de(arg1);
    if (result != 0) {
        t0 = ((func_8022C070_S1 *)(result))->unk2C;
        t1 = ((func_8022C070_S2 *)(arg0))->unk780;
        t0 = t0 - t1;
        t0 = t0 * D_800C2D28_de;
        t1 = t1 + t0;
        ((func_8022C070_S2 *)(arg0))->unk780 = t1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C58_4 = 0.200000003f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E18_4 = 0.200000003f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FCC_4 = 0.200000003f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C300C_4 = 0.200000003f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D28_4 = 0.200000003f;
#endif
