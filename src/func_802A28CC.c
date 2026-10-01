#include "basetypes.h"

extern f64 func_80414430(void);
extern f64 D_800D2C10;

f64 func_802A28CC(void) {
    return func_80414430() - D_800D2C10;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800CD8B0_8 = 0.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800D2C10_8 = 0.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800CE580_8 = 0.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800CEF50_8 = 0.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800CD9A0_8 = 0.0;
#endif
