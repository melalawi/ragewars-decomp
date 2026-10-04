#include "common/types.h"
#include "span_1000/code_8020D328.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void *func_8022A83C_de(char *);
extern f32 func_80209B64_de(void *arg0);
extern f32 func_80274A90_de(f32 arg0, f32 arg1);
extern s32 D_801427E0;












s32 func_8020EA10_de(void **arg0) {
    char *base;
    f32 temp_f20;

    base = (char *)&D_801427E0;
    if (((func_8020EA10_S1 *)(base))->unk78 == 0) {
        return 0;
    }
    if (((func_8020EA10_S3 *)((((func_80209B64_S4 *)((*arg0)))->unk5D8)))->unk8F != 0) {
        return 0;
    }
    if (func_8022A83C_de(base - 0x1860) != 0) {
        return 0;
    }
    temp_f20 = func_80209B64_de(arg0) * D_800C1E50_de + ((func_802077F4_S2 *)(&D_800C1E50_de))->unk4;
    if (temp_f20 < func_80274A90_de(0.0f, D_800C1E58_de)) {
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1D80_4 = 0.600000024f;
const float unbake_rodata_800C1D84_4 = 0.200000003f;
const float unbake_rodata_800C1D88_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6F40_4 = 0.600000024f;
const float unbake_rodata_800C6F44_4 = 0.200000003f;
const float unbake_rodata_800C6F48_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C20F0_4 = 0.600000024f;
const float unbake_rodata_800C20F4_4 = 0.200000003f;
const float unbake_rodata_800C20F8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2130_4 = 0.600000024f;
const float unbake_rodata_800C2134_4 = 0.200000003f;
const float unbake_rodata_800C2138_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1E50_4 = 0.600000024f;
const float unbake_rodata_800C1E54_4 = 0.200000003f;
const float unbake_rodata_800C1E58_4 = 1.0f;
#endif
