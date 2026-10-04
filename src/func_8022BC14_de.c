#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_8028B274_de(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern s32 D_80140FF8;
extern s32 D_8014288C;
extern void *D_800CB2EC[];
extern s32 D_8011BDC8;








void func_8022BC14_de(void *arg0) {
    s32 var_t0;

    if (((func_8022BC04_S1 *)(arg0))->unk1450 != 0) {
        if (D_8014288C == 0) {
            var_t0 = 0x17;
            goto after;
        }
    }
    var_t0 = (D_80140FF8 == 1) ? 0 : 0x17;
after:
    func_8028B274_de(&D_8011BDC8, &((func_8022BC04_S1 *)(arg0))->unk2E8,
        ((func_8022BC04_S2 *)(D_800CB2EC[((func_8022BC04_S1 *)(arg0))->unk62E]))->unk4 + var_t0,
        ((func_8022BC04_S3 *)(((func_8022BC04_S1 *)(arg0))->unk484))->unk10);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C60F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CB358_8 = 4294967296.0;
const float unbake_rodata_800CB360_4 = 1.0f;
const float unbake_rodata_800CB364_4 = 1.0f;
const float unbake_rodata_800CB368_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6170_4 = 255.0f;
const float unbake_rodata_800C6174_4 = 0.100000001f;
const float unbake_rodata_800C6178_4 = 0.25f;
const float unbake_rodata_800C617C_4 = 0.75f;
const float unbake_rodata_800C6180_4 = 0.00156250002f;
const float unbake_rodata_800C6184_4 = 0.5f;
const float unbake_rodata_800C6188_4 = 0.00208333344f;
const float unbake_rodata_800C618C_4 = 2.14748365e+09f;
const float unbake_rodata_800C6190_4 = 0.5f;
const float unbake_rodata_800C6194_4 = 2.14748365e+09f;
const float unbake_rodata_800C6198_4 = 0.00312500005f;
const float unbake_rodata_800C619C_4 = 0.00416666688f;
const float unbake_rodata_800C61A0_4 = 0.25f;
const float unbake_rodata_800C61A4_4 = (-0.75f);
const float unbake_rodata_800C61A8_4 = (-0.5f);
const float unbake_rodata_800C61AC_4 = 0.00390625f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C60F0_18[] = {0x002A42D4U, 0x002A4300U, 0x002A431CU, 0x002A4328U, 0x002A4394U, 0x002A43D4U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C60C8_1C[] = {0x002A8DD4U, 0x002A8DE4U, 0x002A8E14U, 0x002A8DF4U, 0x002A8E04U, 0x002A8E04U, 0x002A8E14U};
#endif
