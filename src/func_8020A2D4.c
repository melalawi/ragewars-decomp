/* Runs a computer player's engagement timer: while the countdown at 0x2E4 is positive it rerolls the
   wait at 0x2E8 as the config's base at 8 plus a random share (scale D_800C6E00) of its spread at 0xC
   and counts down; at zero it counts the opponents in range through func_802831FC (three counting as
   the whole wait) and either flags waiting at 0x23C while fewer than the wait or starts pursuit with
   the countdown at -1 and a wait from the config's 0x24 and 0x28 (scale D_800C6E04); during pursuit
   the wait runs down, ends early once the player is within D_800C6E08 of its target on the target's
   height, and when it reaches zero flags 0x240 and acts through func_8020A95C. Written in the style of
   func_8020A458 with the random scale loaded into a local first. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3;

extern f32 D_800C6E00;
extern f32 D_800C6E04;
extern f32 D_800C6E08;
extern char D_80121990;
extern f32 func_802745D4(f32);
extern s32 func_802831FC(char *, void *);
extern void func_80284FC8(char *, void *, Vec3 *);
extern f32 func_8027272C(Vec3 *, Vec3 *);
extern void func_8020A95C(void *, void *);

typedef struct func_8020A2D4_S1 func_8020A2D4_S1;
typedef struct func_8020A2D4_S2 func_8020A2D4_S2;
typedef struct func_8020A2D4_S3 func_8020A2D4_S3;
typedef struct func_8020A2D4_S4 func_8020A2D4_S4;
struct func_8020A2D4_S1 {
    char pad0[0x64];
    char* unk64;
    char pad64[0x23C - 0x64 - sizeof(char*)];
    s32 unk23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
};
struct func_8020A2D4_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x24 - 0xC - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
};
struct func_8020A2D4_S3 {
    char pad0[0xC];
    f32 unkC;
};
struct func_8020A2D4_S4 {
    char pad0[0x8];
    Vec3 unk8;
};

void func_8020A2D4(void *arg0, void *config) {
    s32 count;
    char *target;
    Vec3 pos;
    f32 range;
    f32 scale;

    if (((func_8020A2D4_S1 *)(arg0))->unk2E4 > 0) {
        scale = D_800C6E00;
        ((func_8020A2D4_S1 *)(arg0))->unk2E8 = ((func_8020A2D4_S2 *)(config))->unk8;
        ((func_8020A2D4_S1 *)(arg0))->unk2E8 =
            (f32) ((func_8020A2D4_S1 *)(arg0))->unk2E8
            + func_802745D4(scale) * (f32) ((func_8020A2D4_S2 *)(config))->unkC;
        ((func_8020A2D4_S1 *)(arg0))->unk2E4 -= 1;
        return;
    }
    if (((func_8020A2D4_S1 *)(arg0))->unk2E4 == 0) {
        count = func_802831FC(&D_80121990, *(void **) arg0);
        if (count == 3) {
            ((func_8020A2D4_S1 *)(arg0))->unk2E8 = count;
        }
        if (count < ((func_8020A2D4_S1 *)(arg0))->unk2E8) {
            ((func_8020A2D4_S1 *)(arg0))->unk23C = 1;
            return;
        }
        ((func_8020A2D4_S1 *)(arg0))->unk2E4 = -1;
        scale = D_800C6E04;
        ((func_8020A2D4_S1 *)(arg0))->unk2E8 = ((func_8020A2D4_S2 *)(config))->unk24;
        ((func_8020A2D4_S1 *)(arg0))->unk2E8 =
            (f32) ((func_8020A2D4_S1 *)(arg0))->unk2E8
            + func_802745D4(scale) * (f32) ((func_8020A2D4_S2 *)(config))->unk28;
        return;
    }
    ((func_8020A2D4_S1 *)(arg0))->unk2E8 -= 1;
    target = *(char **) (((func_8020A2D4_S1 *)(arg0))->unk64 + 0x1D8);
    func_80284FC8(&D_80121990, *(void **) arg0, &pos);
    range = D_800C6E08;
    pos.y = ((func_8020A2D4_S3 *)(target))->unkC;
    if (func_8027272C(&pos, &((func_8020A2D4_S4 *)(target))->unk8) < range) {
        ((func_8020A2D4_S1 *)(arg0))->unk2E8 = 0;
    }
    if (((func_8020A2D4_S1 *)(arg0))->unk2E8 == 0) {
        ((func_8020A2D4_S1 *)(arg0))->unk240 = 1;
        func_8020A95C(arg0, config);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1C40_4 = 1.0f;
const float unbake_rodata_800C1C44_4 = 1.0f;
const float unbake_rodata_800C1C48_4 = 94371.8281f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E00_4 = 1.0f;
const float unbake_rodata_800C6E04_4 = 1.0f;
const float unbake_rodata_800C6E08_4 = 94371.8281f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1FB0_4 = 1.0f;
const float unbake_rodata_800C1FB4_4 = 1.0f;
const float unbake_rodata_800C1FB8_4 = 94371.8281f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1FF0_4 = 1.0f;
const float unbake_rodata_800C1FF4_4 = 1.0f;
const float unbake_rodata_800C1FF8_4 = 94371.8281f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D10_4 = 1.0f;
const float unbake_rodata_800C1D14_4 = 1.0f;
const float unbake_rodata_800C1D18_4 = 94371.8281f;
#endif
