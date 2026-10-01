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

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern void func_802A6D28(void *, s32);
extern void func_802671B0(void *, void *, s32, Triple, Pair);

typedef struct func_80204C68_S1 func_80204C68_S1;
typedef struct func_80204C68_S2 func_80204C68_S2;
struct func_80204C68_S1 {
    char pad0[0x64];
    s32 unk64;
};
struct func_80204C68_S2 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x100 - 0x8 - sizeof(Triple)];
    s32 unk100;
};

void func_80204C68(void *arg0, void *arg1) {
    Pair local;
    s32 *flag;

    local.a = 0;
    flag = &D_8011FE88;
    func_80285D80(flag, arg0, 1);
    func_80278DE8(arg0, 0x4000, arg0);
    ((func_80204C68_S1 *)(arg1))->unk64 = 0;
    func_802A6D28(&D_8013BA80, arg0);
    if (*flag != 4) {
        func_802671B0(arg0, arg0, 6,
                      ((func_80204C68_S2 *)(arg0))->unk8, local);
        ((func_80204C68_S2 *)(arg0))->unk100 |= 0x08000000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1EC8_4 = 100.0f;
const float unbake_rodata_800C1ECC_4 = 2.25f;
const float unbake_rodata_800C1ED0_4 = 0.5f;
const float unbake_rodata_800C1ED4_4 = 153.599991f;
const float unbake_rodata_800C1ED8_4 = 307.199982f;
const float unbake_rodata_800C1EDC_4 = 100.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7030_4 = 100.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C21B0_4 = 3072.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C21F0_4 = 3072.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1F50_4 = 1536.0f;
const float unbake_rodata_800C1F54_4 = 921.599976f;
const float unbake_rodata_800C1F58_4 = 512.0f;
const float unbake_rodata_800C1F5C_4 = 0.785398245f;
const float unbake_rodata_800C1F60_4 = 2.35619473f;
const float unbake_rodata_800C1F64_4 = 1.10000002f;
const float unbake_rodata_800C1F68_4 = 1.20000005f;
const float unbake_rodata_800C1F6C_4 = 0.800000012f;
const float unbake_rodata_800C1F70_4 = 0.800000012f;
const float unbake_rodata_800C1F74_4 = 1.10000002f;
const float unbake_rodata_800C1F78_4 = 1.20000005f;
const float unbake_rodata_800C1F7C_4 = 1.0f;
const float unbake_rodata_800C1F80_4 = 0.5f;
#endif
