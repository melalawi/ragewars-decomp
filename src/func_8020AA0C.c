/** Returns the difference between the constant after D_800C6E20 and func_80209AE8's result, scaled by D_800C6E28. */
#include "basetypes.h"

extern f32 func_80209AE8(void);

extern f32 D_800C6E20;
extern f32 D_800C6E28;

typedef struct func_8020AA0C_S1 func_8020AA0C_S1;
struct func_8020AA0C_S1 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_8020AA0C(void) {
    return (((func_8020AA0C_S1 *)(&D_800C6E20))->unk4 - func_80209AE8()) * (D_800C6E28);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1C64_4 = 1.0f;
const float unbake_rodata_800C1C68_4 = 0.52359885f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E24_4 = 1.0f;
const float unbake_rodata_800C6E28_4 = 0.52359885f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1FD4_4 = 1.0f;
const float unbake_rodata_800C1FD8_4 = 0.52359885f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2014_4 = 1.0f;
const float unbake_rodata_800C2018_4 = 0.52359885f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D34_4 = 1.0f;
const float unbake_rodata_800C1D38_4 = 0.52359885f;
#endif
