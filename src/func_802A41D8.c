#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800CAF78[];
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern void func_80272BA8(void *, void *, void *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272848(void *);

typedef struct func_802A41D8_S1 func_802A41D8_S1;
typedef struct func_802A41D8_S2 func_802A41D8_S2;
typedef struct func_802A41D8_S3 func_802A41D8_S3;
typedef struct func_802A41D8_S4 func_802A41D8_S4;
typedef struct func_802A41D8_S5 func_802A41D8_S5;
typedef union func_802A41D8_S1_U10 { Vec3 v0; f32 v1; } func_802A41D8_S1_U10;
struct func_802A41D8_S1 {
    char pad0[0x10];
    func_802A41D8_S1_U10 unk10;
    char pad10[0x1C - 0x10 - sizeof(func_802A41D8_S1_U10)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
};
struct func_802A41D8_S2 {
    char pad0[0x10];
    Vec3 unk10;
};
struct func_802A41D8_S3 {
    char pad0[0x1A0];
    char unk1A0;
};
struct func_802A41D8_S4 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
    char pad18[0x20 - 0x18 - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
    char pad28[0x30 - 0x28 - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
};
struct func_802A41D8_S5 {
    char pad0[0x14];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
};

void func_802A41D8(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 setup[4];
    Vec3 first;
    Vec3 basis;
    Vec3 cross;
    Vec3 result;
    f32 neg_y;
    f32 neg_z;

    func_80271FD8(&first, &((func_802A41D8_S1 *)(arg0))->unk10.v0,
                  &((func_802A41D8_S2 *)(arg1))->unk10);
    func_802720EC(&first);
    setup[0] = 0;
    setup[1] = 0;
    *(f32 *)&setup[2] = D_800CAF78[1];
    func_80272BA8(&((func_802A41D8_S3 *)(arg2))->unk1A0, setup, &basis);
    neg_y = -basis.y;
    neg_z = -basis.z;
    basis.y = neg_y;
    basis.z = neg_z;
    func_8027200C(&cross, &basis,
                  basis.x * first.x + neg_y * first.y + neg_z * first.z);
    func_80271FD8(&cross, &first, &cross);
    func_802720EC(&cross);
    func_80272088(&result, &basis, &cross);
    func_802720EC(&result);
    func_8027200C(&result, &result, ((func_802A41D8_S1 *)(arg0))->unk1C);
    func_8027200C(&cross, &cross, ((func_802A41D8_S1 *)(arg0))->unk20);
    func_8027200C(&basis, &basis, ((func_802A41D8_S1 *)(arg0))->unk24);
    func_80272848(arg3);
    ((func_802A41D8_S4 *)(arg3))->unk0 = result.x;
    ((func_802A41D8_S4 *)(arg3))->unk4 = result.y;
    ((func_802A41D8_S4 *)(arg3))->unk8 = result.z;
    ((func_802A41D8_S4 *)(arg3))->unk10 = cross.x;
    ((func_802A41D8_S4 *)(arg3))->unk14 = cross.y;
    ((func_802A41D8_S4 *)(arg3))->unk18 = cross.z;
    ((func_802A41D8_S4 *)(arg3))->unk20 = basis.x;
    ((func_802A41D8_S4 *)(arg3))->unk24 = basis.y;
    ((func_802A41D8_S4 *)(arg3))->unk28 = basis.z;
    ((func_802A41D8_S4 *)(arg3))->unk30 = ((func_802A41D8_S1 *)(arg0))->unk10.v1;
    ((func_802A41D8_S4 *)(arg3))->unk34 = ((func_802A41D8_S5 *)(arg0))->unk14;
    ((func_802A41D8_S4 *)(arg3))->unk38 = ((func_802A41D8_S5 *)(arg0))->unk18;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D1C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF7C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C608C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C60CC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5DEC_4 = 1.0f;
#endif
