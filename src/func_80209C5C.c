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
