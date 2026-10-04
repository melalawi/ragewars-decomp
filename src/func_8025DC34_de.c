#include "span_1000/code_8025DB64.h"
#include "span_C76B0/data.h"
#include "types.h"


extern void func_802AFF60_de(s32 arg0, s16 arg1);




void func_8025DC34_de(void *arg0, f32 arg1) {
    f32 f20 = arg1;
    f32 f0 = f20 * D_800C4020_de;
    func_802AFF60_de(((func_8025DC54_S1 *)(arg0))->unk14, (s16)(s32) f0);
    ((func_8025DC54_S1 *)(arg0))->unk2C = f20;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F50_4 = 32767.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9110_4 = 32767.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C42D0_4 = 32767.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4310_4 = 32767.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4020_4 = 32767.0f;
#endif
