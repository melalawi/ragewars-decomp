#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80226708_de(void *arg0);






void func_8022C5DC_de(void *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            ((struct ObjectState90 *) ((func_80229A54_S2 *) record)->unk5D8)->unk_8F = 0;
            func_80226708_de(record);
            record = ((func_80229A54_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C74C0_18[] = {0x002B3ECCU, 0x002B3EDCU, 0x002B3EFCU, 0x002B3F0CU, 0x002B3EECU, 0x002B3F1CU};
const double unbake_rodata_800C74D8_8 = 16384.0;
const float unbake_rodata_800C74E0_4 = 0.00100000005f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC818_8 = 4294967296.0;
const float unbake_rodata_800CC820_4 = 5.77622632e-06f;
const float unbake_rodata_800CC824_4 = 1.0f;
const double unbake_rodata_800CC828_8 = 6.103515625e-05;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6388_1C[] = {0x002A8EE4U, 0x002A8EF4U, 0x002A8F24U, 0x002A8F04U, 0x002A8F14U, 0x002A8F14U, 0x002A8F24U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6348_1C[] = {0x002A8F24U, 0x002A8F34U, 0x002A8F64U, 0x002A8F44U, 0x002A8F54U, 0x002A8F54U, 0x002A8F64U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C7370_60[] = {0x002AEC80U, 0x002AF0E8U, 0x002AEE8CU, 0x002AF0E8U, 0x002AF0E8U, 0x002AECB0U, 0x002AECF8U, 0x002AEEA0U, 0x002AF100U, 0x002AEC90U, 0x002AEEB4U, 0x002AF100U, 0x002AF038U, 0x002AF054U, 0x002AF0ACU, 0x002AEF0CU, 0x002AEF2CU, 0x002AEF98U, 0x002AF100U, 0x002AF100U, 0x002AF100U, 0x002AEE8CU, 0x002AED54U, 0x002AEE08U};
#endif
