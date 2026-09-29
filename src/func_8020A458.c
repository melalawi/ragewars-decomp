#include "basetypes.h"

extern f32 D_800C6E0C;
extern f32 D_800C6E10;
extern f32 D_800C6E14;
extern char D_80121990;

extern void func_8028509C(void *arg0, void *arg1, f32 *arg2);
extern f32 func_802745D4(f32 arg0);
extern f32 func_80216F44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C(void *arg0);
extern void func_8020A95C(void *arg0, void *arg1);

typedef struct func_8020A458_S1 func_8020A458_S1;
typedef struct func_8020A458_S2 func_8020A458_S2;
typedef struct func_8020A458_S3 func_8020A458_S3;
typedef struct func_8020A458_S4 func_8020A458_S4;
struct func_8020A458_S1 {
    char pad0[0x64];
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
struct func_8020A458_S2 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
};
struct func_8020A458_S3 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_8020A458_S4 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_8020A458(void *arg0, void *arg1) {
    s32 timer;
    s32 minus_one;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }

    timer = ((func_8020A458_S1 *)(arg0))->unk2EC;
    if (timer == 0) {
        f32 value;

        func_8028509C(&D_80121990, *(void **) arg0, &value);
        if (value < D_800C6E0C) {
            f32 k = D_800C6E14;
            f32 threshold = func_802745D4(D_800C6E10) + k;

            if ((f32) ((func_8020A458_S2 *)(arg1))->unk34 < threshold) {
                s32 base = ((func_8020A458_S2 *)(arg1))->unk24;
                ((func_8020A458_S1 *)(arg0))->unk240 =
                    (s32) ((f32) base + func_802745D4(k) * (f32) ((func_8020A458_S2 *)(arg1))->unk28);
            }
            ((func_8020A458_S1 *)(arg0))->unk2EC = ((func_8020A458_S2 *)(arg1))->unk2C;
            ((func_8020A458_S1 *)(arg0))->unk2EC =
                (s32) ((f32) ((func_8020A458_S1 *)(arg0))->unk2EC +
                       func_802745D4(k) * (f32) ((func_8020A458_S2 *)(arg1))->unk30);
            ((func_8020A458_S1 *)(arg0))->unk2EC += ((func_8020A458_S1 *)(arg0))->unk240;
        }
    } else {
        ((func_8020A458_S1 *)(arg0))->unk2EC = timer - 1;
    }

    timer = ((func_8020A458_S1 *)(arg0))->unk2E4;
    if (timer > 0) {
        ((func_8020A458_S1 *)(arg0))->unk2E4 = timer - 1;
        return;
    }
    minus_one = -1;
    if (timer == minus_one) {
        ((func_8020A458_S1 *)(arg0))->unk23C = 1;
        ((func_8020A458_S1 *)(arg0))->unk2E8 += minus_one;
    } else {
        record = ((func_8020A458_S3 *)(((func_8020A458_S1 *)(arg0))->unk64))->unk1D8;
        distance = func_80216F44(*(s32 *)arg0,
                                 ((func_8020A458_S4 *)(record))->unk8,
                                 ((func_8020A458_S4 *)(record))->unkC,
                                 ((func_8020A458_S4 *)(record))->unk10);
        if (func_8020AA0C(arg0) < distance) {
            return;
        }
        ((func_8020A458_S1 *)(arg0))->unk23C = 1;
        ((func_8020A458_S1 *)(arg0))->unk2E4 = minus_one;
    }
    if (((func_8020A458_S1 *)(arg0))->unk2E8 == 0) {
        ((func_8020A458_S1 *)(arg0))->unk23C = 0;
        func_8020A95C(arg0, arg1);
    }
}
