#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "types.h"
typedef s32 M2C_UNK;





f32 func_80274808_de(f32, f32, s32);
extern M2C_UNK D_800C2D10_de;
extern s32 D_800C9FF0;
void func_8022B5C0_de(void *arg0) {
    if ((((struct ObjectState12C4 *) ((s8 *) arg0))->unk_5E4) != 0) {
        (((struct ObjectState12C4 *) ((s8 *) arg0))->unk_12C0) = func_80274808_de((((struct ObjectState12C4 *) ((s8 *) arg0))->unk_12C0), (((struct func_802077F4_S2 *) ((s8 *) (&D_800C2D10_de)))->unk4), D_800C9FF0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C44_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E04_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FB8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FF8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D14_4 = 1.0f;
#endif
