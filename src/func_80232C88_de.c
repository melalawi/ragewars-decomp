#include "span_1000/code_80232B44.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void *D_800CB2EC[];

extern void func_8022AF74_de(void *arg0, s32 arg1);










void func_80232C88_de(void *arg0, void *arg1) {
    void *temp_a0;
    s16 idx;

    temp_a0 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    idx = ((func_80232C78_S2 *)(temp_a0))->unk62E;
    ((func_80228774_S7 *)(arg1))->unk130 = ((func_80232C78_S4 *)(D_800CB2EC[idx]))->unk18 * D_800C3020_de;
    if ((((func_80232C78_S2 *)(temp_a0))->unk62E == 8) && (((func_80232C78_S2 *)(temp_a0))->unk11C0 == 0)) {
        func_8022AF74_de(temp_a0, 0xA3C);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F50_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8110_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32D0_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3310_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3020_4 = 15.0f;
#endif
