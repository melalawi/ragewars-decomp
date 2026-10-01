#include "basetypes.h"

extern f32 func_8024D274(void);
extern f32 D_800C7DF8;

typedef struct func_8022ADE0_S1 func_8022ADE0_S1;
struct func_8022ADE0_S1 {
    char pad0[0x18];
    int unk18;
};

f32 func_8022ADE0(void *arg0) {
    if (((func_8022ADE0_S1 *)(arg0))->unk18 != 0) {
        return func_8024D274();
    } else {
        return D_800C7DF8;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C38_4 = 92.159996f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7DF8_4 = 92.159996f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FB0_4 = 92.159996f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FF0_4 = 92.159996f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D08_4 = 92.159996f;
#endif
