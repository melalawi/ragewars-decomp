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
extern void func_802671B0(void *, void *, s32, Triple, Pair);
extern void func_80285D80(void *, void *, s32);

typedef struct func_80204F10_S1 func_80204F10_S1;
struct func_80204F10_S1 {
    char pad0[0x8];
    Triple unk8;
};

/** Submit an object's three-word record, then attach it to the global owner. */
void func_80204F10(void *arg0) {
    Pair pair;

    pair.a = 0;
    func_802671B0(arg0, arg0, 7, ((func_80204F10_S1 *)(arg0))->unk8, pair);
    func_80285D80(&D_8011FE88, arg0, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2068_4 = 0.899999976f;
const float unbake_rodata_800C206C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7190_4 = 360000.0f;
const float unbake_rodata_800C7194_4 = 0.400000006f;
const float unbake_rodata_800C7198_4 = 3.14159274f;
const float unbake_rodata_800C719C_4 = 1.57079637f;
const float unbake_rodata_800C71A0_4 = 100.0f;
const float unbake_rodata_800C71A4_4 = 3.14159274f;
const float unbake_rodata_800C71A8_4 = 1.57079637f;
const float unbake_rodata_800C71AC_4 = 100.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C22D0_4 = 0.600000024f;
const float unbake_rodata_800C22D4_4 = 10000.0f;
const float unbake_rodata_800C22D8_4 = 3.14159274f;
const float unbake_rodata_800C22DC_4 = 100.0f;
const float unbake_rodata_800C22E0_4 = 1.0f;
const float unbake_rodata_800C22E4_4 = 10000.0f;
const float unbake_rodata_800C22E8_4 = 100.0f;
const float unbake_rodata_800C22EC_4 = (-1.0f);
const float unbake_rodata_800C22F0_4 = 3.14159274f;
const float unbake_rodata_800C22F4_4 = 1.57079637f;
const float unbake_rodata_800C22F8_4 = 100.0f;
const float unbake_rodata_800C22FC_4 = 3.14159274f;
const float unbake_rodata_800C2300_4 = 1.57079637f;
const float unbake_rodata_800C2304_4 = 100.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2310_4 = 0.600000024f;
const float unbake_rodata_800C2314_4 = 10000.0f;
const float unbake_rodata_800C2318_4 = 3.14159274f;
const float unbake_rodata_800C231C_4 = 100.0f;
const float unbake_rodata_800C2320_4 = 1.0f;
const float unbake_rodata_800C2324_4 = 10000.0f;
const float unbake_rodata_800C2328_4 = 100.0f;
const float unbake_rodata_800C232C_4 = (-1.0f);
const float unbake_rodata_800C2330_4 = 3.14159274f;
const float unbake_rodata_800C2334_4 = 1.57079637f;
const float unbake_rodata_800C2338_4 = 100.0f;
const float unbake_rodata_800C233C_4 = 3.14159274f;
const float unbake_rodata_800C2340_4 = 1.57079637f;
const float unbake_rodata_800C2344_4 = 100.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C20C0_4 = (-1.0f);
#endif
