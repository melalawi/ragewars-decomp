#include "span_1000/code_802A26F8.h"
#include "types.h"

extern f64 
#if defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_804147F0_eu_x
#else
func_804143B0_de
#endif
(void);

f64 func_802A18CC_de(void) {
    return 
#if defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_804147F0_eu_x
#else
func_804143B0_de
#endif
() - (0.0);
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
