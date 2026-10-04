#include "span_1000/code_80232B44.h"
#include "span_1000/types.h"
#include "types.h"
typedef s32 M2C_UNK;





M2C_UNK func_8022AF74_de(void *, M2C_UNK);
void func_80232E38_de(void *arg0) {
    void *temp_a0;
    temp_a0 = (((struct func_8020A028_S3 *) ((s8 *) arg0))->unk1D8);
    if ((((struct IntegerState11C4 *) ((s8 *) temp_a0))->unk_11C0) == 0) {
        func_8022AF74_de(temp_a0, 0x9E2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D28F0_4[] = {0x80, 0x0D, 0x10, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7650_4[] = {0x80, 0x0D, 0x51, 0x50};
const unsigned char unbake_rodata_800D7654_1C[] = {0x80, 0x0D, 0x51, 0x68, 0x80, 0x0D, 0x51, 0x80, 0x80, 0x0D, 0x51, 0x98, 0x80, 0x0D, 0x51, 0xA0, 0x80, 0x0D, 0x51, 0xA4, 0x80, 0x0D, 0x51, 0xA8, 0x80, 0x0D, 0x51, 0xAC};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE7B0_18[] = {0x80, 0x0C, 0xE6, 0x20, 0x80, 0x0C, 0xE6, 0x48, 0x80, 0x0C, 0xE6, 0x70, 0x80, 0x0C, 0xE6, 0xE8, 0x80, 0x0C, 0xE7, 0x60, 0x80, 0x0C, 0xE7, 0x88};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEC60_4[] = {0x3F, 0x80, 0x00, 0x00};
const float unbake_rodata_800CEC64_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3168_4[] = {0x80, 0x0C, 0xF2, 0xA8};
const unsigned char unbake_rodata_800D316C_4[] = {0x80, 0x0C, 0xF2, 0xC8};
const unsigned char unbake_rodata_800D3170_4[] = {0x80, 0x0C, 0xF2, 0xE4};
const unsigned char unbake_rodata_800D3174_4[] = {0x80, 0x0C, 0xF3, 0x00};
#endif
