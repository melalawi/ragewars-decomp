#include "basetypes.h"

extern void func_80293A04(s32 arg0, s32 arg1, s32 arg2);

extern s32 D_800D29D0;
extern s32 D_8010F194;
extern s32 D_80146958;
extern f32 D_800CA5CC;
extern f32 D_80146D74;

void func_80294A10(s32 arg0) {
    if (D_800D29D0 != 0) {
        func_80293A04(arg0, 1, 1);
        return;
    }
    if ((D_8010F194 & 0x1000) && (D_80146958 == 0)) {
        D_80146958 = 1;
        D_8010F194 = 0;
        D_80146D74 = D_800CA5CC;
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
