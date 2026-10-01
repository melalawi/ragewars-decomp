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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3490_4 = 1.0f;
const float unbake_rodata_800C3494_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8504_4 = 1.0f;
const float unbake_rodata_800C8508_4 = 0.5f;
const float unbake_rodata_800C850C_4 = 18.0f;
const float unbake_rodata_800C8510_4 = 0.800000012f;
const float unbake_rodata_800C8514_4 = 0.600000024f;
const float unbake_rodata_800C8518_4 = 0.5f;
const float unbake_rodata_800C851C_4 = 0.800000012f;
const float unbake_rodata_800C8520_4 = 0.400000006f;
const float unbake_rodata_800C8524_4 = 0.0061599859f;
const float unbake_rodata_800C8528_4 = 1.0f;
const float unbake_rodata_800C852C_4 = 0.0123199718f;
const float unbake_rodata_800C8530_4 = 255.0f;
const float unbake_rodata_800C8534_4 = 0.333333343f;
const float unbake_rodata_800C8538_4 = 9.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C3488_8 = 4294967296.0;
const double unbake_rodata_800C3490_8 = 4294967296.0;
const double unbake_rodata_800C3498_8 = 4294967296.0;
const float unbake_rodata_800C34A0_4 = 2.14748365e+09f;
const float unbake_rodata_800C34A4_4 = 1024.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C3490_8 = 4294967296.0;
const double unbake_rodata_800C3498_8 = 4294967296.0;
const double unbake_rodata_800C34A0_8 = 4294967296.0;
const double unbake_rodata_800C34A8_8 = 4294967296.0;
const double unbake_rodata_800C34B0_8 = 4294967296.0;
const double unbake_rodata_800C34B8_8 = 4294967296.0;
const float unbake_rodata_800C34C0_4 = 995.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3414_4 = 1.0f;
const float unbake_rodata_800C3418_4 = 0.5f;
const float unbake_rodata_800C341C_4 = 18.0f;
const float unbake_rodata_800C3420_4 = 0.800000012f;
const float unbake_rodata_800C3424_4 = 0.600000024f;
const float unbake_rodata_800C3428_4 = 0.5f;
const float unbake_rodata_800C342C_4 = 0.800000012f;
const float unbake_rodata_800C3430_4 = 0.400000006f;
const float unbake_rodata_800C3434_4 = 0.0061599859f;
const float unbake_rodata_800C3438_4 = 1.0f;
const float unbake_rodata_800C343C_4 = 0.0123199718f;
const float unbake_rodata_800C3440_4 = 255.0f;
const float unbake_rodata_800C3444_4 = 0.333333343f;
const float unbake_rodata_800C3448_4 = 9.0f;
#endif
