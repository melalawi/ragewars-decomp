#include "span_1000/code_8024DF4C.h"


void *func_8024E6A0_de(struct Item_func_8024E6A0_de *item) {
    if (item->kind == 1 && item->value != 0 && (item->flags & 3) != 0) {
        return item->value;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE0D4_4[] = {0x3C, 0x01, 0x00, 0x00};
const unsigned char unbake_rodata_800FE0D8_4[] = {0x00, 0x24, 0x08, 0x21};
const unsigned char unbake_rodata_800FE0DC_4[] = {0x8C, 0x24, 0x00, 0x00};
const unsigned char unbake_rodata_800FE0E0_4[] = {0x8F, 0xC5, 0x00, 0x58};
const unsigned char unbake_rodata_800FE0E4_4[] = {0x00, 0x40, 0x30, 0x21};
const unsigned char unbake_rodata_800FE0E8_8[] = {0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EEDE8_20[] = {0x00444F54U, 0x00444F9CU, 0x00444FE4U, 0x0044502CU, 0x0044506CU, 0x0044506CU, 0x0044506CU, 0x0044506CU};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9CE4_4 = 1.0f;
const float unbake_rodata_800E9CE8_4 = 0.400000006f;
const float unbake_rodata_800E9CEC_4 = 1.0f;
const float unbake_rodata_800E9CF0_4 = 0.400000006f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E0A34_2[] = {0x00, 0x00};
#endif
