#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_1000/types.h"







/** Find the first linked record whose nested flags include either type marker. */
void *func_8022A83C_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    while (record != 0) {
        char *nested = ((func_80229A54_S2 *)(record))->unk5D8;
        if (((func_8022A82C_S3 *)(nested))->unk8F == 1 ||
            ((func_8022A82C_S3 *)(nested))->unk90 == 1) {
            return record;
        }
        record = ((func_80229A54_S2 *)(record))->unk16E0;
    }
    return record;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5550_8 = 1000.0;
const unsigned int unbake_rodata_800C5558_40[] = {0x00297C34U, 0x00297C6CU, 0x00297CC0U, 0x00297CC0U, 0x00297C18U, 0x00297C18U, 0x00297C18U, 0x00297C18U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297CC0U, 0x00297C90U, 0x00297CA8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA820_24[] = {0x0029AFD8U, 0x0029B05CU, 0x0029B0E0U, 0x0029B164U, 0x0029B1F4U, 0x0029B1F4U, 0x0029B1F4U, 0x0029AEF8U, 0x0029AF68U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5680_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5694_4 = 81.9199982f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C54F8_18[] = {0x0029523CU, 0x002954A0U, 0x002959E4U, 0x002956F0U, 0x00295C38U, 0x00295D50U};
#endif
