#include "basetypes.h"

extern f32 func_802745D4(f32 arg0);
extern f32 func_80216F44(s32 a0, s32 a1, s32 a2, s32 a3);

extern f32 D_800C6DE4;
extern f32 D_800C6DE8;
extern f32 D_800C6DEC;
extern f32 D_800C6DF0;
extern f32 D_800C6DF4;
extern f32 D_800C6DF8;
extern f32 D_800C6DFC;

typedef struct func_8020A028_S1 func_8020A028_S1;
typedef struct func_8020A028_S2 func_8020A028_S2;
typedef struct func_8020A028_S3 func_8020A028_S3;
typedef struct func_8020A028_S4 func_8020A028_S4;
struct func_8020A028_S1 {
    s32 unk0;
    char pad0[0x64 - 0x0 - sizeof(s32)];
    void* unk64;
    char pad64[0x23C - 0x64 - sizeof(void*)];
    s32 unk23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
    char pad2E8[0x2EC - 0x2E8 - sizeof(s32)];
    s32 unk2EC;
};
struct func_8020A028_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x1C - 0x14 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
};
struct func_8020A028_S3 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_8020A028_S4 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_8020A028(void *arg0, void *arg1)
{
    s32 v0;
    f32 f20;
    f32 f1;
    f32 new_var;
    s32 s1;

    v0 = ((func_8020A028_S1 *)(arg0))->unk2EC;
    if (v0 > 0) {
        v0 = v0 - 1;
        ((func_8020A028_S1 *)(arg0))->unk2EC = v0;
        if (v0 == 0) {
            f20 = D_800C6DE4;
            if (func_802745D4(f20) < D_800C6DE8) {
                ((func_8020A028_S1 *)(arg0))->unk2EC = -1;
                ((func_8020A028_S1 *)(arg0))->unk2E4 = ((func_8020A028_S2 *)(arg1))->unk1C;
                ((func_8020A028_S1 *)(arg0))->unk2E4 = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2E4
                    + (func_802745D4(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk20));
                ((func_8020A028_S1 *)(arg0))->unk2E8 = ((func_8020A028_S2 *)(arg1))->unk24;
                ((func_8020A028_S1 *)(arg0))->unk2E8 = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2E8
                    + (func_802745D4(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk28));
            } else {
                ((func_8020A028_S1 *)(arg0))->unk2EC = ((func_8020A028_S2 *)(arg1))->unk10;
                ((func_8020A028_S1 *)(arg0))->unk2EC = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2EC
                    + (func_802745D4(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk14));
            }
        }
    }
    if (((func_8020A028_S1 *)(arg0))->unk2EC == -1) {
        v0 = ((func_8020A028_S1 *)(arg0))->unk2E8 - 1;
        ((func_8020A028_S1 *)(arg0))->unk2E8 = v0;
        if (v0 == 0) {
            f20 = D_800C6DEC;
            ((func_8020A028_S1 *)(arg0))->unk2EC = ((func_8020A028_S2 *)(arg1))->unk10;
            ((func_8020A028_S1 *)(arg0))->unk2EC = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2EC
                + (func_802745D4(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk14));
            ((func_8020A028_S1 *)(arg0))->unk2E4 = ((func_8020A028_S2 *)(arg1))->unk0;
            ((func_8020A028_S1 *)(arg0))->unk2E4 = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2E4
                + (func_802745D4(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk4));
            ((func_8020A028_S1 *)(arg0))->unk2E8 = ((func_8020A028_S2 *)(arg1))->unk8;
            f1 = (f32) ((func_8020A028_S1 *)(arg0))->unk2E8
                + (func_802745D4(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unkC);
            ((func_8020A028_S1 *)(arg0))->unk240 = 0;
            ((func_8020A028_S1 *)(arg0))->unk2E8 = (s32) f1;
        } else {
            ((func_8020A028_S1 *)(arg0))->unk240 = 1;
        }
    }
    v0 = ((func_8020A028_S1 *)(arg0))->unk2E4;
    if (v0 > 0) {
        ((func_8020A028_S1 *)(arg0))->unk2E4 = v0 - 1;
        return;
    }
    if (((func_8020A028_S1 *)(arg0))->unk240 > 0) {
        s1 = ((func_8020A028_S2 *)(arg1))->unk1C;
        new_var = func_802745D4(D_800C6DF0);
        if (1) {
            f20 = D_800C6DF4;
            s1 = (s32) ((f32) s1 + (new_var * (f32) ((func_8020A028_S2 *)(arg1))->unk20));
        }
    } else {
        s1 = ((func_8020A028_S2 *)(arg1))->unk0;
        s1 = (s32) ((f32) s1 + (func_802745D4(D_800C6DF8) * (f32) ((func_8020A028_S2 *)(arg1))->unk4));
        f20 = D_800C6DFC;
    }
    {
        void *p = ((func_8020A028_S1 *)(arg0))->unk64;
        void *q = ((func_8020A028_S3 *)(p))->unk1D8;
        if (!(f20 < func_80216F44(((func_8020A028_S1 *)(arg0))->unk0,
                                    ((func_8020A028_S4 *)(q))->unk8,
                                    ((func_8020A028_S4 *)(q))->unkC,
                                    ((func_8020A028_S4 *)(q))->unk10))) {
            ((func_8020A028_S1 *)(arg0))->unk23C = 1;
            ((func_8020A028_S1 *)(arg0))->unk2E4 = s1;
        }
    }
}
