#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

typedef struct func_8022C894_S1 func_8022C894_S1;
struct func_8022C894_S1 {
    char pad0[0x6C0];
    f32 unk6C0;
    char pad6C0[0x6C4 - 0x6C0 - sizeof(f32)];
    f32 unk6C4;
};

void func_8022C894(void *arg0, void *arg1) {
    if ((((func_8022C894_S1 *)(arg0))->unk6C0 != 0.0f) || (((func_8022C894_S1 *)(arg0))->unk6C4 != 0.0f)) {
        func_802227D0(arg0, arg1, 3);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7798_4 = (-1.0f);
const float unbake_rodata_800C779C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCAC0_4 = (-1.0f);
const float unbake_rodata_800CCAC4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C64CC_4 = 1.0f;
const double unbake_rodata_800C64D0_8 = 4294967296.0;
const float unbake_rodata_800C64D8_4 = 1.0f;
const float unbake_rodata_800C64DC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C6460_1C[] = {0x002A9184U, 0x002A9194U, 0x002A91C4U, 0x002A91A4U, 0x002A91B4U, 0x002A91B4U, 0x002A91C4U};
const float unbake_rodata_800C647C_4 = 24.0f;
const float unbake_rodata_800C6480_4 = 12.0f;
const float unbake_rodata_800C6484_4 = 6.0f;
const float unbake_rodata_800C6488_4 = 16.0f;
const float unbake_rodata_800C648C_4 = 8.0f;
const float unbake_rodata_800C6490_4 = 1.0f;
const float unbake_rodata_800C6494_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C76A0_8 = 1.0;
const double unbake_rodata_800C76A8_8 = 0.0;
const double unbake_rodata_800C76B0_8 = 1073741824.0;
const double unbake_rodata_800C76B8_8 = 0.0;
const double unbake_rodata_800C76C0_8 = 1.0;
const double unbake_rodata_800C76C8_8 = 0.5;
const double unbake_rodata_800C76D0_8 = 0.5;
const double unbake_rodata_800C76D8_8 = 0.0;
const double unbake_rodata_800C76E0_8 = 16.0;
const double unbake_rodata_800C76E8_8 = 0.69314718246459961;
const double unbake_rodata_800C76F0_8 = 1073741824.0;
const double unbake_rodata_800C76F8_8 = 1.0;
const double unbake_rodata_800C7700_8 = 65535.0;
#endif
