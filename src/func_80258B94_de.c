#include "span_1000/code_80258760.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"





void func_80258B94_de(void *arg0, int arg1) {
    double d = (double)arg1;
    if (arg1 < 0) {
        d = d + D_800C3EE8_de;
    }
    ((func_80258BB4_S1 *)(arg0))->unk2BA4 = (float)d;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3E18_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C8FD8_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4198_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C41D8_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C3EE8_8 = 4294967296.0;
#endif
