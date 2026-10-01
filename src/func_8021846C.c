#include "basetypes.h"

extern f32 D_800D2988;

typedef struct func_8021846C_S1 func_8021846C_S1;
typedef struct func_8021846C_S2 func_8021846C_S2;
typedef struct func_8021846C_S3 func_8021846C_S3;
struct func_8021846C_S1 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x37C - 0x4 - sizeof(f32)];
    s32 unk37C;
};
struct func_8021846C_S2 {
    char pad0[0x698];
    void* unk698;
};
struct func_8021846C_S3 {
    char pad0[0xB0];
    s32 unkB0;
};

s32 func_8021846C(void *arg0, void *arg1) {
    f32 temp_f1;

    temp_f1 = ((func_8021846C_S1 *)(arg0))->unk4;
    if (temp_f1 > 0.0f) {
        ((func_8021846C_S1 *)(arg0))->unk4 = temp_f1 - D_800D2988;
        return 0;
    }
    if (((func_8021846C_S3 *)((((func_8021846C_S2 *)(arg1))->unk698)))->unkB0 & 0x8000) {
        return 0;
    }
    ((func_8021846C_S1 *)(arg0))->unk37C = -1;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4B28_4 = 0.25f;
const float unbake_rodata_800C4B2C_4 = 1.41421354f;
const float unbake_rodata_800C4B30_4 = 0.5f;
const float unbake_rodata_800C4B34_4 = 32.0f;
const float unbake_rodata_800C4B38_4 = 6.0f;
const float unbake_rodata_800C4B3C_4 = 32.0f;
const float unbake_rodata_800C4B40_4 = 0.0174532942f;
const float unbake_rodata_800C4B44_4 = 0.0666666701f;
const float unbake_rodata_800C4B48_4 = 10.2399998f;
const float unbake_rodata_800C4B4C_4 = 4096.0f;
const float unbake_rodata_800C4B50_4 = 400.0f;
const float unbake_rodata_800C4B54_4 = 4096.0f;
const float unbake_rodata_800C4B58_4 = 400.0f;
const float unbake_rodata_800C4B5C_4 = 10.2399998f;
const float unbake_rodata_800C4B60_4 = 0.5f;
const float unbake_rodata_800C4B64_4 = 0.00100000005f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9CE8_4 = 0.25f;
const float unbake_rodata_800C9CEC_4 = 1.41421354f;
const float unbake_rodata_800C9CF0_4 = 0.5f;
const float unbake_rodata_800C9CF4_4 = 32.0f;
const float unbake_rodata_800C9CF8_4 = 6.0f;
const float unbake_rodata_800C9CFC_4 = 32.0f;
const float unbake_rodata_800C9D00_4 = 0.0174532942f;
const float unbake_rodata_800C9D04_4 = 0.0666666701f;
const float unbake_rodata_800C9D08_4 = 10.2399998f;
const float unbake_rodata_800C9D0C_4 = 4096.0f;
const float unbake_rodata_800C9D10_4 = 400.0f;
const float unbake_rodata_800C9D14_4 = 4096.0f;
const float unbake_rodata_800C9D18_4 = 400.0f;
const float unbake_rodata_800C9D1C_4 = 10.2399998f;
const float unbake_rodata_800C9D20_4 = 0.5f;
const float unbake_rodata_800C9D24_4 = 0.00100000005f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C7C_4 = 1.0f;
const float unbake_rodata_800C4C80_4 = 1.0f;
const float unbake_rodata_800C4C84_4 = 1.0f;
const float unbake_rodata_800C4C88_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BD4_4 = 0.999998987f;
const float unbake_rodata_800C4BD8_4 = 0.999998987f;
const float unbake_rodata_800C4BDC_4 = 1.0f;
const float unbake_rodata_800C4BE0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4B78_4 = 30.0f;
const float unbake_rodata_800C4B7C_4 = (-40.9599991f);
const float unbake_rodata_800C4B80_4 = 51.1999969f;
const float unbake_rodata_800C4B84_4 = 5.0f;
const float unbake_rodata_800C4B88_4 = 0.5f;
const float unbake_rodata_800C4B8C_4 = 10.0f;
const float unbake_rodata_800C4B90_4 = 90.0f;
const float unbake_rodata_800C4B94_4 = 0.100000001f;
const float unbake_rodata_800C4B98_4 = 5.0f;
const float unbake_rodata_800C4B9C_4 = 0.300000012f;
const float unbake_rodata_800C4BA0_4 = 1.0f;
const float unbake_rodata_800C4BA4_4 = 30.0f;
#endif
