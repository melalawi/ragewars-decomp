#include "span_16E000/code_8043D904.h"
#include "types.h"
/* Advances the frame timer D_8015404C by D_800D2988 and, once it reaches
   threshold D_800E2358, clears a flag at D_801468A0+0x24 and reports the
   round over through func_8022A748_de on the world 0x1860 bytes before it. */

extern f32 D_8014DDBC;
extern f32 D_800CD738;
extern s32 D_801427E0;

void func_8022A748_de(void *arg0);

s32 func_8043E134_de(void) {
    f32 time;
    s32 *base;

    time = D_8014DDBC + D_800CD738;
    D_8014DDBC = time;
    if ((120.0f) <= time) {
        base = (s32 *) &D_801427E0;
        base[9] = 0;
        func_8022A748_de((void *) ((char *) base - 0x1860));
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCFD8_4 = 120.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2358_4 = 120.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE9A8_4 = 120.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9B68_4 = 120.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE328_4 = 120.0f;
#endif
