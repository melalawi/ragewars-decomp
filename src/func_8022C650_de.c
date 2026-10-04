#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "types.h"






s32 func_8022C650_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        if (((func_8022C640_S2 *)(record))->unk5D0 != 0) {
            count += 1;
        }
        record = ((func_8022C640_S2 *)(record))->unk16E0;
    }
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C7530_44[] = {0x002B4A9CU, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4AC4U, 0x002B4870U, 0x002B4870U, 0x002B4744U, 0x002B4A1CU, 0x002B4A64U, 0x002B4870U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC860_44[] = {0x002B9C3CU, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9C64U, 0x002B9A10U, 0x002B9A10U, 0x002B98E4U, 0x002B9BBCU, 0x002B9C04U, 0x002B9A10U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C63E8_1C[] = {0x002A90B8U, 0x002A90C8U, 0x002A90F8U, 0x002A90D8U, 0x002A90E8U, 0x002A90E8U, 0x002A90F8U};
const float unbake_rodata_800C6404_4 = 24.0f;
const float unbake_rodata_800C6408_4 = 12.0f;
const float unbake_rodata_800C640C_4 = 6.0f;
const float unbake_rodata_800C6410_4 = 16.0f;
const float unbake_rodata_800C6414_4 = 8.0f;
const float unbake_rodata_800C6418_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6388_1C[] = {0x002A8F24U, 0x002A8F34U, 0x002A8F64U, 0x002A8F44U, 0x002A8F54U, 0x002A8F54U, 0x002A8F64U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C7460_60[] = {0x002B05ACU, 0x002B0A2CU, 0x002B07B8U, 0x002B0A2CU, 0x002B0A2CU, 0x002B05DCU, 0x002B0624U, 0x002B07CCU, 0x002B0A44U, 0x002B05BCU, 0x002B0908U, 0x002B0960U, 0x002B097CU, 0x002B0998U, 0x002B09F0U, 0x002B07E0U, 0x002B0800U, 0x002B0870U, 0x002B0A44U, 0x002B0A44U, 0x002B0A44U, 0x002B0A44U, 0x002B0680U, 0x002B0734U};
#endif
