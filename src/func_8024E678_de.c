#include "span_1000/code_8024DF4C.h"



/** Select one of two float fields according to the leading byte. */
float func_8024E678_de(void *object) {
    if (*(unsigned char *)object != 1) {
        return ((func_8024E668_S1 *)(object))->unkC;
    }
    return ((func_8024E668_S1 *)(object))->unk40;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE0D0_4[] = {0x27, 0xC2, 0x00, 0x24};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EEDE0_6[] = {0x20, 0x25, 0x30, 0x33, 0x64, 0x00};
#elif defined(VERSION_EU_X)
const double unbake_rodata_800E9CD0_8 = 4294967296.0;
const float unbake_rodata_800E9CD8_4 = 0.0174532942f;
const float unbake_rodata_800E9CDC_4 = 1.0f;
const float unbake_rodata_800E9CE0_4 = 50.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E0658_4[] = {0x00, 0x00, 0x00, 0x02};
#endif
