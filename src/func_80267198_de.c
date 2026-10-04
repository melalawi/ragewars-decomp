#include "common/types.h"
#include "span_1000/code_8026565C.h"
#include "types.h"





                                                                                             



extern CallbackEntry_func_80267198_de D_800CC130[];

void func_80267198_de(void *arg0, void *arg1, s32 arg2, Triple arg3, ResourceManagerState arg6) {
    if (D_800CC130[arg2].callback != 0) {
        D_800CC130[arg2].callback(arg0, arg1, arg2, arg3, arg6);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CC040_4[] = {0x00, 0x26, 0x72, 0xA4};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D1380_4[] = {0x00, 0x26, 0x73, 0x24};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CCD10_4[] = {0x00, 0x26, 0x72, 0xC4};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CD6E0_4[] = {0x00, 0x26, 0x72, 0xF4};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CC130_4[] = {0x00, 0x26, 0x73, 0x0C};
#endif
