#include "basetypes.h"

extern s32 func_80274544(void);
extern void func_80209988(void *object);

typedef struct func_80212524_S1 func_80212524_S1;
typedef struct func_80212524_S2 func_80212524_S2;
typedef struct func_80212524_S3 func_80212524_S3;
struct func_80212524_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212524_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212524_S3 {
    char pad0[0x220];
    s32 unk220;
    char pad220[0x2D8 - 0x220 - sizeof(s32)];
    s32 unk2D8;
    char pad2D8[0x2DC - 0x2D8 - sizeof(s32)];
    s32 unk2DC;
    char pad2DC[0x2E0 - 0x2DC - sizeof(s32)];
    s32 unk2E0;
    char pad2E0[0x318 - 0x2E0 - sizeof(s32)];
    s32 unk318;
    char pad318[0x31C - 0x318 - sizeof(s32)];
    s32 unk31C;
    char pad31C[0x320 - 0x31C - sizeof(s32)];
    s32 unk320;
};

void func_80212524(void *arg0) {
    void *level1 = ((func_80212524_S1 *)(arg0))->unk1D8;
    void *inner = ((func_80212524_S2 *)(level1))->unk1454;
    s32 r1, r2, r3;

    ((func_80212524_S3 *)(inner))->unk220 = 0;

    r1 = func_80274544();
    ((func_80212524_S3 *)(inner))->unk2D8 = r1 % 4 + 2;

    r2 = func_80274544();
    ((func_80212524_S3 *)(inner))->unk2DC = r2 % 2;

    r3 = func_80274544();
    ((func_80212524_S3 *)(inner))->unk2E0 = r3 % 32400 + 0x2710;

    func_80209988(inner);

    ((func_80212524_S3 *)(inner))->unk318 = 0;
    ((func_80212524_S3 *)(inner))->unk31C = 0;
    ((func_80212524_S3 *)(inner))->unk320 = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4060_4 = 0.333333343f;
const float unbake_rodata_800C4064_4 = 0.5f;
const double unbake_rodata_800C4068_8 = 4294967296.0;
const float unbake_rodata_800C4070_4 = 1.0f;
const float unbake_rodata_800C4074_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C91F8_4 = 1.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4170_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4120_4 = 2.14748365e+09f;
const float unbake_rodata_800C4124_4 = 0.00787401572f;
const float unbake_rodata_800C4128_4 = 102.399994f;
const float unbake_rodata_800C412C_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C40D0_8 = 4294967296.0;
const double unbake_rodata_800C40D8_8 = 4294967296.0;
const double unbake_rodata_800C40E0_8 = 4294967296.0;
const double unbake_rodata_800C40E8_8 = 4294967296.0;
const double unbake_rodata_800C40F0_8 = 4294967296.0;
#endif
