#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "span_1000/types.h"
#include "types.h"





extern void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);
extern void func_8027207C_de(f32 *arg0);
extern f32 func_802B72B0_de(f32);






void func_802165F8_de(void *arg0, void *arg1, Result_func_802165F8_de *result) {
    func_80271F68_de(&result->first, &((func_802165F8_S1 *)(arg0))->unk8,
                  &((func_802165F8_S2 *)(arg1))->unk48);
    result->first_normalized = result->first;
    func_8027207C_de(&result->first_normalized.x);
    result->first_length = func_802B72B0_de(
        result->first.x * result->first.x +
        result->first.y * result->first.y +
        result->first.z * result->first.z);
    result->flat.x = result->first.x;
    result->flat.y = 0.0f;
    result->flat.z = result->first.z;
    result->flat_normalized = result->flat;
    func_8027207C_de(&result->flat_normalized.x);
    result->flat_length = func_802B72B0_de(
        result->flat.x * result->flat.x +
        result->flat.y * result->flat.y +
        result->flat.z * result->flat.z);
    result->height = ((func_802165F8_S1 *)(arg0))->unk6C -
                     ((func_802165F8_S2 *)(arg1))->unk60;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C4518_1C[] = {0x0026A240U, 0x0026A240U, 0x0026A248U, 0x0026A258U, 0x0026A258U, 0x0026A260U, 0x0026A250U};
const float unbake_rodata_800C4534_4 = 2.14748365e+09f;
const float unbake_rodata_800C4538_4 = 2.14748365e+09f;
const float unbake_rodata_800C453C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4540_4 = 2.14748365e+09f;
const float unbake_rodata_800C4544_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4548_1C[] = {0x0026A548U, 0x0026A548U, 0x0026A550U, 0x0026A560U, 0x0026A560U, 0x0026A568U, 0x0026A558U};
const float unbake_rodata_800C4564_4 = 2.14748365e+09f;
const float unbake_rodata_800C4568_4 = 2.14748365e+09f;
const float unbake_rodata_800C456C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4570_4 = 2.14748365e+09f;
const float unbake_rodata_800C4574_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4578_1C[] = {0x0026A934U, 0x0026A934U, 0x0026A93CU, 0x0026A94CU, 0x0026A94CU, 0x0026A954U, 0x0026A944U};
const float unbake_rodata_800C4594_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C96D8_1C[] = {0x0026A2C0U, 0x0026A2C0U, 0x0026A2C8U, 0x0026A2D8U, 0x0026A2D8U, 0x0026A2E0U, 0x0026A2D0U};
const float unbake_rodata_800C96F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C96F8_4 = 2.14748365e+09f;
const float unbake_rodata_800C96FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C9700_4 = 2.14748365e+09f;
const float unbake_rodata_800C9704_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C9708_1C[] = {0x0026A5C8U, 0x0026A5C8U, 0x0026A5D0U, 0x0026A5E0U, 0x0026A5E0U, 0x0026A5E8U, 0x0026A5D8U};
const float unbake_rodata_800C9724_4 = 2.14748365e+09f;
const float unbake_rodata_800C9728_4 = 2.14748365e+09f;
const float unbake_rodata_800C972C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9730_4 = 2.14748365e+09f;
const float unbake_rodata_800C9734_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C9738_1C[] = {0x0026A9B4U, 0x0026A9B4U, 0x0026A9BCU, 0x0026A9CCU, 0x0026A9CCU, 0x0026A9D4U, 0x0026A9C4U};
const float unbake_rodata_800C9754_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4478_8 = 4294967296.0;
const double unbake_rodata_800C4480_8 = 4294967296.0;
const double unbake_rodata_800C4488_8 = 4294967296.0;
const double unbake_rodata_800C4490_8 = 4294967296.0;
const double unbake_rodata_800C4498_8 = 4294967296.0;
const float unbake_rodata_800C44A0_4 = 9.58767268e-05f;
const float unbake_rodata_800C44A4_4 = 9.58767268e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4468_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4498_4 = 1.0f;
#endif
