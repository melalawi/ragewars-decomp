#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "types.h"





s32 func_8022C460_de(void *arg0) {
    s16 temp_v1;
    temp_v1 = (((struct func_8022C6D4_S1 *) ((s8 *) arg0))->unk650);
    if ((temp_v1 == 0x15) || (temp_v1 == 0x13) || (temp_v1 == 0x14)) {
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C7380_60[] = {0x002B04DCU, 0x002B095CU, 0x002B06E8U, 0x002B095CU, 0x002B095CU, 0x002B050CU, 0x002B0554U, 0x002B06FCU, 0x002B0974U, 0x002B04ECU, 0x002B0838U, 0x002B0890U, 0x002B08ACU, 0x002B08C8U, 0x002B0920U, 0x002B0710U, 0x002B0730U, 0x002B07A0U, 0x002B0974U, 0x002B0974U, 0x002B0974U, 0x002B0974U, 0x002B05B0U, 0x002B0664U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC6B0_60[] = {0x002B567CU, 0x002B5AFCU, 0x002B5888U, 0x002B5AFCU, 0x002B5AFCU, 0x002B56ACU, 0x002B56F4U, 0x002B589CU, 0x002B5B14U, 0x002B568CU, 0x002B59D8U, 0x002B5A30U, 0x002B5A4CU, 0x002B5A68U, 0x002B5AC0U, 0x002B58B0U, 0x002B58D0U, 0x002B5940U, 0x002B5B14U, 0x002B5B14U, 0x002B5B14U, 0x002B5B14U, 0x002B5750U, 0x002B5804U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6328_1C[] = {0x002A8EE4U, 0x002A8EF4U, 0x002A8F24U, 0x002A8F04U, 0x002A8F14U, 0x002A8F14U, 0x002A8F24U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C62B8_1C[] = {0x002A8CB4U, 0x002A8DE0U, 0x002A8E18U, 0x002A8E50U, 0x002A8E88U, 0x002A8EBCU, 0x002A8EF0U};
#elif defined(VERSION_DE)
const double unbake_rodata_800C6248_8 = 4294967296.0;
const float unbake_rodata_800C6250_4 = 1.0f;
const float unbake_rodata_800C6254_4 = 1.0f;
#endif
