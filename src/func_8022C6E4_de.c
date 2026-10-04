#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_802227F4_de(void *, void *, s32);






s32 func_8022C6E4_de(void *arg0, void *arg1) {
    s16 state = ((func_8022C6D4_S1 *)(arg0))->unk650;
    s32 blocked;

    if ((state == 0x15) || (state == 0x13) || (state == 0x14)) {
        blocked = 1;
    } else {
        blocked = 0;
    }
    if (blocked == 0) {
        if ((((func_8020D1FC_S1 *)(arg1))->unk38 & 0x20000) == 0) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xD) {
            return 0;
        }
        if (((func_8022C6D4_S1 *)(arg0))->unk650 == 0xE) {
            return 0;
        }
        func_802227F4_de(arg0, arg1, 0xD);
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C75C0_8 = 1.0;
const double unbake_rodata_800C75C8_8 = 0.0;
const double unbake_rodata_800C75D0_8 = 1073741824.0;
const double unbake_rodata_800C75D8_8 = 0.0;
const double unbake_rodata_800C75E0_8 = 1.0;
const double unbake_rodata_800C75E8_8 = 0.5;
const double unbake_rodata_800C75F0_8 = 0.5;
const double unbake_rodata_800C75F8_8 = 0.0;
const double unbake_rodata_800C7600_8 = 16.0;
const double unbake_rodata_800C7608_8 = 0.69314718246459961;
const double unbake_rodata_800C7610_8 = 1073741824.0;
const double unbake_rodata_800C7618_8 = 1.0;
const double unbake_rodata_800C7620_8 = 65535.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC8F0_8 = 1.0;
const double unbake_rodata_800CC8F8_8 = 0.0;
const double unbake_rodata_800CC900_8 = 1073741824.0;
const double unbake_rodata_800CC908_8 = 0.0;
const double unbake_rodata_800CC910_8 = 1.0;
const double unbake_rodata_800CC918_8 = 0.5;
const double unbake_rodata_800CC920_8 = 0.5;
const double unbake_rodata_800CC928_8 = 0.0;
const double unbake_rodata_800CC930_8 = 16.0;
const double unbake_rodata_800CC938_8 = 0.69314718246459961;
const double unbake_rodata_800CC940_8 = 1073741824.0;
const double unbake_rodata_800CC948_8 = 1.0;
const double unbake_rodata_800CC950_8 = 65535.0;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6420_1C[] = {0x002A9144U, 0x002A9154U, 0x002A9184U, 0x002A9164U, 0x002A9174U, 0x002A9174U, 0x002A9184U};
const float unbake_rodata_800C643C_4 = 24.0f;
const float unbake_rodata_800C6440_4 = 12.0f;
const float unbake_rodata_800C6444_4 = 6.0f;
const float unbake_rodata_800C6448_4 = 16.0f;
const float unbake_rodata_800C644C_4 = 8.0f;
const float unbake_rodata_800C6450_4 = 1.0f;
const float unbake_rodata_800C6454_4 = 0.5f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C63A8_1C[] = {0x002A8F24U, 0x002A8F34U, 0x002A8F64U, 0x002A8F44U, 0x002A8F54U, 0x002A8F54U, 0x002A8F64U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C7520_24[] = {0x002B27D4U, 0x002B2918U, 0x002B2988U, 0x002B2A70U, 0x002B29F8U, 0x002B2B94U, 0x002B2AE0U, 0x002B2B6CU, 0x002B2A40U};
const float unbake_rodata_800C7544_4 = 9.99999975e-05f;
#endif
