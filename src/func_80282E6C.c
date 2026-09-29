#include "basetypes.h"

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_8011FE88;
extern char D_80121990;
extern f32 D_800C9F48[];
extern f32 D_800C9F50;
typedef struct { f32 first; f32 second; } D_800C9F50_Pair;

extern void *func_802A101C(void *, s32, u32);
extern s32 func_8025DE74(s16, Vec3, s32, s32);
extern void func_8022B540(void *, f32, f32, void *, s32);
extern void func_8028CE70(void *, void *, s32, Triple, f32, f32);
extern s32 func_8028403C(void *);
extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80279BB0(void *, s32, s8, s32);
extern void func_80284544(void *, void *);
extern s32 func_80284408(void *);

typedef struct { char pad[0xA8]; u16 unkA8; } func_80282E6C_Table;
typedef struct func_80282E6C_S1 func_80282E6C_S1;
typedef struct func_80282E6C_S2 func_80282E6C_S2;
typedef struct func_80282E6C_S3 func_80282E6C_S3;
typedef struct func_80282E6C_S4 func_80282E6C_S4;
typedef struct func_80282E6C_S5 func_80282E6C_S5;
typedef union func_80282E6C_S1_U8 { Triple v0; Vec3 v1; } func_80282E6C_S1_U8;
struct func_80282E6C_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    func_80282E6C_S1_U8 unk8;
    char pad8[0x118 - 0x8 - sizeof(func_80282E6C_S1_U8)];
    void* unk118;
    char pad118[0x12C - 0x118 - sizeof(void*)];
    void* unk12C;
    char pad12C[0x1D0 - 0x12C - sizeof(void*)];
    s8 unk1D0;
};
struct func_80282E6C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x698 - 0x8 - sizeof(Vec3)];
    void* unk698;
    char pad698[0x11EC - 0x698 - sizeof(void*)];
    f32 unk11EC;
};
struct func_80282E6C_S3 {
    char pad0[0x140];
    char unk140;
};
struct func_80282E6C_S4 {
    char pad0[0x18];
    s32 unk18;
};
struct func_80282E6C_S5 {
    char pad0[0x70];
    u16 unk70;
    char pad70[0x8C - 0x70 - sizeof(u16)];
    u16 unk8C;
};

void func_80282E6C(void *arg0, void *arg1) {
    Triple scratch;
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

    func_802A101C(&scratch, 0, 0xC);
    if (((func_80282E6C_S1 *)(arg0))->unk4 == 0x40F) {
        func_8025DE74(0xCDA, ((func_80282E6C_S2 *)(arg1))->unk8,
                      (s32)&((func_80282E6C_S2 *)arg1)->unk8, -1);
        func_8022B540(arg1, 30.0f, 3.0f,
                     ((func_80282E6C_S1 *)(arg0))->unk12C, 0);
        func_8028CE70(&D_8011FE88,
                      &((func_80282E6C_S3 *)(((func_80282E6C_S2 *)(arg1))->unk698))->unk140,
                      0x14, scratch, D_800C9F48[1], D_800C9F50);
        ((func_80282E6C_S2 *)(arg1))->unk11EC = (&D_800C9F50)[1];
    }

    temp_s1 = ((func_80282E6C_S1 *)(arg0))->unk118;
    if (func_8028403C(arg0) != 0) {
        var_a0 = 0xC;
    } else {
        var_a0 = 0xA;
    }
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_80282E6C_S4 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_80282E6C_S5 *)(temp_v1))->unk70;
    temp_a2 = ((func_80282E6C_S5 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    temp_s3 = ((func_80282E6C_Table *)(((func_80282E6C_S4 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1,
                     ((func_80282E6C_S1 *)(arg0))->unk8.v0, pair);
    }
    if (temp_s2 != 0xFFFF) {
        func_80279BB0(arg0, temp_s2, ((func_80282E6C_S1 *)(arg0))->unk1D0, 1);
    }
    if (temp_s3 != 0xFFFF) {
        func_8025DE74((s16)temp_s3, ((func_80282E6C_S1 *)(arg0))->unk8.v1, 0, -1);
    }
    func_80284544(&D_80121990, arg0);
    func_80284408(arg0);
}
