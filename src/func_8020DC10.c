#include "basetypes.h"

extern void func_8020DCA0(void);
extern void func_8020DC60(void *arg0);

typedef struct func_8020DC10_S1 func_8020DC10_S1;
struct func_8020DC10_S1 {
    char pad0[0x64];
    s32 unk64;
    char pad64[0x21C - 0x64 - sizeof(s32)];
    s32 unk21C;
};

s32 func_8020DC10(void *arg0) {
    if (((func_8020DC10_S1 *)(arg0))->unk64 != 0) {
        if ((u32) (((func_8020DC10_S1 *)(arg0))->unk21C - 3) < 3U) {
            func_8020DCA0();
            return 1;
        }
        func_8020DC60(arg0);
        return 1;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C38B4_4 = 1.0f;
const float unbake_rodata_800C38B8_4 = 0.5f;
const float unbake_rodata_800C38BC_4 = 0.5f;
const float unbake_rodata_800C38C0_4 = 0.5f;
const float unbake_rodata_800C38C4_4 = 0.5f;
const float unbake_rodata_800C38C8_4 = 0.699999988f;
const float unbake_rodata_800C38CC_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C8A24_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3900_20[] = {0x0023D744U, 0x0023D838U, 0x0023D784U, 0x0023D8CCU, 0x0023D940U, 0x0023DA84U, 0x0023D6A0U, 0x0023D744U};
const float unbake_rodata_800C3920_4 = 1.0f;
const float unbake_rodata_800C3924_4 = 1.0f;
const float unbake_rodata_800C3928_4 = 1.0f;
const float unbake_rodata_800C392C_4 = 1.0f;
const float unbake_rodata_800C3930_4 = 1.0f;
const float unbake_rodata_800C3934_4 = 1.0f;
const float unbake_rodata_800C3938_4 = 1.0f;
const float unbake_rodata_800C393C_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3910_4 = 0.0666666701f;
const float unbake_rodata_800C3914_4 = 15.0f;
const float unbake_rodata_800C3918_4 = 1.0f;
const float unbake_rodata_800C391C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37F0_4 = 0.00787401572f;
const float unbake_rodata_800C37F4_4 = 3.0f;
const float unbake_rodata_800C37F8_4 = 1.0f;
const float unbake_rodata_800C37FC_4 = 0.00872664712f;
const float unbake_rodata_800C3800_4 = 6.28318548f;
const float unbake_rodata_800C3804_4 = 6.28318548f;
const float unbake_rodata_800C3808_4 = 0.0174532942f;
const float unbake_rodata_800C380C_4 = 0.0174532942f;
const float unbake_rodata_800C3810_4 = 1.0f;
const float unbake_rodata_800C3814_4 = 0.200000003f;
const float unbake_rodata_800C3818_4 = 10.2399998f;
const float unbake_rodata_800C381C_4 = 4.0f;
const float unbake_rodata_800C3820_4 = 0.200000003f;
#endif
