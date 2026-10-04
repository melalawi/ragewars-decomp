#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "types.h"

extern void *func_8028CFA0_de(void *arg0, s32 arg1, s32 arg2);
extern s32 D_80142834;
extern s32 D_8011BDC8;








void func_8022BAD0_de(void *arg0) {
    s32 var_a2;
    void *result;

    var_a2 = ((func_8022BAC0_S1 *)(arg0))->unk5E0;
    if (D_80142834 != 0 && ((func_8020EA10_S3 *)((((func_8022BAC0_S1 *)(arg0))->unk5D8)))->unk8F == 1) {
        var_a2 = 0x13;
    }
    result = func_8028CFA0_de(&D_8011BDC8, 0xB, var_a2);
    if (result != 0) {
        ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
    } else {
        result = func_8028CFA0_de(&D_8011BDC8, 0xB, -1);
        if (result != 0) {
            ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
        } else {
            result = func_8028CFA0_de(&D_8011BDC8, -1, -1);
            ((func_8022BAC0_S1 *)(arg0))->unk18 = result;
        }
    }
    ((func_8022BAC0_S1 *)(arg0))->unk50 = ((func_8022BAC0_S3 *)(result))->unkFC;
    ((func_8022BAC0_S1 *)(arg0))->unk54 = ((func_8022BAC0_S3 *)(result))->unk100;
    ((func_8022BAC0_S1 *)(arg0))->unk58 = ((func_8022BAC0_S3 *)(result))->unk104;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C6078_1C[] = {0x002A8ED8U, 0x002A8EE8U, 0x002A8F18U, 0x002A8EF8U, 0x002A8F08U, 0x002A8F08U, 0x002A8F18U};
const float unbake_rodata_800C6094_4 = 24.0f;
const float unbake_rodata_800C6098_4 = 12.0f;
const float unbake_rodata_800C609C_4 = 6.0f;
const float unbake_rodata_800C60A0_4 = 16.0f;
const float unbake_rodata_800C60A4_4 = 8.0f;
const float unbake_rodata_800C60A8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB310_1C[] = {0x002AA024U, 0x002AA034U, 0x002AA064U, 0x002AA044U, 0x002AA054U, 0x002AA054U, 0x002AA064U};
const float unbake_rodata_800CB32C_4 = 24.0f;
const float unbake_rodata_800CB330_4 = 12.0f;
const float unbake_rodata_800CB334_4 = 6.0f;
const float unbake_rodata_800CB338_4 = 16.0f;
const float unbake_rodata_800CB33C_4 = 8.0f;
const float unbake_rodata_800CB340_4 = 1.0f;
const float unbake_rodata_800CB344_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6104_4 = 255.0f;
const float unbake_rodata_800C6108_4 = 255.0f;
const float unbake_rodata_800C610C_4 = 255.0f;
const float unbake_rodata_800C6110_4 = 255.0f;
const float unbake_rodata_800C6114_4 = 255.0f;
const float unbake_rodata_800C6118_4 = 255.0f;
const float unbake_rodata_800C611C_4 = 255.0f;
const float unbake_rodata_800C6120_4 = 255.0f;
const float unbake_rodata_800C6124_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C60D8_4 = 3.125f;
const float unbake_rodata_800C60DC_4 = 32.0f;
const float unbake_rodata_800C60E0_4 = 1.0f;
const float unbake_rodata_800C60E4_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C6088_1C[] = {0x002A8DD4U, 0x002A8DE4U, 0x002A8E14U, 0x002A8DF4U, 0x002A8E04U, 0x002A8E04U, 0x002A8E14U};
#endif
