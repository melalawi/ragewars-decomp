#include "basetypes.h"

extern void *D_800D052C[];

typedef struct func_8022AAC4_S1 func_8022AAC4_S1;
typedef struct func_8022AAC4_S2 func_8022AAC4_S2;
struct func_8022AAC4_S1 {
    char pad0[0x594];
    s32 unk594;
};
struct func_8022AAC4_S2 {
    char pad0[0x20];
    s16* unk20;
    char pad20[0x24 - 0x20 - sizeof(s16*)];
    s16* unk24;
};

s16 func_8022AAC4(void *arg0, s32 arg1) {
    s16 *var_v0;
    void *temp_a0;

    temp_a0 = D_800D052C[arg1];
    if (((func_8022AAC4_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AAC4_S2 *)(temp_a0))->unk20;
    } else {
        var_v0 = ((func_8022AAC4_S2 *)(temp_a0))->unk24;
    }
    if (var_v0 != 0) {
        return *var_v0;
    }
    return -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C5870_8 = 0.0;
const double unbake_rodata_800C5878_8 = 25.299999237060547;
const double unbake_rodata_800C5880_8 = 1.0;
const double unbake_rodata_800C5888_8 = 0.54930615425109863;
const double unbake_rodata_800C5890_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5898_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C58A0_8 = 1.0;
const double unbake_rodata_800C58A8_8 = 1.4426950216293335;
const double unbake_rodata_800C58B0_8 = 0.5;
const double unbake_rodata_800C58B8_8 = 0.693359375;
const double unbake_rodata_800C58C0_8 = 0.00021219444170128557;
const double unbake_rodata_800C58C8_8 = 1.652032915444579e-05;
const double unbake_rodata_800C58D0_8 = 0.0069435997866094112;
const double unbake_rodata_800C58D8_8 = 0.00049586285604164004;
const double unbake_rodata_800C58E0_8 = 0.055553868412971497;
const double unbake_rodata_800C58E8_8 = 0.25;
const double unbake_rodata_800C58F0_8 = 1.0;
const double unbake_rodata_800C58F8_8 = 0.5;
const double unbake_rodata_800C5900_8 = 2.300000051524975e-10;
const double unbake_rodata_800C5908_8 = (-0.96437489986419678);
const double unbake_rodata_800C5910_8 = 99.225929260253906;
const double unbake_rodata_800C5918_8 = 1613.411865234375;
const double unbake_rodata_800C5920_8 = 112.74474334716795;
const double unbake_rodata_800C5928_8 = 2233.77197265625;
const double unbake_rodata_800C5930_8 = 4840.23583984375;
const double unbake_rodata_800C5938_8 = 0.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC14_4 = 0.00100000005f;
const float unbake_rodata_800CAC18_4 = (-0.00100000005f);
const float unbake_rodata_800CAC1C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5764_4 = 30.0f;
const float unbake_rodata_800C5768_4 = 675.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5738_4 = 1.0f;
const float unbake_rodata_800C573C_4 = 255.0f;
const float unbake_rodata_800C5740_4 = 9.99999997e-07f;
const float unbake_rodata_800C5744_4 = 0.100000001f;
const float unbake_rodata_800C5748_4 = 0.5f;
const float unbake_rodata_800C574C_4 = 1.0f;
const float unbake_rodata_800C5750_4 = (-4.0f);
const float unbake_rodata_800C5754_4 = 0.5f;
const float unbake_rodata_800C5758_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C56C0_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C56C8_8 = 1.0;
const double unbake_rodata_800C56D0_8 = 1.0;
#endif
