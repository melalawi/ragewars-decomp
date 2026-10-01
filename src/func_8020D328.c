#include "basetypes.h"

typedef struct func_8020D328_S1 func_8020D328_S1;
typedef struct func_8020D328_S2 func_8020D328_S2;
struct func_8020D328_S1 {
    char pad0[0x24];
    char* unk24;
};
struct func_8020D328_S2 {
    char pad0[0x10];
    char* unk10;
    char pad10[0x28 - 0x10 - sizeof(char*)];
    s32 unk28;
};

s32 func_8020D328(void *arg0) {
    char *record = ((func_8020D328_S1 *)(arg0))->unk24;
    if (record != 0) {
        do {
            if (((func_8020D328_S2 *)(record))->unk28 == 1) {
                return 1;
            }
            record = ((func_8020D328_S2 *)(record))->unk10;
        } while (record != 0);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C3864_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8860_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3884_4 = 0.5f;
const float unbake_rodata_800C3888_4 = 20.4799995f;
const float unbake_rodata_800C388C_4 = 1.0f;
const float unbake_rodata_800C3890_4 = 1.0f;
const float unbake_rodata_800C3894_4 = 1.53600001f;
const float unbake_rodata_800C3898_4 = 20480.0f;
const float unbake_rodata_800C389C_4 = 3.07200003f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C38A0_4 = 768.0f;
const float unbake_rodata_800C38A4_4 = 5120.0f;
const float unbake_rodata_800C38A8_4 = 10240.0f;
const float unbake_rodata_800C38AC_4 = 0.25f;
const float unbake_rodata_800C38B0_4 = 0.75f;
const float unbake_rodata_800C38B4_4 = 1.0f;
const float unbake_rodata_800C38B8_4 = 0.5f;
const float unbake_rodata_800C38BC_4 = 16384.0f;
const float unbake_rodata_800C38C0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3770_4 = 1.0f;
#endif
