#include "span_1000/code_80204A68.h"
extern char D_800C8420_de;
extern char D_002052C4;
extern char D_00205628;
extern char D_002050A0;






/** Initialize the dest record's vtable-like fields from source's flag byte. */
void func_8020520C_de(void *source, void *dest) {
    ((func_8020520C_S1 *)(dest))->unk2C = &D_800C8420_de;
    ((func_8020520C_S1 *)(dest))->unk108 = &D_002052C4;
    ((func_8020520C_S1 *)(dest))->unk10C = &D_00205628;
    ((func_8020520C_S1 *)(dest))->unk110 = &D_002050A0;
    ((func_8020520C_S1 *)(dest))->unk124 = 0;
    ((func_8020520C_S1 *)(dest))->unk128 = ((func_8020520C_S2 *)(source))->unk3;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20AC_4 = 0.0174532942f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7228_4 = 0.899999976f;
const float unbake_rodata_800C722C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2360_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23A0_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C2128_4 = 1.0f;
#endif
