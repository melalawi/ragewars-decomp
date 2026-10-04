#include "span_1000/code_8026565C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_8024BEDC_de(void *arg0);


f32 func_802672D0_de(u8 *arg0) {
    if (*arg0 == 1) {
        return func_8024BEDC_de(arg0);
    } else {
        return D_800C4420_de;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4350_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9510_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C46D0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4710_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4420_4 = 1.0f;
#endif
