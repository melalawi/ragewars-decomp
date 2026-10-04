#include "common/types.h"
#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Reports whether the object's float at 0x718 is above the constant after D_800C7EC8. */








s32 func_8022DC1C_de(void *arg0) {
    f32 field = ((func_8022DC0C_S1 *)(arg0))->unk718;
    f32 konst = ((func_802077F4_S2 *)(&D_800C2DD8_de))->unk4;
    s32 result = 1;
    if (!(konst < field)) {
        result = 0;
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D0C_4 = 5.11999989f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7ECC_4 = 5.11999989f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3080_4 = 5.11999989f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30C0_4 = 5.11999989f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DDC_4 = 5.11999989f;
#endif
