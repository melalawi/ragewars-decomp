#include "common/types.h"
#include "span_1000/code_80206DD4.h"
#include "types.h"
typedef struct Owner Owner;

extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);






void func_80207D34_de(void *arg0, u32 *arg1) {
    void *temp_s0;

    temp_s0 = ((Owner *)(arg0))->track + 0x14;
    func_80278D78_de(arg0, 0x20000, arg0);
    if (!(((func_80207B5C_S2 *)(temp_s0))->unk24 & 0x80)) {
        *arg1 &= 0xFFFDFFFF;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2EC8_4 = 1.0f;
const float unbake_rodata_800C2ECC_4 = 1.0f;
const float unbake_rodata_800C2ED0_4 = 1.0f;
const float unbake_rodata_800C2ED4_4 = 0.5f;
const float unbake_rodata_800C2ED8_4 = 2.0f;
const float unbake_rodata_800C2EDC_4 = 0.0500000007f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C7F88_48[] = {0x002301BCU, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x00230134U, 0x002301C8U, 0x00230104U, 0x00230198U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x002301C8U, 0x0023011CU};
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EFC_4 = 75.0f;
const float unbake_rodata_800C2F00_4 = 15.0f;
const float unbake_rodata_800C2F04_4 = 75.0f;
const float unbake_rodata_800C2F08_4 = 7.5f;
const float unbake_rodata_800C2F0C_4 = 2.14748365e+09f;
const float unbake_rodata_800C2F10_4 = 0.0666666701f;
const float unbake_rodata_800C2F14_4 = 1.5f;
const float unbake_rodata_800C2F18_4 = 15.0f;
const float unbake_rodata_800C2F1C_4 = 2.14748365e+09f;
const float unbake_rodata_800C2F20_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2F08_4 = 17.0f;
const float unbake_rodata_800C2F0C_4 = 255.0f;
const float unbake_rodata_800C2F10_4 = 8.53333378f;
const float unbake_rodata_800C2F14_4 = 17.0f;
const float unbake_rodata_800C2F18_4 = 255.0f;
const float unbake_rodata_800C2F1C_4 = 8.53333378f;
const float unbake_rodata_800C2F20_4 = 128.0f;
const float unbake_rodata_800C2F24_4 = 0.425000012f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C2E98_48[] = {0x002301CCU, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x00230144U, 0x002301D8U, 0x00230114U, 0x002301A8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x002301D8U, 0x0023012CU};
#endif
