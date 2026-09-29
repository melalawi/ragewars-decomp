#include "basetypes.h"

extern s32 func_8028403C(void *arg0);
typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80279BB0(void *, s32, s8, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);

typedef struct func_80283F34_S1 func_80283F34_S1;
typedef struct func_80283F34_S2 func_80283F34_S2;
typedef struct func_80283F34_S3 func_80283F34_S3;
typedef struct func_80283F34_S4 func_80283F34_S4;
typedef union func_80283F34_S1_U8 { Triple v0; s32 v1; } func_80283F34_S1_U8;
struct func_80283F34_S1 {
    char pad0[0x8];
    func_80283F34_S1_U8 unk8;
    char pad8[0x118 - 0x8 - sizeof(func_80283F34_S1_U8)];
    void* unk118;
    char pad118[0x1D0 - 0x118 - sizeof(void*)];
    s8 unk1D0;
};
struct func_80283F34_S2 {
    char pad0[0x18];
    s32 unk18;
};
struct func_80283F34_S3 {
    char pad0[0x70];
    u16 unk70;
    char pad70[0x8C - 0x70 - sizeof(u16)];
    u16 unk8C;
    char pad8C[0xA8 - 0x8C - sizeof(u16)];
    u16 unkA8;
};
struct func_80283F34_S4 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_80283F34(void *arg0) {
    Pair pair;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    temp_s1 = ((func_80283F34_S1 *)(arg0))->unk118;
    if (func_8028403C(arg0) != 0) {
        var_a0 = 0xC;
    } else {
        var_a0 = 0xA;
    }
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_80283F34_S2 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_80283F34_S3 *)(temp_v1))->unk70;
    temp_a2 = ((func_80283F34_S3 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    temp_s3 = ((func_80283F34_S3 *)((( func_80283F34_S2 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1,
                     ((func_80283F34_S1 *)(arg0))->unk8.v0, pair);
    }
    if (temp_s2 != 0xFFFF) {
        func_80279BB0(arg0, temp_s2, ((func_80283F34_S1 *)(arg0))->unk1D0, 1);
    }
    if (temp_s3 != 0xFFFF) {
        func_8025DE74((s16)temp_s3,
                      ((func_80283F34_S1 *)(arg0))->unk8.v1,
                      ((func_80283F34_S4 *)(arg0))->unkC,
                      ((func_80283F34_S4 *)(arg0))->unk10, 0, -1);
    }
}
