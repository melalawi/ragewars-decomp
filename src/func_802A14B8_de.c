#include "common/types.h"
#include "span_1000/code_802A1ED4.h"
#include "types.h"

extern f32 D_800C5D80_de;
extern f32 D_800CD96C[3];
extern f32 D_800CD978[3];
extern s32 D_80147060[];
extern s32 D_801470A0;


void func_802A14B8_de(void) {
    s32 index;
    s32 value;
    s32 amount;
    f32 fvalue;

    index = D_801470A0;
    value = D_80147060[index];
    amount = value - D_801470A8;
    fvalue = D_800CD978[0] + (f32)-amount;
    D_801470A0 = index - 1;
    D_801470A8 = value;
    D_800CD978[0] = fvalue;
    if (fvalue < D_800C5D80_de) {
        D_800CD978[0] = D_800C5D80_de;
    }
    if (D_800CD978[0] > *(&D_800C5D80_de + 1)) {
        D_800CD978[0] = *(&D_800C5D80_de + 1);
    }
    if (D_800CD978[0] < D_800CD978[1]) {
        D_800CD978[1] = D_800CD978[0];
    }
    if (D_800CD978[2] < D_800CD978[0]) {
        D_800CD978[2] = D_800CD978[0];
    }

    D_800CD96C[0] += (f32)amount;
    if (D_800CD96C[0] < D_800C5D80_de) {
        D_800CD96C[0] = D_800C5D80_de;
    }
    if (*(&D_800C5D80_de + 1) < D_800CD96C[0]) {
        D_800CD96C[0] = *(&D_800C5D80_de + 1);
    }
    if (D_800CD96C[0] < D_800CD96C[1]) {
        D_800CD96C[1] = D_800CD96C[0];
    }
    if (D_800CD96C[2] < D_800CD96C[0]) {
        D_800CD96C[2] = D_800CD96C[0];
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5CB0_4 = (-100000000.0f);
const float unbake_rodata_800C5CB4_4 = 100000000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF10_4 = (-100000000.0f);
const float unbake_rodata_800CAF14_4 = 100000000.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6020_4 = (-100000000.0f);
const float unbake_rodata_800C6024_4 = 100000000.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6060_4 = (-100000000.0f);
const float unbake_rodata_800C6064_4 = 100000000.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5D80_4 = (-100000000.0f);
const float unbake_rodata_800C5D84_4 = 100000000.0f;
#endif
