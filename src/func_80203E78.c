#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

typedef struct func_80203E78_S1 func_80203E78_S1;
typedef struct func_80203E78_S2 func_80203E78_S2;
struct func_80203E78_S1 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80203E78_S2 {
    char pad0[0x4];
    s32 unk4;
};

void func_80203E78(void *arg0, void *arg1, void *arg2) {
    s32 var_v1;

    var_v1 = ((func_80203E78_S1 *)(arg1))->unk4 - ((func_80203E78_S2 *)(arg2))->unk4;
    if (var_v1 < 0) {
        var_v1 = 0;
    }
    ((func_80203E78_S1 *)(arg1))->unk4 = var_v1;
    if (var_v1 == 0) {
        func_80214178(arg0, arg1, 0x40);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1B30_4 = 10.0f;
const float unbake_rodata_800C1B34_4 = 0.261799425f;
const float unbake_rodata_800C1B38_4 = 0.261799425f;
const float unbake_rodata_800C1B3C_4 = 0.5f;
const float unbake_rodata_800C1B40_4 = 1.0f;
const float unbake_rodata_800C1B44_4 = 3.14159274f;
const float unbake_rodata_800C1B48_4 = 1.0f;
const float unbake_rodata_800C1B4C_4 = (-1.0f);
const float unbake_rodata_800C1B50_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6CCC_4 = 10.0f;
const float unbake_rodata_800C6CD0_4 = 0.261799425f;
const float unbake_rodata_800C6CD4_4 = 0.261799425f;
const float unbake_rodata_800C6CD8_4 = 0.5f;
const float unbake_rodata_800C6CDC_4 = 1.0f;
const float unbake_rodata_800C6CE0_4 = 3.14159274f;
const float unbake_rodata_800C6CE4_4 = 1.0f;
const float unbake_rodata_800C6CE8_4 = (-1.0f);
const float unbake_rodata_800C6CEC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1E58_4 = 50.0f;
const float unbake_rodata_800C1E5C_4 = 0.261799425f;
const float unbake_rodata_800C1E60_4 = 0.261799425f;
const float unbake_rodata_800C1E64_4 = 50.0f;
const float unbake_rodata_800C1E68_4 = 50.0f;
const float unbake_rodata_800C1E6C_4 = 50.0f;
const float unbake_rodata_800C1E70_4 = 50.0f;
const float unbake_rodata_800C1E74_4 = 100.0f;
const float unbake_rodata_800C1E78_4 = 30.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1E98_4 = 50.0f;
const float unbake_rodata_800C1E9C_4 = 0.261799425f;
const float unbake_rodata_800C1EA0_4 = 0.261799425f;
const float unbake_rodata_800C1EA4_4 = 50.0f;
const float unbake_rodata_800C1EA8_4 = 50.0f;
const float unbake_rodata_800C1EAC_4 = 50.0f;
const float unbake_rodata_800C1EB0_4 = 50.0f;
const float unbake_rodata_800C1EB4_4 = 100.0f;
const float unbake_rodata_800C1EB8_4 = 30.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1BB8_4 = 50.0f;
const float unbake_rodata_800C1BBC_4 = 0.261799425f;
const float unbake_rodata_800C1BC0_4 = 0.261799425f;
const float unbake_rodata_800C1BC4_4 = 50.0f;
const float unbake_rodata_800C1BC8_4 = 50.0f;
const float unbake_rodata_800C1BCC_4 = 50.0f;
const float unbake_rodata_800C1BD0_4 = 50.0f;
const float unbake_rodata_800C1BD4_4 = 100.0f;
const float unbake_rodata_800C1BD8_4 = 30.0f;
#endif
