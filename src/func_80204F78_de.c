#include "span_1000/code_80204A68.h"



/** Update the floating state at offsets 0x40 and 0x64 under its range rules. */
void func_80204F78_de(void *unused, char *object, float value) {
    if (value == 0.0f || ((func_80204F78_S1 *)(object))->unk64 < value) {
        if (((func_80204F78_S1 *)(object))->unk64 == 0.0f) {
            ((func_80204F78_S1 *)(object))->unk40 = 0.0f;
        }
        ((func_80204F78_S1 *)(object))->unk64 = value;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C208C_4 = 51.1999969f;
const float unbake_rodata_800C2090_4 = 51.1999969f;
const float unbake_rodata_800C2094_4 = 3.14159274f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C71B0_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C2308_4 = 377487.312f;
const float unbake_rodata_800C230C_4 = 10000.0f;
const float unbake_rodata_800C2310_4 = 3.14159274f;
const float unbake_rodata_800C2314_4 = 100.0f;
const float unbake_rodata_800C2318_4 = 1.0f;
const float unbake_rodata_800C231C_4 = 10000.0f;
const float unbake_rodata_800C2320_4 = 100.0f;
const float unbake_rodata_800C2324_4 = (-1.0f);
const float unbake_rodata_800C2328_4 = 3.14159274f;
const float unbake_rodata_800C232C_4 = 1.57079637f;
const float unbake_rodata_800C2330_4 = 100.0f;
const float unbake_rodata_800C2334_4 = 3.14159274f;
const float unbake_rodata_800C2338_4 = 1.57079637f;
const float unbake_rodata_800C233C_4 = 100.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2348_4 = 377487.312f;
const float unbake_rodata_800C234C_4 = 10000.0f;
const float unbake_rodata_800C2350_4 = 3.14159274f;
const float unbake_rodata_800C2354_4 = 100.0f;
const float unbake_rodata_800C2358_4 = 1.0f;
const float unbake_rodata_800C235C_4 = 10000.0f;
const float unbake_rodata_800C2360_4 = 100.0f;
const float unbake_rodata_800C2364_4 = (-1.0f);
const float unbake_rodata_800C2368_4 = 3.14159274f;
const float unbake_rodata_800C236C_4 = 1.57079637f;
const float unbake_rodata_800C2370_4 = 100.0f;
const float unbake_rodata_800C2374_4 = 3.14159274f;
const float unbake_rodata_800C2378_4 = 1.57079637f;
const float unbake_rodata_800C237C_4 = 100.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20D0_4 = 102.399994f;
#endif
