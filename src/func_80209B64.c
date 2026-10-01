#include "basetypes.h"

extern f32 D_800C6D8C;
extern f32 D_800C6D90;
extern f32 D_800C6D94;

typedef struct func_80209B64_S1 func_80209B64_S1;
typedef struct func_80209B64_S2 func_80209B64_S2;
typedef struct func_80209B64_S3 func_80209B64_S3;
typedef struct func_80209B64_S4 func_80209B64_S4;
typedef struct func_80209B64_S5 func_80209B64_S5;
struct func_80209B64_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void* unk5D8;
};
struct func_80209B64_S2 {
    char pad0[0x93];
    u8 unk93;
};
struct func_80209B64_S3 {
    char pad0[0x28];
    f32 unk28;
};
struct func_80209B64_S4 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_80209B64_S5 {
    char pad0[0x93];
    s8 unk93;
};

f32 func_80209B64(void *arg0) {
    f32 value;
    u8 state;
    void *base;

    base = *(void **)arg0;
    state = ((func_80209B64_S2 *)(((func_80209B64_S1 *)(base))->unk5D8))->unk93;
    value = ((func_80209B64_S3 *)(((func_80209B64_S1 *)(base))->unk18))->unk28;
    value *= D_800C6D8C;
    switch (state) {
    case 1:
        break;
    default:
        ((func_80209B64_S5 *)(((func_80209B64_S4 *)(*(void **)arg0))->unk5D8))->unk93 = 0;
    case 0:
        value *= D_800C6D90;
        break;
    case 2:
        value *= D_800C6D94;
        break;
    }
    return value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BCC_4 = 0.00999999978f;
const float unbake_rodata_800C1BD0_4 = 0.899999976f;
const float unbake_rodata_800C1BD4_4 = 1.10000002f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6D8C_4 = 0.00999999978f;
const float unbake_rodata_800C6D90_4 = 0.899999976f;
const float unbake_rodata_800C6D94_4 = 1.10000002f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F3C_4 = 0.00999999978f;
const float unbake_rodata_800C1F40_4 = 0.899999976f;
const float unbake_rodata_800C1F44_4 = 1.10000002f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F7C_4 = 0.00999999978f;
const float unbake_rodata_800C1F80_4 = 0.899999976f;
const float unbake_rodata_800C1F84_4 = 1.10000002f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C9C_4 = 0.00999999978f;
const float unbake_rodata_800C1CA0_4 = 0.899999976f;
const float unbake_rodata_800C1CA4_4 = 1.10000002f;
#endif
