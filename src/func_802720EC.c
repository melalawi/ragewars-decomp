#include "basetypes.h"

extern f32 func_802BC380(f32);
extern char D_800C9998;

typedef struct func_802720EC_S1 func_802720EC_S1;
struct func_802720EC_S1 {
    char pad0[0x4];
    f32 unk4;
};

void func_802720EC(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = func_802BC380((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]));
    if (mag != 0.0f) {
        scale = ((func_802720EC_S1 *)(&D_800C9998))->unk4 / mag;
        arg0[0] = arg0[0] * scale;
        arg0[1] = arg0[1] * scale;
        arg0[2] = arg0[2] * scale;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47DC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C999C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B5C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4B9C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48AC_4 = 1.0f;
#endif
