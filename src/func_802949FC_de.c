#include "common/types.h"
#include "span_1000/code_802945CC.h"
#include "types.h"

extern void func_80293A20_de(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_800CD780;
extern s32 D_8010B194_de;
extern s32 D_80142898;


void func_802949FC_de(s32 arg0) {
    if (D_800CD780 != 0) {
        func_80293A20_de(arg0, 1, 1);
        return;
    }
    if ((D_8010B194_de & 0x1000) && (D_80142898 == 0)) {
        D_80142898 = 1;
        D_8010B194_de = 0;
        D_80142CB4 = (15.0f);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C540C_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA5CC_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C578C_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57CC_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54E0_4 = 15.0f;
#endif
