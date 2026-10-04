#include "span_1000/code_80232B44.h"
#include "span_C76B0/data.h"
#include "types.h"


extern s32 func_80214178_de(void *, void *, s32);




void func_8023331C_de(void *arg0, void *arg1) {
    ((func_8023330C_S1 *)(arg1))->unk148 = D_800C3050_de;
    func_80214178_de(arg0, arg1, 8);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F80_4 = 300.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8140_4 = 300.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3300_4 = 300.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3340_4 = 300.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3050_4 = 300.0f;
#endif
