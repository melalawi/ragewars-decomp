#include "basetypes.h"

typedef struct func_8022A5B0_S1 func_8022A5B0_S1;
typedef struct func_8022A5B0_S2 func_8022A5B0_S2;
struct func_8022A5B0_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_8022A5B0_S2 {
    char pad0[0x698];
    s32 unk698;
    char pad698[0x16E0 - 0x698 - sizeof(s32)];
    char* unk16E0;
};

void *func_8022A5B0(char *object, s32 arg1) {
    char *record = ((func_8022A5B0_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            if (((func_8022A5B0_S2 *)(record))->unk698 == arg1) {
                return record;
            }
            record = ((func_8022A5B0_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5420_8[] = {0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA730_40[] = {0x00298588U, 0x002985C0U, 0x00298614U, 0x00298614U, 0x00298568U, 0x00298568U, 0x00298568U, 0x00298568U, 0x00298614U, 0x00298614U, 0x00298614U, 0x00298614U, 0x00298614U, 0x00298614U, 0x002985E4U, 0x002985FCU};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5640_4 = 122.879997f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55F4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5480_4 = 0.100000001f;
const float unbake_rodata_800C5484_4 = 0.5f;
const float unbake_rodata_800C5488_4 = 1.0f;
const float unbake_rodata_800C548C_4 = (-4.0f);
const float unbake_rodata_800C5490_4 = 0.5f;
const float unbake_rodata_800C5494_4 = 1.0f;
#endif
