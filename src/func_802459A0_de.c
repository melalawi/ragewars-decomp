#include "span_1000/code_80245804.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_8040184C_de(f32 arg0);
extern void *D_800DE7E0;






f32 func_802459A0_de(void) {
    void *record = D_800DE7E0;
    f32 temp_f1;

    if (((func_80245990_S1 *)(record))->unk38 == 0) {
        return D_800C37D4_de;
    }
    temp_f1 = ((func_80245990_S1 *)(record))->unk100;
    if (!(D_800C37D8_de < temp_f1)) {
        return func_8040184C_de(((func_80245990_S1 *)(record))->unk1C);
    }
    return temp_f1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3704_4 = 47.5f;
const float unbake_rodata_800C3708_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88C4_4 = 47.5f;
const float unbake_rodata_800C88C8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A84_4 = 47.5f;
const float unbake_rodata_800C3A88_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3AC4_4 = 47.5f;
const float unbake_rodata_800C3AC8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37D4_4 = 47.5f;
const float unbake_rodata_800C37D8_4 = 1.0f;
#endif
