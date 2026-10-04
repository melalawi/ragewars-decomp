#include "common/types.h"
#include "span_1000/code_8020A95C.h"
#include "span_C76B0/data.h"
#include "types.h"
/** Returns the difference between the constant after D_800C6E20 and func_80209AE8_de's result, scaled by D_800C6E28. */

extern f32 func_80209AE8_de(void);







f32 func_8020AA0C_de(void) {
    return (((func_802077F4_S2 *)(&D_800C1D30_de))->unk4 - func_80209AE8_de()) * (D_800C1D38_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1C64_4 = 1.0f;
const float unbake_rodata_800C1C68_4 = 0.52359885f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E24_4 = 1.0f;
const float unbake_rodata_800C6E28_4 = 0.52359885f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1FD4_4 = 1.0f;
const float unbake_rodata_800C1FD8_4 = 0.52359885f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2014_4 = 1.0f;
const float unbake_rodata_800C2018_4 = 0.52359885f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D34_4 = 1.0f;
const float unbake_rodata_800C1D38_4 = 0.52359885f;
#endif
