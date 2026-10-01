#include "basetypes.h"

extern f32 func_8024BECC(void *arg0);
extern f32 D_800C9510;

f32 func_802672E8(u8 *arg0) {
    if (*arg0 == 1) {
        return func_8024BECC(arg0);
    } else {
        return D_800C9510;
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
