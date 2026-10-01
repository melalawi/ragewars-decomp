/* Returns the constant after D_800C7EC0 less the cube of its difference from the argument. */
#include "basetypes.h"

extern f32 D_800C7EC0;

typedef struct func_8022DBB4_S1 func_8022DBB4_S1;
struct func_8022DBB4_S1 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_8022DBB4(f32 arg0) {
    f32 temp = ((func_8022DBB4_S1 *)(&D_800C7EC0))->unk4 - arg0;
    return ((func_8022DBB4_S1 *)(&D_800C7EC0))->unk4 - (temp * temp * temp);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D04_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EC4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3078_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30B8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DD4_4 = 1.0f;
#endif
