#include "basetypes.h"

typedef struct func_8022C610_S1 func_8022C610_S1;
typedef struct func_8022C610_S2 func_8022C610_S2;
typedef struct func_8022C610_S3 func_8022C610_S3;
struct func_8022C610_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022C610_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    char* unk16E0;
};
struct func_8022C610_S3 {
    char pad0[0x90];
    u8 unk90;
};

s32 func_8022C610(char *object) {
    char *record = ((func_8022C610_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        char *nested = ((func_8022C610_S2 *)(record))->unk5D8;
        if (((func_8022C610_S3 *)(nested))->unk90 == 0) {
            count += 1;
        }
        record = ((func_8022C610_S2 *)(record))->unk16E0;
    }
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C74E8_8 = 4294967296.0;
const float unbake_rodata_800C74F0_4 = 5.77622632e-06f;
const float unbake_rodata_800C74F4_4 = 1.0f;
const double unbake_rodata_800C74F8_8 = 6.103515625e-05;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC840_8 = 16384.0;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C63A8_1C[] = {0x002A8EE4U, 0x002A8EF4U, 0x002A8F24U, 0x002A8F04U, 0x002A8F14U, 0x002A8F14U, 0x002A8F24U};
const float unbake_rodata_800C63C4_4 = 24.0f;
const float unbake_rodata_800C63C8_4 = 12.0f;
const float unbake_rodata_800C63CC_4 = 6.0f;
const float unbake_rodata_800C63D0_4 = 16.0f;
const float unbake_rodata_800C63D4_4 = 8.0f;
const float unbake_rodata_800C63D8_4 = 1.0f;
const float unbake_rodata_800C63DC_4 = 0.00352112669f;
const float unbake_rodata_800C63E0_4 = 0.00450450461f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6368_1C[] = {0x002A8F24U, 0x002A8F34U, 0x002A8F64U, 0x002A8F44U, 0x002A8F54U, 0x002A8F54U, 0x002A8F64U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C7458_4 = 2.14748365e+09f;
#endif
