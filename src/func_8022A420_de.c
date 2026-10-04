#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

extern char D_801427E0[];








void *func_8022A420_de(void *arg0) {
    char *base = D_801427E0;
    void *record;

    if (((IntegerState6C *)(base))->unk_54 != 0 && ((IntegerState6C *)(base))->unk_68 != 0) {
        return 0;
    }
    record = ((func_80228774_S1 *)(arg0))->unk20;
    if (record != 0) {
        do {
            if (((struct func_8020EA10_S3 *) ((ObjectLinks16E4_3 *) record)->unk_5D8)->unk8F == 1) {
                return record;
            }
            record = ((ObjectLinks16E4_3 *)(record))->unk_16E0;
        } while (record != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5404_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA688_18[] = {0x00296154U, 0x002963C4U, 0x00296924U, 0x00296620U, 0x00296B84U, 0x00296CA0U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C55F0_4 = 262144.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55DC_4 = 3.40282347e+38f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5448_4 = 1.0f;
const float unbake_rodata_800C544C_4 = 255.0f;
const float unbake_rodata_800C5450_4 = 9.99999997e-07f;
const float unbake_rodata_800C5454_4 = 0.100000001f;
const float unbake_rodata_800C5458_4 = 0.5f;
const float unbake_rodata_800C545C_4 = 1.0f;
const float unbake_rodata_800C5460_4 = (-4.0f);
const float unbake_rodata_800C5464_4 = 0.5f;
const float unbake_rodata_800C5468_4 = 1.0f;
#endif
