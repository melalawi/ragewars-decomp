#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} CTriple;

extern s32 D_8011FE88;

extern void func_80278DE8(void *, s32, void *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80216288(void *, s32, CTriple, s32);
extern s32 func_802170A0(void *, void *, s32, s32, s32);

typedef struct func_802054E0_S1 func_802054E0_S1;
struct func_802054E0_S1 {
    char pad0[0x8];
    CTriple unk8;
};

void func_802054E0(void *arg0, void *arg1) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x18) + 0x14;
    M2C_FIELD(arg0, s32 *, 0x100) =
        (s32) (M2C_FIELD(arg0, s32 *, 0x100) & 0xFFFEFFFF);
    func_80278DE8(arg0, 0x40000, arg0);
    if (M2C_FIELD(temp_s1, s32 *, 0x2C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x2000;
        M2C_FIELD(arg0, s32 *, 0x100) &= ~0x100;
    }
    if (D_8011FE88 == 4) {
        if (M2C_FIELD(temp_s1, s32 *, 0x34) != -1) {
            func_8025DE74(M2C_FIELD(temp_s1, s16 *, 0x36),
                          M2C_FIELD(arg0, s32 *, 8),
                          M2C_FIELD(arg0, s32 *, 0xC),
                          M2C_FIELD(arg0, s32 *, 0x10), 0, -1);
        }
        if (M2C_FIELD(temp_s1, s32 *, 0x30) != -1) {
            func_80216288(arg0, M2C_FIELD(temp_s1, s32 *, 0x30),
                          ((func_802054E0_S1 *)(arg0))->unk8, 0);
        }
        func_802170A0(arg0, arg1, 8,
                      M2C_FIELD(temp_s1, s32 *, 0x38),
                      M2C_FIELD(temp_s1, s32 *, 0x3C));
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C21C8_4 = 2.0f;
const float unbake_rodata_800C21CC_4 = 0.25f;
const float unbake_rodata_800C21D0_4 = 1.0f;
const float unbake_rodata_800C21D4_4 = 0.25f;
const float unbake_rodata_800C21D8_4 = 0.52359885f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7310_4 = 0.400000006f;
const float unbake_rodata_800C7314_4 = (-0.600000024f);
const float unbake_rodata_800C7318_4 = 1.29999995f;
const float unbake_rodata_800C731C_4 = 0.100000001f;
const float unbake_rodata_800C7320_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2420_4 = 1.0f;
const float unbake_rodata_800C2424_4 = (-1.0f);
const float unbake_rodata_800C2428_4 = 0.52359885f;
const float unbake_rodata_800C242C_4 = 3.14159274f;
const float unbake_rodata_800C2430_4 = 0.261799425f;
const float unbake_rodata_800C2434_4 = (-0.261799425f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C245C_4 = 0.0174532942f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2200_4 = 255.0f;
const float unbake_rodata_800C2204_4 = 0.5f;
const float unbake_rodata_800C2208_4 = 2.14748365e+09f;
const float unbake_rodata_800C220C_4 = 0.00312500005f;
const float unbake_rodata_800C2210_4 = 0.00416666688f;
const float unbake_rodata_800C2214_4 = 63.0f;
const float unbake_rodata_800C2218_4 = 192.0f;
const float unbake_rodata_800C221C_4 = 1.0f;
#endif
