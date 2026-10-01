#include "basetypes.h"

extern f32 func_802BC380(f32);
extern char D_800C9A18;

typedef struct func_80274214_S1 func_80274214_S1;
struct func_80274214_S1 {
    char pad0[0x4];
    f32 unk4;
};

void func_80274214(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = func_802BC380((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]) + (arg0[3] * arg0[3]));
    if (mag != 0.0f) {
        scale = ((func_80274214_S1 *)(&D_800C9A18))->unk4 / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
        arg0[3] = arg0[3] * scale;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C485C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A1C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4BDC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C1C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C492C_4 = 1.0f;
#endif
