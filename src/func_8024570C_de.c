#include "span_1000/code_80242BE0.h"
#include "types.h"

extern int func_80245784_de(void);




extern func_802456FC_S1 *D_800DE7E0;
extern f32 D_800C37D0_de;

void func_8024570C_de(void) {
    if (func_80245784_de() != 0 && func_80245764_de() != 0 && D_800DE7E0->unk60 == 0) {
        f32 temp = D_800C37D0_de;
        D_800DE7E0->unk60 = 1;
        D_800DE7E0->unk64 = temp;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3700_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88C0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A80_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3AC0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37D0_4 = 1.0f;
#endif
