#include "basetypes.h"

extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);

typedef struct func_80207B5C_S1 func_80207B5C_S1;
typedef struct func_80207B5C_S2 func_80207B5C_S2;
struct func_80207B5C_S1 {
    char pad0[0x18];
    char* unk18;
};
struct func_80207B5C_S2 {
    char pad0[0x24];
    s32 unk24;
};

void func_80207B5C(void *arg0, u32 *arg1) {
    void *temp_s0;

    temp_s0 = ((func_80207B5C_S1 *)(arg0))->unk18 + 0x14;
    func_80278DE8(arg0, 0x10000, arg0);
    if (!(((func_80207B5C_S2 *)(temp_s0))->unk24 & 0x40)) {
        *arg1 &= 0xFFFEFFFF;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E20_4 = 1.0f;
const float unbake_rodata_800C2E24_4 = 1.0f;
const float unbake_rodata_800C2E28_4 = 1.79049289f;
const float unbake_rodata_800C2E2C_4 = 1.0f;
const float unbake_rodata_800C2E30_4 = 1.79049289f;
const float unbake_rodata_800C2E34_4 = 1.0f;
const float unbake_rodata_800C2E38_4 = 1.79049289f;
const float unbake_rodata_800C2E3C_4 = 1.79049289f;
const float unbake_rodata_800C2E40_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7DDC_4 = 285.0f;
const float unbake_rodata_800C7DE0_4 = 0.0666666701f;
const float unbake_rodata_800C7DE4_4 = 1.0f;
const float unbake_rodata_800C7DE8_4 = 1.0f;
const float unbake_rodata_800C7DEC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EB4_4 = 150.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2E54_4 = 40.9599991f;
const float unbake_rodata_800C2E58_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2CEC_4 = 285.0f;
const float unbake_rodata_800C2CF0_4 = 0.0666666701f;
const float unbake_rodata_800C2CF4_4 = 1.0f;
const float unbake_rodata_800C2CF8_4 = 1.0f;
const float unbake_rodata_800C2CFC_4 = 1.0f;
#endif
