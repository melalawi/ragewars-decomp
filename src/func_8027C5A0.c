/* Picks an animation slot from a global mode, then plays the slot's effect, spawns its object at the owner or a fixed position, plays its sound, and flags the owner. Adapted from func_8027CA7C, with the slot chosen by a switch on D_801042C4 (the extra case below 7 that shares the default body is needed for the decision tree; its value is not recoverable), the constant triple, one argument, the dropped func_8027200C call, and the final test changed. */
#include "basetypes.h"

typedef struct { s32 x, y; } Pair;
typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
extern s32 D_801042C4;
extern Triple D_801042B8;
extern Triple D_801042C8;
extern char D_80121990;

extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80271888(Quad *, Triple *);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80284544(void *, void *);
extern s32 func_80284408(void *);

typedef struct func_8027C5A0_S1 func_8027C5A0_S1;
typedef struct func_8027C5A0_S2 func_8027C5A0_S2;
typedef struct func_8027C5A0_S3 func_8027C5A0_S3;
typedef union func_8027C5A0_S1_U118 { void* v0; s32* v1; } func_8027C5A0_S1_U118;
struct func_8027C5A0_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8027C5A0_S1_U118 unk118;
    char pad118[0x12C - 0x118 - sizeof(func_8027C5A0_S1_U118)];
    void* unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
};
struct func_8027C5A0_S2 {
    char pad0[0x18];
    s32 unk18;
};
struct func_8027C5A0_S3 {
    char pad0[0x70];
    u16 unk70;
    char pad70[0x8C - 0x70 - sizeof(u16)];
    u16 unk8C;
    char pad8C[0xA8 - 0x8C - sizeof(u16)];
    u16 unkA8;
};

void func_8027C5A0(void *arg0) {
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

    switch (D_801042C4) {
    case 1:
    default:
        var_a0 = 1;
        break;
    case 7:
        var_a0 = 7;
        break;
    case 8:
        var_a0 = 8;
        break;
    }
    temp_s1 = ((func_8027C5A0_S1 *)(arg0))->unk118.v0;
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_8027C5A0_S2 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_8027C5A0_S3 *)(temp_v1))->unk70;
    temp_a2 = ((func_8027C5A0_S3 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    sound = ((func_8027C5A0_S3 *)((( func_8027C5A0_S2 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1, D_801042B8, pair);
    }
    if (temp_s2 != 0xFFFF) {
        if ((*((func_8027C5A0_S1 *)(arg0))->unk118.v1 & 0x10) != 0) {
            position = D_801042C8;
        } else {
            position = ((func_8027C5A0_S1 *)(arg0))->unk1C;
        }
        func_80271888(&rotation, &position);
        func_80280094(&D_80121990, arg0,
                      ((func_8027C5A0_S1 *)(arg0))->unk12C,
                      ((func_8027C5A0_S1 *)(arg0))->unk130,
                      ((func_8027C5A0_S1 *)(arg0))->unk134, temp_s2,
                      position, rotation, D_801042B8, 0,
                      -5,
                      (((func_8027C5A0_S1 *)(arg0))->unk5C & 0x200006) | 1);
    }
    if (sound != 0xFFFF) {
        func_8025DE74((s16)sound, D_801042B8.x,
                      D_801042B8.y, D_801042B8.z, 0, -1);
    }
    ((func_8027C5A0_S1 *)(arg0))->unk5C |= 0x200;
    if ((*((func_8027C5A0_S1 *)(arg0))->unk118.v1 & 0x20000) != 0) {
        func_80284544(&D_80121990, arg0);
        func_80284408(arg0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE2B8_4[] = {0x00, 0x04, 0x18, 0x80};
const unsigned char unbake_rodata_800FE2BC_4[] = {0x00, 0x83, 0x20, 0x21};
const unsigned char unbake_rodata_800FE2C0_4[] = {0x00, 0x04, 0x18, 0xC0};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801002B8_4[] = {0x11, 0x62, 0xF7, 0xD2};
const unsigned char unbake_rodata_801002BC_4[] = {0xB2, 0xF7, 0x5D, 0x8A};
const unsigned char unbake_rodata_801002C0_4[] = {0xD2, 0x8F, 0xF3, 0x2E};
#endif
