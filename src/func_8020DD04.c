#include "basetypes.h"

typedef struct WeightSource {
    char pad[0x2C];
    f32 first;
    f32 second;
    f32 third;
} WeightSource;

extern s32 func_80274544(void);

s32 func_8020DD04(WeightSource *arg0) {
    s32 first;
    s32 second;
    s32 third;
    s32 first_end;
    s32 second_end;
    s32 total;
    s32 value;

    first = (s32)arg0->first;
    second = (s32)arg0->second;
    third = (s32)arg0->third;
    first_end = 0;
    if (first > 0) {
        first_end = first;
    }
    second_end = 0;
    if (second > 0) {
        second_end = first_end + second;
    }
    total = first + second + third;
    if (total == 0) {
        return 3;
    }
    value = (func_80274544() % total) + 1;
    if (first_end < value) {
        if (second_end >= value) {
            return 4;
        }
        return 3;
    }
    return 5;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C39AC_4 = 512.0f;
const float unbake_rodata_800C39B0_4 = 0.00787401572f;
const float unbake_rodata_800C39B4_4 = (-0.000904977438f);
const float unbake_rodata_800C39B8_4 = (-1.0f);
const float unbake_rodata_800C39BC_4 = 56.0f;
const float unbake_rodata_800C39C0_4 = 128.0f;
const float unbake_rodata_800C39C4_4 = 0.00392156886f;
const float unbake_rodata_800C39C8_4 = 1.0f;
const float unbake_rodata_800C39CC_4 = 0.150000006f;
const float unbake_rodata_800C39D0_4 = 0.150000006f;
const float unbake_rodata_800C39D4_4 = 0.150000006f;
const float unbake_rodata_800C39D8_4 = (-0.150000006f);
const float unbake_rodata_800C39DC_4 = 0.899999976f;
const float unbake_rodata_800C39E0_4 = 0.00300000003f;
const float unbake_rodata_800C39E4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8A74_4 = 1.0f;
const float unbake_rodata_800C8A78_4 = 0.5f;
const float unbake_rodata_800C8A7C_4 = 0.5f;
const float unbake_rodata_800C8A80_4 = 0.5f;
const float unbake_rodata_800C8A84_4 = 0.5f;
const float unbake_rodata_800C8A88_4 = 0.699999988f;
const float unbake_rodata_800C8A8C_4 = (-1.0f);
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C39A0_18[] = {0x0023F80CU, 0x0023F83CU, 0x0023F868U, 0x0023F890U, 0x0023F8BCU, 0x0023F8F4U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39B8_4 = 10.2399998f;
const float unbake_rodata_800C39BC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3968_4 = 1.0f;
const float unbake_rodata_800C396C_4 = 0.00872664712f;
const float unbake_rodata_800C3970_4 = 0.5f;
const float unbake_rodata_800C3974_4 = 0.00872664712f;
const float unbake_rodata_800C3978_4 = 1.0f;
const float unbake_rodata_800C397C_4 = 0.5f;
const float unbake_rodata_800C3980_4 = 1.0f;
#endif
