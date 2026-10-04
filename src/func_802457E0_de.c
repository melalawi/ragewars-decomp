#include "span_1000/code_80242BE0.h"
#include "types.h"




extern func_802457D0_S1 *D_800DE7E0;

s32 func_802457E0_de(void) {
    if (D_800DE7E0->unk38 != 0) {
        if (D_800DE7E0->unk1C > D_800DE7E0->unk34) {
            return 1;
        }
        return 0;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DD3B8_1C[] = {0x004436B0U, 0x004436C8U, 0x004436E0U, 0x004436F8U, 0x00443710U, 0x00443728U, 0x00443740U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2528_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED41C_5[] = {0x25, 0x31, 0x64, 0x2E, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E85A0_12[] = {0x53, 0x69, 0x6E, 0x67, 0x6C, 0x65, 0x20, 0x53, 0x61, 0x76, 0x65, 0x20, 0x42, 0x6C, 0x6F, 0x63, 0x6B, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800DDB54_4 = 900.0f;
const float unbake_rodata_800DDB58_4 = 15.0f;
const float unbake_rodata_800DDB5C_4 = (-1.0f);
#endif
