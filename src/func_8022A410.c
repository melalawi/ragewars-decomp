#include "basetypes.h"

extern char D_801468A0[];

typedef struct func_8022A410_S1 func_8022A410_S1;
typedef struct func_8022A410_S2 func_8022A410_S2;
typedef struct func_8022A410_S3 func_8022A410_S3;
struct func_8022A410_S1 {
    char pad0[0x54];
    int unk54;
    char pad54[0x68 - 0x54 - sizeof(int)];
    int unk68;
};
struct func_8022A410_S2 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A410_S3 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    void* unk16E0;
};

void *func_8022A410(void *arg0) {
    char *base = D_801468A0;
    void *record;

    if (((func_8022A410_S1 *)(base))->unk54 != 0 && ((func_8022A410_S1 *)(base))->unk68 != 0) {
        return 0;
    }
    record = ((func_8022A410_S2 *)(arg0))->unk20;
    if (record != 0) {
        do {
            if (*(u8 *)(((func_8022A410_S3 *)(record))->unk5D8 + 0x8F) == 1) {
                return record;
            }
            record = ((func_8022A410_S3 *)(record))->unk16E0;
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
