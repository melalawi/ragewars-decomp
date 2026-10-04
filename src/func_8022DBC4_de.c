#include "common/types.h"
#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Returns the constant after D_800C7EC0 less the cube of its difference from the argument. */






f32 func_8022DBC4_de(f32 arg0) {
    f32 temp = ((func_802077F4_S2 *)(&D_800C2DD0_de))->unk4 - arg0;
    return ((func_802077F4_S2 *)(&D_800C2DD0_de))->unk4 - (temp * temp * temp);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D04_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EC4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3078_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30B8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DD4_4 = 1.0f;
#endif
