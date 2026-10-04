#include "common/types.h"
#include "span_1000/code_80273744.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);
extern char D_800C4928_de;




void func_802741A4_de(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = func_802B72B0_de((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]) + (arg0[3] * arg0[3]));
    if (mag != 0.0f) {
        scale = ((func_802077F4_S2 *)(&D_800C4928_de))->unk4 / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
        arg0[3] = arg0[3] * scale;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C485C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A1C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BDC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C1C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C492C_4 = 1.0f;
#endif
