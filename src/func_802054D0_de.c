#include "common/types.h"
#include "span_1000/code_80204A68.h"
typedef struct Owner Owner;



/** Return the word at offset 0x40 through the pointer stored at offset 0x18. */
int func_802054D0_de(void *object) {
    return ((struct Access_s32_40 *) ((Owner *) object)->track)->field;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C219C_4 = 255.0f;
const float unbake_rodata_800C21A0_4 = 0.5f;
const float unbake_rodata_800C21A4_4 = 2.14748365e+09f;
const float unbake_rodata_800C21A8_4 = 0.00312500005f;
const float unbake_rodata_800C21AC_4 = 0.00416666688f;
const float unbake_rodata_800C21B0_4 = 63.0f;
const float unbake_rodata_800C21B4_4 = 192.0f;
const float unbake_rodata_800C21B8_4 = 1.0f;
const float unbake_rodata_800C21BC_4 = 0.75f;
const float unbake_rodata_800C21C0_4 = 0.600000024f;
const float unbake_rodata_800C21C4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72F0_4 = 255.0f;
const float unbake_rodata_800C72F4_4 = 0.5f;
const float unbake_rodata_800C72F8_4 = 2.14748365e+09f;
const float unbake_rodata_800C72FC_4 = 0.00312500005f;
const float unbake_rodata_800C7300_4 = 0.00416666688f;
const float unbake_rodata_800C7304_4 = 63.0f;
const float unbake_rodata_800C7308_4 = 192.0f;
const float unbake_rodata_800C730C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C241C_4 = 0.0174532942f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2448_4 = 3.40282347e+38f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21D0_4 = 1.0f;
const float unbake_rodata_800C21D4_4 = (-1.0f);
#endif
