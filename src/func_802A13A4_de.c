#include "common/types.h"
#include "span_1000/code_802A1ED4.h"
#include "types.h"

extern f32 D_800C5D78_de;
extern f32 D_800CD96C[3];
extern f32 D_800CD978[3];


s32 func_802A13A4_de(s32 arg0) {
    s32 amount;
    s32 result;
    f32 value;

    amount = (arg0 + 7) & -8;
    value = D_800CD978[0] + (f32)amount;
    result = D_801470A8;
    D_801470A8 = result + amount;
    D_800CD978[0] = value;
    if (value < D_800C5D78_de) {
        D_800CD978[0] = D_800C5D78_de;
    }
    if (D_800CD978[0] > *(&D_800C5D78_de + 1)) {
        D_800CD978[0] = *(&D_800C5D78_de + 1);
    }
    if (D_800CD978[0] < D_800CD978[1]) {
        D_800CD978[1] = D_800CD978[0];
    }
    if (D_800CD978[2] < D_800CD978[0]) {
        D_800CD978[2] = D_800CD978[0];
    }

    D_800CD96C[0] += (f32)-amount;
    value = D_800CD96C[0];
    if (value < D_800C5D78_de) {
        D_800CD96C[0] = D_800C5D78_de;
    }
    if (*(&D_800C5D78_de + 1) < D_800CD96C[0]) {
        D_800CD96C[0] = *(&D_800C5D78_de + 1);
    }
    if (D_800CD96C[0] < D_800CD96C[1]) {
        D_800CD96C[1] = D_800CD96C[0];
    }
    if (D_800CD96C[2] < D_800CD96C[0]) {
        D_800CD96C[2] = D_800CD96C[0];
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5CA8_4 = (-100000000.0f);
const float unbake_rodata_800C5CAC_4 = 100000000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF08_4 = (-100000000.0f);
const float unbake_rodata_800CAF0C_4 = 100000000.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6018_4 = (-100000000.0f);
const float unbake_rodata_800C601C_4 = 100000000.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6058_4 = (-100000000.0f);
const float unbake_rodata_800C605C_4 = 100000000.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5D78_4 = (-100000000.0f);
const float unbake_rodata_800C5D7C_4 = 100000000.0f;
#endif
