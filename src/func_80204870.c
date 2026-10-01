/* Destroys a breakable object hit by an attack as func_80204A68 does, with event 6 and release mode
   1, then runs its hit timer: a descriptor flagged 1 hit by an attack carrying 0xCB reloads the timer
   at 0x64 from the descriptor (clearing 0x40 when the timer was idle), and a running timer that has
   not passed 0x40 triggers func_80214178 with 1. */
#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern f32 D_800C6B70;
extern s32 D_8011FE88;
extern void func_802671B0(void *, void *, s32, Triple, Pair);
extern void func_80285D80(void *, void *, s32);
extern void func_80214178(void *, void *, s32);

typedef struct func_80204870_S1 func_80204870_S1;
typedef struct func_80204870_S2 func_80204870_S2;
typedef struct func_80204870_S3 func_80204870_S3;
struct func_80204870_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x18 - 0x8 - sizeof(Triple)];
    char* unk18;
    char pad18[0xE6 - 0x18 - sizeof(char*)];
    s8 unkE6;
    char padE6[0x100 - 0xE6 - sizeof(s8)];
    s32 unk100;
    char pad100[0x104 - 0x100 - sizeof(s32)];
    f32 unk104;
    char pad104[0x108 - 0x104 - sizeof(f32)];
    s16 unk108;
    char pad108[0x10A - 0x108 - sizeof(s16)];
    s16 unk10A;
    char pad10A[0x10C - 0x10A - sizeof(s16)];
    s16 unk10C;
    char pad10C[0x12C - 0x10C - sizeof(s16)];
    s16 unk12C;
    char pad12C[0x134 - 0x12C - sizeof(s16)];
    f32 unk134;
};
struct func_80204870_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s8 unk8;
};
struct func_80204870_S3 {
    char pad0[0x40];
    f32 unk40;
    char pad40[0x64 - 0x40 - sizeof(f32)];
    f32 unk64;
    char pad64[0xCA - 0x64 - sizeof(f32)];
    s8 unkCA;
    char padCA[0xCB - 0xCA - sizeof(s8)];
    s8 unkCB;
};

void func_80204870(void *arg0, void *arg1) {
    char *table;
    s8 factor;
    f32 scale;
    s32 destroy;
    s8 team;
    Pair local;

    table = ((func_80204870_S1 *)(arg0))->unk18 + 0x14;
    factor = ((func_80204870_S2 *)(table))->unk8;
    if (factor != -1) {
        scale = factor * D_800C6B70;
        if (((func_80204870_S1 *)(arg0))->unkE6 == 1) {
            destroy = 1;
        } else {
            team = ((func_80204870_S3 *)(arg1))->unkCA;
            if (((func_80204870_S1 *)(arg0))->unk108 != team || ((func_80204870_S1 *)(arg0))->unk10A != team) {
                destroy = 0;
            } else if (((func_80204870_S3 *)(arg1))->unkCB != 0 && !(((func_80204870_S1 *)(arg0))->unk100 & 0x400)) {
                destroy = 1;
            } else if (((func_80204870_S1 *)(arg0))->unk10C < 3 && (((func_80204870_S1 *)(arg0))->unk100 & 0x400)) {
                destroy = ((func_80204870_S1 *)(arg0))->unk12C * scale <= ((func_80204870_S1 *)(arg0))->unk134;
            } else {
                destroy = ((func_80204870_S1 *)(arg0))->unk10C * scale <= ((func_80204870_S1 *)(arg0))->unk104;
            }
        }
        if (destroy) {
            local.a = 0;
            func_802671B0(arg0, arg0, 6, ((func_80204870_S1 *)(arg0))->unk8, local);
            func_80285D80(&D_8011FE88, arg0, 1);
        }
    }

    if (*(s32 *)table & 1) {
        if (((func_80204870_S3 *)(arg1))->unkCB != 0) {
            f32 timerVal = ((func_80204870_S2 *)(table))->unk4;
            if (timerVal == 0.0f || ((func_80204870_S3 *)(arg1))->unk64 < timerVal) {
                if (((func_80204870_S3 *)(arg1))->unk64 == 0.0f) {
                    ((func_80204870_S3 *)(arg1))->unk40 = 0.0f;
                }
                ((func_80204870_S3 *)(arg1))->unk64 = timerVal;
            }
        }
    }

    if (((func_80204870_S3 *)(arg1))->unk64 != 0.0f) {
        if (((func_80204870_S3 *)(arg1))->unk64 <= ((func_80204870_S3 *)(arg1))->unk40) {
            func_80214178(arg0, arg1, 1);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C19B0_4 = 0.00787401572f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B70_4 = 0.00787401572f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1D20_4 = 0.00787401572f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D60_4 = 0.00787401572f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A80_4 = 0.00787401572f;
#endif
