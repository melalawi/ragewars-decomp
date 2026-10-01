#include "basetypes.h"

extern void *func_8020C994(void *, s32);
extern void func_8020D220(void *, s32);
extern s32 D_8013B364;

typedef struct func_8020F614_S1 func_8020F614_S1;
typedef struct func_8020F614_S2 func_8020F614_S2;
typedef struct func_8020F614_S3 func_8020F614_S3;
typedef struct func_8020F614_S4 func_8020F614_S4;
struct func_8020F614_S1 {
    char pad0[0x24];
    void* unk24;
};
struct func_8020F614_S2 {
    char pad0[0xC];
    u16 unkC;
    char padC[0xE - 0xC - sizeof(u16)];
    u16 unkE;
};
struct func_8020F614_S3 {
    char pad0[0x10];
    void* unk10;
    char pad10[0x34 - 0x10 - sizeof(void*)];
    void* unk34;
};
struct func_8020F614_S4 {
    char pad0[0x1A4];
    s8 unk1A4;
};

s32 func_8020F614(void) {
    s32 *base;
    void *node;
    void *result;
    s32 count;

    base = &D_8013B364;
    node = ((func_8020F614_S1 *)(base))->unk24;
    count = 0;
    if (node != 0) {
        do {
            result = func_8020C994(base, *(s32 *)node);
            if ((((func_8020F614_S2 *)(result))->unkC & 1) &&
                ((func_8020F614_S2 *)(result))->unkE == 0x64E &&
                ((func_8020F614_S4 *)((((func_8020F614_S3 *)(node))->unk34)))->unk1A4 == 0) {
                func_8020D220(base, *(s32 *)node);
                count += 1;
            }
            node = ((func_8020F614_S3 *)(node))->unk10;
        } while (node != 0);
    }
    return count;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3DE0_8 = 4294967296.0;
const float unbake_rodata_800C3DE8_4 = 0.0166666675f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8E8C_4 = 0.5f;
const float unbake_rodata_800C8E90_4 = 0.100000001f;
const float unbake_rodata_800C8E94_4 = 0.5f;
const float unbake_rodata_800C8E98_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3C18_4 = 1.0f;
const float unbake_rodata_800C3C1C_4 = 0.00872664712f;
const float unbake_rodata_800C3C20_4 = 0.5f;
const float unbake_rodata_800C3C24_4 = 0.00872664712f;
const float unbake_rodata_800C3C28_4 = 1.0f;
const float unbake_rodata_800C3C2C_4 = 0.5f;
const float unbake_rodata_800C3C30_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3C40_4 = 1.57079637f;
const float unbake_rodata_800C3C44_4 = 1.57079637f;
const float unbake_rodata_800C3C48_4 = 0.5f;
const float unbake_rodata_800C3C4C_4 = 3.14159274f;
const float unbake_rodata_800C3C50_4 = 3.14159274f;
const float unbake_rodata_800C3C54_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3D80_4 = 10.2399998f;
const float unbake_rodata_800C3D84_4 = 0.0247369502f;
const float unbake_rodata_800C3D88_4 = 0.349999994f;
const float unbake_rodata_800C3D8C_4 = 0.5f;
#endif
