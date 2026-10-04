#include "span_1000/code_8022A8E0.h"
#include "types.h"

extern void *D_800CB2EC[];
extern s16 D_800CB348_de[];






s16 func_8022AB9C_de(void *arg0) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = D_800CB2EC[((func_8022AB8C_S1 *)(arg0))->unk62E];
    if (((func_8022AB8C_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AAC4_S2 *)(temp_v0))->unk20;
    } else {
        var_v0 = ((func_8022AAC4_S2 *)(temp_v0))->unk24;
    }
    if (var_v0 != 0) {
        temp_v1 = *var_v0;
    } else {
        temp_v1 = -1;
    }
    if (temp_v1 != -1) {
        return D_800CB348_de[temp_v1];
    }
    return -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5988_4 = 1.0f;
const float unbake_rodata_800C598C_4 = (-1.0f);
const float unbake_rodata_800C5990_4 = 1.0f;
const float unbake_rodata_800C5994_4 = (-1.0f);
const float unbake_rodata_800C5998_4 = (-0.0116805276f);
const float unbake_rodata_800C599C_4 = 0.0308918804f;
const float unbake_rodata_800C59A0_4 = 0.0501743034f;
const float unbake_rodata_800C59A4_4 = 0.0889789909f;
const float unbake_rodata_800C59A8_4 = 0.214598805f;
const float unbake_rodata_800C59AC_4 = 1.57079625f;
const float unbake_rodata_800C59B0_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC30_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5780_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C576C_4 = 0.100000001f;
const float unbake_rodata_800C5770_4 = 0.5f;
const float unbake_rodata_800C5774_4 = 1.0f;
const float unbake_rodata_800C5778_4 = (-4.0f);
const float unbake_rodata_800C577C_4 = 0.5f;
const float unbake_rodata_800C5780_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C5740_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C5748_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C5750_8 = 0.0;
const double unbake_rodata_800C5758_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5760_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5768_8 = 1.0;
const double unbake_rodata_800C5770_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5778_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5780_8 = 1.0;
const double unbake_rodata_800C5788_8 = 1.0;
const double unbake_rodata_800C5790_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5798_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C57A0_8 = 1.4426950216293335;
const double unbake_rodata_800C57A8_8 = 0.5;
const double unbake_rodata_800C57B0_8 = 0.693359375;
const double unbake_rodata_800C57B8_8 = 0.00021219444170128557;
const double unbake_rodata_800C57C0_8 = 1.652032915444579e-05;
const double unbake_rodata_800C57C8_8 = 0.0069435997866094112;
const double unbake_rodata_800C57D0_8 = 0.00049586285604164004;
const double unbake_rodata_800C57D8_8 = 0.055553868412971497;
const double unbake_rodata_800C57E0_8 = 0.25;
const double unbake_rodata_800C57E8_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C57F0_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C57F8_8 = 1.0;
const double unbake_rodata_800C5800_8 = 1.4426950216293335;
const double unbake_rodata_800C5808_8 = 0.5;
const double unbake_rodata_800C5810_8 = 0.693359375;
const double unbake_rodata_800C5818_8 = 0.00021219444170128557;
const double unbake_rodata_800C5820_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5828_8 = 0.0069435997866094112;
const double unbake_rodata_800C5830_8 = 0.00049586285604164004;
const double unbake_rodata_800C5838_8 = 0.055553868412971497;
const double unbake_rodata_800C5840_8 = 0.25;
#endif
