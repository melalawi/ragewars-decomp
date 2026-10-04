#include "span_1000/code_8022F054.h"



int func_8022F340_de(void *arg0) {
    int v = ((func_8022F330_S1 *)(arg0))->unk15 + 0x32;
    ((func_8022F330_S1 *)(arg0))->unk15 = (unsigned char)v;
    return v;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD7CC_4[] = {0x00, 0x00, 0x00, 0x0F};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B30_4[] = {0x00, 0x00, 0x00, 0x10};
#elif defined(VERSION_EU)
const float unbake_rodata_800CBFE4_4 = 0.0199999996f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800CB888_4 = 2.80259693e-44f;
#elif defined(VERSION_DE)
const float unbake_rodata_800CBB60_4 = 90.0f;
#endif
