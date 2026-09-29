#include "basetypes.h"

extern void func_8020A884(void *arg0, void *arg1);
extern f32 func_80216F44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C(void *arg0);
extern void func_8020A95C(void *arg0, void *arg1);

typedef struct func_8020A6D8_S1 func_8020A6D8_S1;
typedef struct func_8020A6D8_S2 func_8020A6D8_S2;
typedef struct func_8020A6D8_S3 func_8020A6D8_S3;
struct func_8020A6D8_S1 {
    char pad0[0x64];
    void* unk64;
    char pad64[0x23C - 0x64 - sizeof(void*)];
    s32 unk23C;
    char pad23C[0x2E4 - 0x23C - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
};
struct func_8020A6D8_S2 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_8020A6D8_S3 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_8020A6D8(void *arg0, void *arg1) {
    s32 timer;
    s32 minus_one;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }
    func_8020A884(arg0, arg1);
    timer = ((func_8020A6D8_S1 *)(arg0))->unk2E4;
    if (timer > 0) {
        ((func_8020A6D8_S1 *)(arg0))->unk2E4 = timer - 1;
        return;
    }
    minus_one = -1;
    if (timer == minus_one) {
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 1;
        ((func_8020A6D8_S1 *)(arg0))->unk2E8 += minus_one;
    } else {
        record = ((func_8020A6D8_S2 *)(((func_8020A6D8_S1 *)(arg0))->unk64))->unk1D8;
        distance = func_80216F44(*(s32 *)arg0,
                                 ((func_8020A6D8_S3 *)(record))->unk8,
                                 ((func_8020A6D8_S3 *)(record))->unkC,
                                 ((func_8020A6D8_S3 *)(record))->unk10);
        if (func_8020AA0C(arg0) < distance) {
            return;
        }
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 1;
        ((func_8020A6D8_S1 *)(arg0))->unk2E4 = minus_one;
    }
    if (((func_8020A6D8_S1 *)(arg0))->unk2E8 == 0) {
        ((func_8020A6D8_S1 *)(arg0))->unk23C = 0;
        func_8020A95C(arg0, arg1);
    }
}
