#include "basetypes.h"

extern f32 D_800C6FD0;
extern void *D_8013B388;

typedef struct func_8020EE50_S1 func_8020EE50_S1;
struct func_8020EE50_S1 {
    char pad0[0x10];
    void* unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    f32 unk18;
    char pad18[0x38 - 0x18 - sizeof(f32)];
    s32 unk38;
};

void func_8020EE50(void) {
    void *var_a0;
    f32 k;

    var_a0 = D_8013B388;
    if (var_a0 != 0) {
        k = D_800C6FD0;
        do {
            ((func_8020EE50_S1 *)(var_a0))->unk18 =
                ((func_8020EE50_S1 *)(var_a0))->unk18 +
                (f32) (((func_8020EE50_S1 *)(var_a0))->unk38 * 0x1E) * k;
            var_a0 = ((func_8020EE50_S1 *)(var_a0))->unk10;
        } while (var_a0 != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1E10_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6FD0_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2180_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C21C0_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1EE0_4 = 10.2399998f;
#endif
