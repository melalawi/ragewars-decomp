#include "basetypes.h"

extern void func_8025E1E4(s32);
extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);

typedef struct func_80217388_S1 func_80217388_S1;
typedef struct func_80217388_S2 func_80217388_S2;
struct func_80217388_S1 {
    char pad0[0xD0];
    void* unkD0;
};
struct func_80217388_S2 {
    char pad0[0xFC];
    s32 unkFC;
};

void func_80217388(void *arg0, void *arg1) {
    void *owner = 0;
    u8 type = *(u8 *)arg0;

    switch (type) {
    case 1:
    case 2:
        owner = arg0;
        break;
    case 0:
        owner = ((func_80217388_S1 *)(arg0))->unkD0;
        break;
    }

    if (((func_80217388_S2 *)(arg1))->unkFC != 0) {
        func_8025E1E4(owner);
        if (((func_80217388_S2 *)(arg1))->unkFC != 0) {
            func_8025CA44(func_8025CC8C(), ((func_80217388_S2 *)(arg1))->unkFC);
            ((func_80217388_S2 *)(arg1))->unkFC = 0;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4A28_8 = 4294967296.0;
const float unbake_rodata_800C4A30_4 = 0.00392156886f;
const float unbake_rodata_800C4A34_4 = 1.0f;
const double unbake_rodata_800C4A38_8 = 4294967296.0;
const float unbake_rodata_800C4A40_4 = 255.0f;
const float unbake_rodata_800C4A44_4 = 5.0f;
const float unbake_rodata_800C4A48_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9BE8_8 = 4294967296.0;
const float unbake_rodata_800C9BF0_4 = 0.00392156886f;
const float unbake_rodata_800C9BF4_4 = 1.0f;
const double unbake_rodata_800C9BF8_8 = 4294967296.0;
const float unbake_rodata_800C9C00_4 = 255.0f;
const float unbake_rodata_800C9C04_4 = 5.0f;
const float unbake_rodata_800C9C08_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4950_4 = 80.0f;
const float unbake_rodata_800C4954_4 = 160.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C48B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C48B8_4 = 2.14748365e+09f;
const float unbake_rodata_800C48BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C48C0_4 = 2.14748365e+09f;
const float unbake_rodata_800C48C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C48C8_4 = 2.14748365e+09f;
const float unbake_rodata_800C48CC_4 = 2.14748365e+09f;
const float unbake_rodata_800C48D0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4AA0_8 = 4294967296.0;
const double unbake_rodata_800C4AA8_8 = 4294967296.0;
const float unbake_rodata_800C4AB0_4 = 1.0f;
const float unbake_rodata_800C4AB4_4 = (-1.0f);
const float unbake_rodata_800C4AB8_4 = (-1.0f);
const float unbake_rodata_800C4ABC_4 = (-1.0f);
#endif
