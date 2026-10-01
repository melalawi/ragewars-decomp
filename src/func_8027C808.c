#include "basetypes.h"

typedef struct { s32 x, y; } Pair;
typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
extern Triple D_801042A8;
extern Triple D_801042C8;
extern char D_80121990;

extern s32 func_80275854(s32);
extern s32 func_802760F8(s32);
extern s32 func_802760C4(s32);
extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80271888(Quad *, Triple *);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_8027200C(void *, void *, s32);
extern void func_80284544(void *, void *);
extern s32 func_80284408(void *);

typedef struct func_8027C808_S1 func_8027C808_S1;
typedef struct func_8027C808_S2 func_8027C808_S2;
typedef struct func_8027C808_S3 func_8027C808_S3;
typedef union func_8027C808_S1_U118 { void* v0; s32* v1; } func_8027C808_S1_U118;
struct func_8027C808_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8027C808_S1_U118 unk118;
    char pad118[0x12C - 0x118 - sizeof(func_8027C808_S1_U118)];
    void* unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
    char pad134[0x18C - 0x134 - sizeof(s32)];
    char unk18C;
    char pad18C[0x1BA - 0x18C - sizeof(char)];
    s8 unk1BA;
    char pad1BA[0x1C4 - 0x1BA - sizeof(s8)];
    s32 unk1C4;
};
struct func_8027C808_S2 {
    char pad0[0x18];
    s32 unk18;
};
struct func_8027C808_S3 {
    char pad0[0x70];
    u16 unk70;
    char pad70[0x8C - 0x70 - sizeof(u16)];
    u16 unk8C;
    char pad8C[0xA8 - 0x8C - sizeof(u16)];
    u16 unkA8;
};

void func_8027C808(void *arg0) {
    Pair pair;
    Quad rotation;
    Triple position;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 sound;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    if (func_80275854(0) != 0) {
        var_a0 = func_802760F8(0);
    } else {
        var_a0 = func_802760C4(0);
    }
    if (var_a0 == 10) {
        var_a0 = 0;
    }
    temp_s1 = ((func_8027C808_S1 *)(arg0))->unk118.v0;
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_8027C808_S2 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_8027C808_S3 *)(temp_v1))->unk70;
    temp_a2 = ((func_8027C808_S3 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    sound = ((func_8027C808_S3 *)((( func_8027C808_S2 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1, D_801042A8, pair);
    }
    if (temp_s2 != 0xFFFF) {
        if ((*((func_8027C808_S1 *)(arg0))->unk118.v1 & 0x10) != 0) {
            position = D_801042C8;
        } else {
            position = ((func_8027C808_S1 *)(arg0))->unk1C;
        }
        func_80271888(&rotation, &position);
        func_80280094(&D_80121990, arg0,
                      ((func_8027C808_S1 *)(arg0))->unk12C,
                      ((func_8027C808_S1 *)(arg0))->unk130,
                      ((func_8027C808_S1 *)(arg0))->unk134, temp_s2,
                      position, rotation, D_801042A8, 0,
                      -3,
                      (((func_8027C808_S1 *)(arg0))->unk5C & 0x200006) | 1);
    }
    if (sound != 0xFFFF) {
        func_8025DE74((s16)sound, D_801042A8.x,
                      D_801042A8.y, D_801042A8.z, 0, -1);
    }
    func_8027200C(&((func_8027C808_S1 *)(arg0))->unk18C, &((func_8027C808_S1 *)(arg0))->unk18C,
                  ((func_8027C808_S1 *)(arg0))->unk1C4);
    ((func_8027C808_S1 *)(arg0))->unk5C |= 0x200;
    if (((func_8027C808_S1 *)(arg0))->unk1BA == 1) {
        func_80284544(&D_80121990, arg0);
        func_80284408(arg0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE2A8_4[] = {0x00, 0x04, 0x28, 0xC0};
const unsigned char unbake_rodata_800FE2AC_4[] = {0x00, 0xA3, 0x28, 0x21};
const unsigned char unbake_rodata_800FE2B0_4[] = {0x00, 0x05, 0x20, 0xC0};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801002A8_4[] = {0xD2, 0xD2, 0xB0, 0x77};
const unsigned char unbake_rodata_801002AC_4[] = {0x90, 0x13, 0xAE, 0x47};
const unsigned char unbake_rodata_801002B0_4[] = {0xF5, 0x96, 0xE9, 0xC0};
#endif
