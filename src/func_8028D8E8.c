#include "basetypes.h"

extern f32 D_800CA428;
extern s32 D_800E28D8;

extern void func_80245A10(s32 arg0);
extern void func_802459F0(f32 arg0);
extern void func_80245A4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8028D8E8(void) {
    s32 var_a0;
    s32 var_a1;

    func_80245A10(0);
    func_802459F0(D_800CA428);
    var_a0 = 0x1E0;
    if (D_800E28D8 == 0) {
        var_a0 = 0x17C;
        var_a1 = 0xDC;
    } else {
        var_a1 = 0x168;
    }
    func_80245A4C(var_a0, var_a1, 0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5268_4 = 75.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA428_4 = 75.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C55E8_4 = 75.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5628_4 = 75.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5338_4 = 75.0f;
#endif
