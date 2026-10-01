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

extern s32 D_8011FE88;
extern char D_8013BA80;

extern void func_80285D80(void *arg0, void *arg1, s32 arg2);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern void func_802A6D28(void *arg0, void *arg1);
extern void func_802671B0(void *arg0, void *arg1, s32 arg2,
                          Triple arg3, Pair arg4);

typedef struct func_80204D2C_S1 func_80204D2C_S1;
struct func_80204D2C_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x100 - 0x8 - sizeof(Triple)];
    s32 unk100;
};

void func_80204D2C(void *arg0) {
    Pair local;
    s32 *flag;

    local.a = 0;
    flag = &D_8011FE88;
    func_80285D80(flag, arg0, 0);
    func_80278DE8(arg0, 0x8000, arg0);
    func_802A6D28(&D_8013BA80, arg0);
    if (*flag != 4) {
        func_802671B0(arg0, arg0, 7,
                      ((func_80204D2C_S1 *)(arg0))->unk8, local);
        ((func_80204D2C_S1 *)(arg0))->unk100 |= 0x08000000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1EE0_4 = 3.14159274f;
const float unbake_rodata_800C1EE4_4 = 0.392699093f;
const float unbake_rodata_800C1EE8_4 = 6.28318548f;
const float unbake_rodata_800C1EEC_4 = 6.28318548f;
const float unbake_rodata_800C1EF0_4 = 6.18318558f;
const float unbake_rodata_800C1EF4_4 = 0.100000001f;
const float unbake_rodata_800C1EF8_4 = 0.159154937f;
const float unbake_rodata_800C1EFC_4 = 8.0f;
const float unbake_rodata_800C1F00_4 = 180.0f;
const float unbake_rodata_800C1F04_4 = 140.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7040_4 = 1536.0f;
const float unbake_rodata_800C7044_4 = 921.599976f;
const float unbake_rodata_800C7048_4 = 512.0f;
const float unbake_rodata_800C704C_4 = 0.785398245f;
const float unbake_rodata_800C7050_4 = 2.35619473f;
const float unbake_rodata_800C7054_4 = 1.10000002f;
const float unbake_rodata_800C7058_4 = 1.20000005f;
const float unbake_rodata_800C705C_4 = 0.800000012f;
const float unbake_rodata_800C7060_4 = 0.800000012f;
const float unbake_rodata_800C7064_4 = 1.10000002f;
const float unbake_rodata_800C7068_4 = 1.20000005f;
const float unbake_rodata_800C706C_4 = 1.0f;
const float unbake_rodata_800C7070_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C21C0_4 = 100.0f;
const float unbake_rodata_800C21C4_4 = 100.0f;
const float unbake_rodata_800C21C8_4 = 1.0f;
const float unbake_rodata_800C21CC_4 = 80.0f;
const float unbake_rodata_800C21D0_4 = 10.0f;
const float unbake_rodata_800C21D4_4 = 10.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2200_4 = 100.0f;
const float unbake_rodata_800C2204_4 = 100.0f;
const float unbake_rodata_800C2208_4 = 1.0f;
const float unbake_rodata_800C220C_4 = 80.0f;
const float unbake_rodata_800C2210_4 = 10.0f;
const float unbake_rodata_800C2214_4 = 10.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1F90_4 = 61.4399986f;
const float unbake_rodata_800C1F94_4 = 0.707106769f;
#endif
