#include "basetypes.h"

extern f64 func_8029BD38(void);
extern f64 D_800CACF0;

f64 func_8029EB74(void) {
    return func_8029BD38() * D_800CACF0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5A90_8 = 0.43429449200630182;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CACF0_8 = 0.43429449200630182;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5E00_8 = 0.43429449200630182;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5E40_8 = 0.43429449200630182;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5B60_8 = 0.43429449200630182;
#endif
