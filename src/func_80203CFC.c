#include "basetypes.h"

extern void func_80202CA0(s32, f32 *);
extern void func_802742B4(void *, void *);

typedef struct func_80203CFC_S1 func_80203CFC_S1;
struct func_80203CFC_S1 {
    char pad0[0x130];
    f32 unk130;
    char pad130[0x134 - 0x130 - sizeof(f32)];
    f32 unk134;
    char pad134[0x138 - 0x134 - sizeof(f32)];
    f32 unk138;
};

void func_80203CFC(void *unused0, void *arg1, s32 arg2) {
    s32 sp10[4];
    f32 sp20[3];

    sp20[0] = ((func_80203CFC_S1 *)(arg1))->unk130;
    sp20[1] = ((func_80203CFC_S1 *)(arg1))->unk134;
    sp20[2] = ((func_80203CFC_S1 *)(arg1))->unk138;
    func_80202CA0(sp10, sp20);
    func_802742B4(sp10, arg2);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1AE0_4 = 100.0f;
const float unbake_rodata_800C1AE4_4 = 0.333333343f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6C78_14[] = {0x0020776CU, 0x00207764U, 0x00207764U, 0x0020775CU, 0x002077BCU};
#elif defined(VERSION_EU)
const float unbake_rodata_800C1DC8_4 = 3.0f;
const float unbake_rodata_800C1DCC_4 = 10.2399998f;
const float unbake_rodata_800C1DD0_4 = 1.0f;
const float unbake_rodata_800C1DD4_4 = 1.0f;
const float unbake_rodata_800C1DD8_4 = 1.0f;
const float unbake_rodata_800C1DDC_4 = 3.14159274f;
const float unbake_rodata_800C1DE0_4 = 0.5f;
const float unbake_rodata_800C1DE4_4 = 0.300000012f;
const float unbake_rodata_800C1DE8_4 = 15.0f;
const float unbake_rodata_800C1DEC_4 = 1.0f;
const float unbake_rodata_800C1DF0_4 = 3.14159274f;
const float unbake_rodata_800C1DF4_4 = 0.5f;
const float unbake_rodata_800C1DF8_4 = 2.67035389f;
const float unbake_rodata_800C1DFC_4 = 0.5f;
const float unbake_rodata_800C1E00_4 = 1.0f;
const float unbake_rodata_800C1E04_4 = 0.0174532942f;
const float unbake_rodata_800C1E08_4 = 0.0174532942f;
const float unbake_rodata_800C1E0C_4 = 0.100000001f;
const float unbake_rodata_800C1E10_4 = 0.0174532942f;
const float unbake_rodata_800C1E14_4 = 0.0174532942f;
const float unbake_rodata_800C1E18_4 = 0.100000001f;
const float unbake_rodata_800C1E1C_4 = 0.0174532942f;
const float unbake_rodata_800C1E20_4 = 0.0174532942f;
const float unbake_rodata_800C1E24_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1E08_4 = 3.0f;
const float unbake_rodata_800C1E0C_4 = 10.2399998f;
const float unbake_rodata_800C1E10_4 = 1.0f;
const float unbake_rodata_800C1E14_4 = 1.0f;
const float unbake_rodata_800C1E18_4 = 1.0f;
const float unbake_rodata_800C1E1C_4 = 3.14159274f;
const float unbake_rodata_800C1E20_4 = 0.5f;
const float unbake_rodata_800C1E24_4 = 0.300000012f;
const float unbake_rodata_800C1E28_4 = 15.0f;
const float unbake_rodata_800C1E2C_4 = 1.0f;
const float unbake_rodata_800C1E30_4 = 3.14159274f;
const float unbake_rodata_800C1E34_4 = 0.5f;
const float unbake_rodata_800C1E38_4 = 2.67035389f;
const float unbake_rodata_800C1E3C_4 = 0.5f;
const float unbake_rodata_800C1E40_4 = 1.0f;
const float unbake_rodata_800C1E44_4 = 0.0174532942f;
const float unbake_rodata_800C1E48_4 = 0.0174532942f;
const float unbake_rodata_800C1E4C_4 = 0.100000001f;
const float unbake_rodata_800C1E50_4 = 0.0174532942f;
const float unbake_rodata_800C1E54_4 = 0.0174532942f;
const float unbake_rodata_800C1E58_4 = 0.100000001f;
const float unbake_rodata_800C1E5C_4 = 0.0174532942f;
const float unbake_rodata_800C1E60_4 = 0.0174532942f;
const float unbake_rodata_800C1E64_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1B28_4 = 3.0f;
const float unbake_rodata_800C1B2C_4 = 10.2399998f;
const float unbake_rodata_800C1B30_4 = 1.0f;
const float unbake_rodata_800C1B34_4 = 1.0f;
const float unbake_rodata_800C1B38_4 = 1.0f;
const float unbake_rodata_800C1B3C_4 = 3.14159274f;
const float unbake_rodata_800C1B40_4 = 0.5f;
const float unbake_rodata_800C1B44_4 = 0.300000012f;
const float unbake_rodata_800C1B48_4 = 15.0f;
const float unbake_rodata_800C1B4C_4 = 1.0f;
const float unbake_rodata_800C1B50_4 = 3.14159274f;
const float unbake_rodata_800C1B54_4 = 0.5f;
const float unbake_rodata_800C1B58_4 = 2.67035389f;
const float unbake_rodata_800C1B5C_4 = 0.5f;
const float unbake_rodata_800C1B60_4 = 1.0f;
const float unbake_rodata_800C1B64_4 = 0.0174532942f;
const float unbake_rodata_800C1B68_4 = 0.0174532942f;
const float unbake_rodata_800C1B6C_4 = 0.100000001f;
const float unbake_rodata_800C1B70_4 = 0.0174532942f;
const float unbake_rodata_800C1B74_4 = 0.0174532942f;
const float unbake_rodata_800C1B78_4 = 0.100000001f;
const float unbake_rodata_800C1B7C_4 = 0.0174532942f;
const float unbake_rodata_800C1B80_4 = 0.0174532942f;
const float unbake_rodata_800C1B84_4 = 0.100000001f;
#endif
