#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"






void *func_8020CFE0_de(char *object, s32 arg1) {
    char *record = ((func_8020CFE0_S1 *)(object))->unk24;
    if (record != 0) {
        do {
            if (((func_8020CFE0_S2 *)(record))->unk0 == arg1) {
                return record;
            }
            record = ((func_8020CFE0_S2 *)(record))->unk10;
        } while (record != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C35F8_4 = 10.2399998f;
const float unbake_rodata_800C35FC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8700_4 = 9.99999997e-07f;
const float unbake_rodata_800C8704_4 = 2.0f;
const float unbake_rodata_800C8708_4 = 9.99999997e-07f;
const float unbake_rodata_800C870C_4 = 2.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C35D4_4 = 30.0f;
const float unbake_rodata_800C35D8_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3610_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3610_4 = 9.99999997e-07f;
const float unbake_rodata_800C3614_4 = 2.0f;
const float unbake_rodata_800C3618_4 = 9.99999997e-07f;
const float unbake_rodata_800C361C_4 = 2.0f;
#endif
