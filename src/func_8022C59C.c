#include "basetypes.h"

typedef struct func_8022C59C_S1 func_8022C59C_S1;
typedef struct func_8022C59C_S2 func_8022C59C_S2;
typedef struct func_8022C59C_S3 func_8022C59C_S3;
struct func_8022C59C_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022C59C_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    char* unk16E0;
};
struct func_8022C59C_S3 {
    char pad0[0x90];
    u8 unk90;
};

void func_8022C59C(char *object) {
    char *record = ((func_8022C59C_S1 *)(object))->unk20;
    while (record != 0) {
        char *nested = ((func_8022C59C_S2 *)(record))->unk5D8;
        if (((func_8022C59C_S3 *)(nested))->unk90 == 1) {
            ((func_8022C59C_S3 *)(nested))->unk90 = 0;
        }
        record = ((func_8022C59C_S2 *)(record))->unk16E0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C7440_24[] = {0x002B2704U, 0x002B2848U, 0x002B28B8U, 0x002B29A0U, 0x002B2928U, 0x002B2AC4U, 0x002B2A10U, 0x002B2A9CU, 0x002B2970U};
const float unbake_rodata_800C7464_4 = 9.99999975e-05f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC7F0_18[] = {0x002B906CU, 0x002B907CU, 0x002B909CU, 0x002B90ACU, 0x002B908CU, 0x002B90BCU};
const double unbake_rodata_800CC808_8 = 16384.0;
const float unbake_rodata_800CC810_4 = 0.00100000005f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6368_1C[] = {0x002A8EE4U, 0x002A8EF4U, 0x002A8F24U, 0x002A8F04U, 0x002A8F14U, 0x002A8F14U, 0x002A8F24U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6310_1C[] = {0x002A8D70U, 0x002A8D80U, 0x002A8DB0U, 0x002A8D90U, 0x002A8DA0U, 0x002A8DA0U, 0x002A8DB0U};
const float unbake_rodata_800C632C_4 = 24.0f;
const float unbake_rodata_800C6330_4 = 12.0f;
const float unbake_rodata_800C6334_4 = 6.0f;
const float unbake_rodata_800C6338_4 = 16.0f;
const float unbake_rodata_800C633C_4 = 8.0f;
const float unbake_rodata_800C6340_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7368_4 = 2.14748365e+09f;
#endif
