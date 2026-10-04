#include "common/types.h"
#include "span_1000/code_80204A68.h"
typedef struct Owner Owner;



/** Return the nested record's field, or a fallback constant when zero. */
int func_802052F8_de(void *arg0) {
    int temp = ((struct func_80207B5C_S2 *) ((Owner *) arg0)->track)->unk24;
    if (temp != 0) {
        return temp;
    }
    return 0x5334;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2100_4 = 1.0f;
const float unbake_rodata_800C2104_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C726C_4 = 0.0174532942f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C23C8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23E0_4 = 100.0f;
const float unbake_rodata_800C23E4_4 = 128.0f;
const double unbake_rodata_800C23E8_8 = 4294967296.0;
const double unbake_rodata_800C23F0_8 = 4294967296.0;
const float unbake_rodata_800C23F8_4 = 0.5f;
const float unbake_rodata_800C23FC_4 = 1.0f;
const float unbake_rodata_800C2400_4 = 1.25f;
const float unbake_rodata_800C2404_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2168_4 = 3.40282347e+38f;
#endif
