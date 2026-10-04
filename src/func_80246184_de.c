#include "span_1000/code_80245D38.h"
#include "span_C76B0/data.h"
/* Resets an object through func_8024DD10_de, then clears its words from 0x1C to 0x38 and at 0x40, 0x44
   and 0x4C, sets the word at 0x3C to -1 and stores D_800C8914 in the float at 0x48. */




void func_80246184_de(void *arg0) {
    float k;

    func_8024DD10_de(arg0);
    k = D_800C3824_de;
    ((func_80246174_S1 *)(arg0))->unk1C = 0;
    ((func_80246174_S1 *)(arg0))->unk20 = 0;
    ((func_80246174_S1 *)(arg0))->unk24 = 0;
    ((func_80246174_S1 *)(arg0))->unk28 = 0;
    ((func_80246174_S1 *)(arg0))->unk2C = 0;
    ((func_80246174_S1 *)(arg0))->unk30 = 0;
    ((func_80246174_S1 *)(arg0))->unk34 = 0;
    ((func_80246174_S1 *)(arg0))->unk38 = 0;
    ((func_80246174_S1 *)(arg0))->unk3C = -1;
    ((func_80246174_S1 *)(arg0))->unk40 = 0;
    ((func_80246174_S1 *)(arg0))->unk44 = 0;
    ((func_80246174_S1 *)(arg0))->unk4C = 0;
    ((func_80246174_S1 *)(arg0))->unk48 = k;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3754_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8914_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3AD4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3B14_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3824_4 = 1.0f;
#endif
