#include "span_1000/code_8026D4F0.h"

extern void func_80272CB0_de(void *, float, float, float);
extern void func_8026FC9C_de(void *, void *);
extern float D_800C46AC_de;
extern char D_8010C520;

void func_8026D844_de(void) {
    char local[64];

    func_8026D8F8_de();
    func_80272CB0_de(local, D_800C46AC_de, D_800C46AC_de, D_800C46AC_de);
    func_8026FC9C_de(local, &D_8010C520);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C45DC_4 = 2.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C979C_4 = 2.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C495C_4 = 2.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C499C_4 = 2.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C46AC_4 = 2.0f;
#endif
