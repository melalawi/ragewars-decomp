#include "basetypes.h"

extern s32 func_80274544(void);
extern void func_80209988(void *object);

typedef struct func_80212450_S1 func_80212450_S1;
typedef struct func_80212450_S2 func_80212450_S2;
typedef struct func_80212450_S3 func_80212450_S3;
struct func_80212450_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212450_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212450_S3 {
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

void func_80212450(void *arg0) {
    void *level1 = ((func_80212450_S1 *)(arg0))->unk1D8;
    void *inner = ((func_80212450_S2 *)(level1))->unk1454;
    s32 r1, r2, r3;

    ((func_80212450_S3 *)(inner))->unk220 = 0;
    func_80209988(inner);

    r1 = func_80274544();
    ((func_80212450_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_80274544();
    ((func_80212450_S3 *)(inner))->unk2DC = r2 % 2;

    r3 = func_80274544();
    ((func_80212450_S3 *)(inner))->unk320 = -1;
    ((func_80212450_S3 *)(inner))->unk318 = 0;
    ((func_80212450_S3 *)(inner))->unk31C = 0;
    ((func_80212450_S3 *)(inner))->unk2E0 = r3 % 250000 + 360000;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C404C_4 = 1.0f;
const float unbake_rodata_800C4050_4 = (-2000.0f);
const float unbake_rodata_800C4054_4 = 2000.0f;
const float unbake_rodata_800C4058_4 = (-1.0f);
const float unbake_rodata_800C405C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C91C0_8 = 4294967296.0;
const double unbake_rodata_800C91C8_8 = 4294967296.0;
const double unbake_rodata_800C91D0_8 = 4294967296.0;
const double unbake_rodata_800C91D8_8 = 4294967296.0;
const double unbake_rodata_800C91E0_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4160_8 = 4294967296.0;
const float unbake_rodata_800C4168_4 = 0.0166666675f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4100_4 = 2.14748365e+09f;
const float unbake_rodata_800C4104_4 = 5.11999989f;
const float unbake_rodata_800C4108_4 = 1.57079649f;
const float unbake_rodata_800C410C_4 = 3.14159298f;
const float unbake_rodata_800C4110_4 = 4.71238947f;
const float unbake_rodata_800C4114_4 = 102.399994f;
const float unbake_rodata_800C4118_4 = 10.2399998f;
const float unbake_rodata_800C411C_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C40A0_8 = 4294967296.0;
const double unbake_rodata_800C40A8_8 = 4294967296.0;
const double unbake_rodata_800C40B0_8 = 4294967296.0;
const double unbake_rodata_800C40B8_8 = 4294967296.0;
const double unbake_rodata_800C40C0_8 = 4294967296.0;
const float unbake_rodata_800C40C8_4 = 1.0f;
#endif
