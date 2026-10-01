#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern f32 D_800C8720;
extern void func_80240C7C(void *arg0);
extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);
extern f32 func_802BC380(f32);
extern void func_8027200C(void *, void *, f32);
extern void func_8023F42C(void *arg0);
extern void func_80240250(void *arg0);
extern void func_80242BE0(void *arg0);
extern void func_80243910(void *arg0);

typedef struct func_8023D148_S1 func_8023D148_S1;
typedef struct func_8023D148_S2 func_8023D148_S2;
typedef union func_8023D148_S1_U44 { Vector3 v0; f32 v1; } func_8023D148_S1_U44;
typedef union func_8023D148_S1_U50 { Vector3 v0; f32 v1; } func_8023D148_S1_U50;
typedef union func_8023D148_S1_U5C { Vector3 v0; f32 v1; } func_8023D148_S1_U5C;
struct func_8023D148_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x40 - 0x4 - sizeof(s32)];
    s32* unk40;
    char pad40[0x44 - 0x40 - sizeof(s32*)];
    func_8023D148_S1_U44 unk44;
    char pad44[0x50 - 0x44 - sizeof(func_8023D148_S1_U44)];
    func_8023D148_S1_U50 unk50;
    char pad50[0x5C - 0x50 - sizeof(func_8023D148_S1_U50)];
    func_8023D148_S1_U5C unk5C;
    char pad5C[0x68 - 0x5C - sizeof(func_8023D148_S1_U5C)];
    Vector3 unk68;
    char pad68[0x80 - 0x68 - sizeof(Vector3)];
    f32 unk80;
    char pad80[0x84 - 0x80 - sizeof(f32)];
    f32 unk84;
    char pad84[0x88 - 0x84 - sizeof(f32)];
    f32 unk88;
    char pad88[0x8C - 0x88 - sizeof(f32)];
    f32 unk8C;
    char pad8C[0x90 - 0x8C - sizeof(f32)];
    f32 unk90;
    char pad90[0x94 - 0x90 - sizeof(f32)];
    f32 unk94;
    char pad94[0x98 - 0x94 - sizeof(f32)];
    f32 unk98;
    char pad98[0x9C - 0x98 - sizeof(f32)];
    f32 unk9C;
    char pad9C[0xA0 - 0x9C - sizeof(f32)];
    f32 unkA0;
    char padA0[0xA4 - 0xA0 - sizeof(f32)];
    f32 unkA4;
    char padA4[0xA8 - 0xA4 - sizeof(f32)];
    f32 unkA8;
    char padA8[0xB0 - 0xA8 - sizeof(f32)];
    s32 unkB0;
};
struct func_8023D148_S2 {
    char pad0[0x48];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x54 - 0x4C - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x60 - 0x58 - sizeof(f32)];
    f32 unk60;
    char pad60[0x64 - 0x60 - sizeof(f32)];
    f32 unk64;
};

s32 func_8023D148(char *object) {
    s32 *flags = ((func_8023D148_S1 *)(object))->unk40;
    f32 magnitude;
    f32 var_f0;
    f32 var_f1;
    f32 var_f0_2;
    f32 var_f1_2;
    f32 var_f2;
    f32 var_f0_3;

    func_80240C7C((char *)object + 0xB0);
    func_80271FD8(&((func_8023D148_S1 *)(object))->unk5C.v0,
                  &((func_8023D148_S1 *)(object))->unk50.v0,
                  &((func_8023D148_S1 *)(object))->unk44.v0);
    magnitude = func_802BC380(
        (((func_8023D148_S1 *)(object))->unk5C.v1 * ((func_8023D148_S1 *)(object))->unk5C.v1) +
        (((func_8023D148_S2 *)(object))->unk60 * ((func_8023D148_S2 *)(object))->unk60) +
        (((func_8023D148_S2 *)(object))->unk64 * ((func_8023D148_S2 *)(object))->unk64));
    ((func_8023D148_S1 *)(object))->unk80 = magnitude;
    if ((magnitude == 0.0f) && (((func_8023D148_S1 *)(object))->unk4 == 0)) {
        return 0;
    }

    if (((func_8023D148_S1 *)(object))->unk80 != 0.0f) {
        func_8027200C(&((func_8023D148_S1 *)(object))->unk68,
                      &((func_8023D148_S1 *)(object))->unk5C.v0,
                      D_800C8720 / ((func_8023D148_S1 *)(object))->unk80);
    } else {
        ((func_8023D148_S1 *)(object))->unk68 = ((func_8023D148_S1 *)(object))->unk5C.v0;
    }

    var_f0 = ((func_8023D148_S1 *)(object))->unk50.v1;
    if (!(var_f0 <= ((func_8023D148_S1 *)(object))->unk44.v1)) {
        var_f0 = ((func_8023D148_S1 *)(object))->unk44.v1;
    }
    ((func_8023D148_S1 *)(object))->unk84 = var_f0;
    var_f1 = ((func_8023D148_S1 *)(object))->unk50.v1;
    if (!(((func_8023D148_S1 *)(object))->unk44.v1 <= var_f1)) {
        var_f1 = ((func_8023D148_S1 *)(object))->unk44.v1;
    }
    ((func_8023D148_S1 *)(object))->unk90 = var_f1;

    var_f0_2 = ((func_8023D148_S2 *)(object))->unk54;
    if (!(var_f0_2 <= ((func_8023D148_S2 *)(object))->unk48)) {
        var_f0_2 = ((func_8023D148_S2 *)(object))->unk48;
    }
    ((func_8023D148_S1 *)(object))->unk88 = var_f0_2;
    var_f1_2 = ((func_8023D148_S2 *)(object))->unk54;
    if (!(((func_8023D148_S2 *)(object))->unk48 <= var_f1_2)) {
        var_f1_2 = ((func_8023D148_S2 *)(object))->unk48;
    }
    ((func_8023D148_S1 *)(object))->unk94 = var_f1_2;

    var_f2 = ((func_8023D148_S2 *)(object))->unk58;
    if (!(var_f2 <= ((func_8023D148_S2 *)(object))->unk4C)) {
        var_f2 = ((func_8023D148_S2 *)(object))->unk4C;
    }
    ((func_8023D148_S1 *)(object))->unk8C = var_f2;
    var_f0_3 = ((func_8023D148_S2 *)(object))->unk58;
    if (!(((func_8023D148_S2 *)(object))->unk4C <= var_f0_3)) {
        var_f0_3 = ((func_8023D148_S2 *)(object))->unk4C;
    }
    ((func_8023D148_S1 *)(object))->unk98 = var_f0_3;

    ((func_8023D148_S1 *)(object))->unk9C = ((func_8023D148_S1 *)(object))->unk84;
    ((func_8023D148_S1 *)(object))->unkA4 = ((func_8023D148_S1 *)(object))->unk90;
    ((func_8023D148_S1 *)(object))->unkA8 = ((func_8023D148_S1 *)(object))->unk98;
    ((func_8023D148_S1 *)(object))->unkA0 = ((func_8023D148_S1 *)(object))->unk8C;

    if (*flags & 0x200000) {
        func_8023F42C(object);
    }
    if (((func_8023D148_S1 *)(object))->unk80 != 0.0f) {
        if (*flags & 0x10000) {
            func_80240250(object);
        }
        if (*flags & 0x4000) {
            func_80242BE0(object);
        }
        if (*flags & 0x80000) {
            func_80243910(object);
        }
    }
    return ((func_8023D148_S1 *)(object))->unkB0 != 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3560_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8720_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C38E0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3920_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3630_4 = 1.0f;
#endif
