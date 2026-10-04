#include "span_1000/code_8028CCB8.h"
#include "types.h"

extern f32 D_800C5338_de;
extern s32 D_800DE888_de;

extern void func_80245A20_de(s32 arg0);
extern void func_80245A00_de(f32 arg0);
extern void func_80245A5C_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8028D90C_de(void) {
    s32 var_a0;
    s32 var_a1;

    func_80245A20_de(0);
    func_80245A00_de(D_800C5338_de);
    var_a0 = 0x1E0;
    if (D_800DE888_de == 0) {
        var_a0 = 0x17C;
        var_a1 = 0xDC;
    } else {
        var_a1 = 0x168;
    }
    func_80245A5C_de(var_a0, var_a1, 0, 0);
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
