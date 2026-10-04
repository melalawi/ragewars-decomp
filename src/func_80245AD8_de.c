#include "span_1000/code_80245804.h"
#include "span_C76B0/data.h"
/* Returns the globally selected record's float at 0xA0 scaled by D_800C88CC. */
extern void *D_800DE7E0;





float func_80245AD8_de(void) {
    void *record = D_800DE7E0;
    return (((func_80245AC8_S1 *)(record))->unkA0) * (D_800C37DC_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C370C_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88CC_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A8C_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3ACC_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37DC_4 = 10.2399998f;
#endif
