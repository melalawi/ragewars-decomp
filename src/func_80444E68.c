#include "basetypes.h"

/* Once the timer D_80154100 is exactly zero, calls func_8040C378, reloads the timer from
   D_800E27C0 and copies the byte D_800E28DB to D_80146848. Returns zero. */
extern f32 D_80154100;
extern f32 D_800E27C0;
extern u8 D_800E28DB;
extern u8 D_80146848;
extern void func_8040C378();

s32 func_80444E68(void) {
    if (D_80154100 == 0.0f) {
        func_8040C378();
        D_80154100 = D_800E27C0;
        D_80146848 = D_800E28DB;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD440_4 = 18.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E27C0_4 = 18.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EEE0C_4 = 18.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9FCC_4 = 18.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE790_4 = 18.0f;
#endif
