#include "common/types.h"
#include "span_1000/code_802945CC.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_80293A20_de(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_800CD780;
extern s32 D_8010B194_de;
extern s32 D_80142898;



void func_802948C0_de(s32 arg0) {
    s32 *p;

    if (D_800CD780 != 0) {
        func_80293A20_de(arg0, 1, 1);
        return;
    }
    p = &D_8010B194_de;
    if ((*p & 0x1000) && (D_80142898 == 0)) {
        D_80142898 = 1;
        *p = 0;
        D_80142CB4 = D_800C54DC_de;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5408_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA5C8_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5788_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57C8_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54DC_4 = 15.0f;
#endif
