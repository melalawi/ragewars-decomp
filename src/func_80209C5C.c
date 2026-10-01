#include "basetypes.h"

extern f32 D_800C6DA4;
extern f32 D_800C6DA8;
extern f32 D_800C6DAC;

typedef struct func_80209C5C_S1 func_80209C5C_S1;
typedef struct func_80209C5C_S2 func_80209C5C_S2;
typedef struct func_80209C5C_S3 func_80209C5C_S3;
typedef struct func_80209C5C_S4 func_80209C5C_S4;
typedef struct func_80209C5C_S5 func_80209C5C_S5;
struct func_80209C5C_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void* unk5D8;
};
struct func_80209C5C_S2 {
    char pad0[0x93];
    u8 unk93;
};
struct func_80209C5C_S3 {
    char pad0[0x30];
    f32 unk30;
};
struct func_80209C5C_S4 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_80209C5C_S5 {
    char pad0[0x93];
    s8 unk93;
};

f32 func_80209C5C(void **arg0) {
    f32 var_f0;
    f32 var_f1;
    u8 state;
    void *base;

    base = *arg0;
    state = ((func_80209C5C_S2 *)(((func_80209C5C_S1 *)(base))->unk5D8))->unk93;
    var_f1 = ((func_80209C5C_S3 *)(((func_80209C5C_S1 *)(base))->unk18))->unk30;
    var_f1 *= D_800C6DA4;
    switch (state) {
    case 1:
        break;
    default:
        ((func_80209C5C_S5 *)(((func_80209C5C_S4 *)(*arg0))->unk5D8))->unk93 = 0;
    case 0:
        var_f0 = D_800C6DA8;
        goto multiply;
    case 2:
        var_f0 = D_800C6DAC;
multiply:
        var_f1 *= var_f0;
        break;
    }
    return var_f1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BE4_4 = 0.00999999978f;
const float unbake_rodata_800C1BE8_4 = 0.899999976f;
const float unbake_rodata_800C1BEC_4 = 1.10000002f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6DA4_4 = 0.00999999978f;
const float unbake_rodata_800C6DA8_4 = 0.899999976f;
const float unbake_rodata_800C6DAC_4 = 1.10000002f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F54_4 = 0.00999999978f;
const float unbake_rodata_800C1F58_4 = 0.899999976f;
const float unbake_rodata_800C1F5C_4 = 1.10000002f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F94_4 = 0.00999999978f;
const float unbake_rodata_800C1F98_4 = 0.899999976f;
const float unbake_rodata_800C1F9C_4 = 1.10000002f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1CB4_4 = 0.00999999978f;
const float unbake_rodata_800C1CB8_4 = 0.899999976f;
const float unbake_rodata_800C1CBC_4 = 1.10000002f;
#endif
