#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "types.h"

extern void *func_8020C994_de(void *, s32);
extern void func_8020D220_de(void *, s32);
extern s32 D_801372A4;










s32 func_8020F614_de(void) {
    s32 *base;
    void *node;
    void *result;
    s32 count;

    base = &D_801372A4;
    node = ((func_8020D0CC_S1 *)(base))->unk24;
    count = 0;
    if (node != 0) {
        do {
            result = func_8020C994_de(base, *(s32 *)node);
            if ((((func_8020EEA4_S2 *)(result))->unkC & 1) &&
                ((func_8020EEA4_S2 *)(result))->unkE == 0x64E &&
                ((func_8020F444_S3 *)((((func_8020F444_S2 *)(node))->unk34)))->unk1A4 == 0) {
                func_8020D220_de(base, *(s32 *)node);
                count += 1;
            }
            node = ((func_8020F444_S2 *)(node))->unk10;
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
