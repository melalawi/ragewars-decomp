/* Starts the round once: unless already started, optionally resets the lead player (func_8022E280 and its
 * three counters) and the player group, then when a new target id is pending selects it through
 * func_8044E038 and func_80286A78, records the start time from func_8040332C, marks the round started with
 * no pending target and copies the viewport rectangle into the active camera as floats. */
#include "basetypes.h"

typedef struct {
    s32 w[3];
} Vec3Words;

typedef struct func_80244E48_S1 func_80244E48_S1;
typedef struct func_80244E48_S2 func_80244E48_S2;
typedef struct func_80244E48_S3 func_80244E48_S3;
struct func_80244E48_S1 {
    char pad0[0x40];
    s32 unk40;
    char pad40[0x50 - 0x40 - sizeof(s32)];
    s32 unk50;
    char pad50[0x54 - 0x50 - sizeof(s32)];
    s32 unk54;
    char pad54[0x5C - 0x54 - sizeof(s32)];
    s32 unk5C;
    char pad5C[0xD8 - 0x5C - sizeof(s32)];
    s32 unkD8;
    char padD8[0x108 - 0xD8 - sizeof(s32)];
    s32 unk108;
    char pad108[0x10C - 0x108 - sizeof(s32)];
    s32 unk10C;
    char pad10C[0x110 - 0x10C - sizeof(s32)];
    s32 unk110;
    char pad110[0x114 - 0x110 - sizeof(s32)];
    s32 unk114;
};
struct func_80244E48_S2 {
    char pad0[0x57C];
    s32 unk57C;
    char pad57C[0x580 - 0x57C - sizeof(s32)];
    s32 unk580;
    char pad580[0x590 - 0x580 - sizeof(s32)];
    s32 unk590;
};
struct func_80244E48_S3 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};

typedef struct { func_80244E48_S1 * unk0; } func_80244E48_G1;
extern func_80244E48_S1 *D_800E2830;
typedef struct {
    void *lead;
    char pad4[0x24];
    char members[1];
} Group;

extern Group D_80145060;
typedef struct { func_80244E48_S3 * unk0; } func_80244E48_G2;
extern struct { func_80244E48_S3 *unk0; } D_801450A8;
extern char D_8010EC90;
extern char D_8011FE88;
typedef struct { s32 unk0; } func_80244E48_G3;
extern func_80244E48_G3 D_8013B294;
typedef struct { s32 unk0; } func_80244E48_G4;
extern func_80244E48_G4 D_8013B2A4;
extern char D_8013B2A8;
typedef struct { s32 unk0; } func_80244E48_G5;
extern func_80244E48_G5 D_8013B2BC;
extern void func_8022E280(void *);
extern void func_80239B54(void *);
extern void func_80285D00(void *);
extern s32 func_8044E038(void *, Vec3Words *, s32, void *);
extern void func_80286A78(void *, s32, s32);
extern s32 func_8040332C(void);

void func_80244E48(void) {
    Vec3Words origin;
    func_80244E48_S3 *camera;
    void *player;
    Group *group;
    s32 target;
    s32 found;
    char *table;

    target = D_800E2830->unkD8;
    if (D_800E2830->unk40 != 0) {
        return;
    }
    if (D_800E2830->unk54 != 0) {
        group = &D_80145060;
        player = group->lead;
        if (player != 0) {
            func_8022E280(player);
            ((func_80244E48_S2 *)(player))->unk57C = 0;
            ((func_80244E48_S2 *)(player))->unk580 = 0;
            ((func_80244E48_S2 *)(player))->unk590 = 0;
        }
        func_80239B54(group->members);
        func_80285D00(&D_8010EC90);
    }
    if (target != -1) {
        table = &D_8011FE88;
        if (D_8013B294.unk0 != target) {
            origin.w[0] = 0;
            origin.w[1] = 0;
            origin.w[2] = 0;
            found = func_8044E038(table, &origin, target, &D_8013B2A8);
            D_8013B2BC.unk0 = found;
            D_8013B2A4.unk0 = found != 0;
            func_80286A78(table, target, found != 0);
        }
    }
    D_800E2830->unk5C = func_8040332C();
    D_800E2830->unk50 = 1;
    D_800E2830->unkD8 = -1;
    D_800E2830->unk40 = 1;
    camera = D_801450A8.unk0;
    if (camera != 0) {
        camera->unk29C = D_800E2830->unk108;
        camera->unk2A0 = D_800E2830->unk10C;
        camera->unk2A4 = D_800E2830->unk110;
        camera->unk2A8 = D_800E2830->unk114;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD1A8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E24AC_4 = 255.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED3E0_12[] = {0x53, 0x69, 0x6E, 0x67, 0x6C, 0x65, 0x20, 0x53, 0x61, 0x76, 0x65, 0x20, 0x42, 0x6C, 0x6F, 0x63, 0x6B, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E844C_4 = 1.0f;
const float unbake_rodata_800E8450_4 = 0.5f;
const float unbake_rodata_800E8454_4 = 0.300000012f;
const float unbake_rodata_800E8458_4 = 1.0f;
const float unbake_rodata_800E845C_4 = 1.0f;
const float unbake_rodata_800E8460_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DDA8C_4 = 255.0f;
const float unbake_rodata_800DDA90_4 = 4.0f;
const float unbake_rodata_800DDA94_4 = 210.0f;
const float unbake_rodata_800DDA98_4 = 255.0f;
#endif
