#include "basetypes.h"

extern s32 func_80274544(void);
extern void func_80209988(void *object);

typedef struct func_802125F0_S1 func_802125F0_S1;
typedef struct func_802125F0_S2 func_802125F0_S2;
typedef struct func_802125F0_S3 func_802125F0_S3;
struct func_802125F0_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_802125F0_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_802125F0_S3 {
    char pad0[0x220];
    s32 unk220;
    char pad220[0x2D8 - 0x220 - sizeof(s32)];
    s32 unk2D8;
    char pad2D8[0x2DC - 0x2D8 - sizeof(s32)];
    s32 unk2DC;
};

void func_802125F0(void *arg0) {
    void *level1 = ((func_802125F0_S1 *)(arg0))->unk1D8;
    void *inner = ((func_802125F0_S2 *)(level1))->unk1454;
    s32 r1, r2;

    ((func_802125F0_S3 *)(inner))->unk220 = 0;
    func_80209988(inner);

    r1 = func_80274544();
    ((func_802125F0_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_80274544();
    ((func_802125F0_S3 *)(inner))->unk2DC = r2 % 2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800C920C_4 = 1.0f;
const float unbake_rodata_800C9210_4 = (-2000.0f);
const float unbake_rodata_800C9214_4 = 2000.0f;
const float unbake_rodata_800C9218_4 = (-1.0f);
const float unbake_rodata_800C921C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4180_4 = 0.00392156886f;
const float unbake_rodata_800C4184_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C41A0_8 = 4294967296.0;
const float unbake_rodata_800C41A8_4 = 0.0166666675f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4108_4 = 1.0f;
#endif
