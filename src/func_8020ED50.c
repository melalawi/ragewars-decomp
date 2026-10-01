#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 field4;
    char pad8[4];
    s32 fieldC;
    s32 field10;
} Func8020ED50Arg;

extern s32 D_8013B364;

extern s32 func_8020D1CC(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8020BC50(void *arg0, s32 arg1, s32 arg2, void *arg3);

s32 func_8020ED50(Func8020ED50Arg *arg0) {
    s32 *base;

    base = &D_8013B364;
    if (base != 0) {
        if (arg0->field10 == -1) {
            return 1;
        }
        if (arg0->field4 == arg0->field10) {
            return 1;
        }
        if (func_8020D1CC(base, arg0->field4, arg0->field10) == 0) {
            arg0->fieldC = func_8020BC50(base, arg0->field4, arg0->field10, arg0);
        }
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3A98_4 = 0.5f;
const float unbake_rodata_800C3A9C_4 = 0.300000012f;
const float unbake_rodata_800C3AA0_4 = (-2.0f);
const float unbake_rodata_800C3AA4_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8B6C_4 = 512.0f;
const float unbake_rodata_800C8B70_4 = 0.00787401572f;
const float unbake_rodata_800C8B74_4 = (-0.000904977438f);
const float unbake_rodata_800C8B78_4 = (-1.0f);
const float unbake_rodata_800C8B7C_4 = 56.0f;
const float unbake_rodata_800C8B80_4 = 128.0f;
const float unbake_rodata_800C8B84_4 = 0.00392156886f;
const float unbake_rodata_800C8B88_4 = 1.0f;
const float unbake_rodata_800C8B8C_4 = 0.150000006f;
const float unbake_rodata_800C8B90_4 = 0.150000006f;
const float unbake_rodata_800C8B94_4 = 0.150000006f;
const float unbake_rodata_800C8B98_4 = (-0.150000006f);
const float unbake_rodata_800C8B9C_4 = 0.899999976f;
const float unbake_rodata_800C8BA0_4 = 0.00300000003f;
const float unbake_rodata_800C8BA4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C39E4_4 = 1.0f;
const float unbake_rodata_800C39E8_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C39F8_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
const float unbake_rodata_800C3A0C_4 = 1.5f;
const float unbake_rodata_800C3A10_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C3A20_2C[] = {0x43, 0x47, 0x61, 0x6D, 0x65, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x49, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x5F, 0x5F, 0x44, 0x72, 0x61, 0x77, 0x3A, 0x20, 0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
#endif
