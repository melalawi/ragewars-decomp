#include "basetypes.h"

extern s32 func_8024E7CC(void *);
extern f32 D_800C7E18;

typedef struct func_8022C070_S1 func_8022C070_S1;
typedef struct func_8022C070_S2 func_8022C070_S2;
struct func_8022C070_S1 {
    char pad0[0x2C];
    f32 unk2C;
};
struct func_8022C070_S2 {
    char pad0[0x780];
    f32 unk780;
};

void func_8022C070(void *arg0, void *arg1) {
    void *result;
    f32 t0;
    f32 t1;

    result = (void *)func_8024E7CC(arg1);
    if (result != 0) {
        t0 = ((func_8022C070_S1 *)(result))->unk2C;
        t1 = ((func_8022C070_S2 *)(arg0))->unk780;
        t0 = t0 - t1;
        t0 = t0 * D_800C7E18;
        t1 = t1 + t0;
        ((func_8022C070_S2 *)(arg0))->unk780 = t1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C58_4 = 0.200000003f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E18_4 = 0.200000003f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FCC_4 = 0.200000003f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C300C_4 = 0.200000003f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D28_4 = 0.200000003f;
#endif
