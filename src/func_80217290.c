#include "basetypes.h"

typedef struct func_80217290_S1 func_80217290_S1;
struct func_80217290_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
};

f32 func_80217290(void *arg0, s32 arg1, volatile s32 arg2, s32 arg3) {
    f32 a1 = *(f32 *)&arg1;
    f32 a3 = *(f32 *)&arg3;
    f32 dx = a1 - ((func_80217290_S1 *)(arg0))->unk8;
    f32 dz = a3 - ((func_80217290_S1 *)(arg0))->unk10;
    return dx * dx + dz * dz;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C49D0_8 = 4294967296.0;
const double unbake_rodata_800C49D8_8 = 4294967296.0;
const float unbake_rodata_800C49E0_4 = 1.0f;
const float unbake_rodata_800C49E4_4 = (-1.0f);
const float unbake_rodata_800C49E8_4 = (-1.0f);
const float unbake_rodata_800C49EC_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9B90_8 = 4294967296.0;
const double unbake_rodata_800C9B98_8 = 4294967296.0;
const float unbake_rodata_800C9BA0_4 = 1.0f;
const float unbake_rodata_800C9BA4_4 = (-1.0f);
const float unbake_rodata_800C9BA8_4 = (-1.0f);
const float unbake_rodata_800C9BAC_4 = (-1.0f);
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C4750_A8[] = {0x00268CD4U, 0x00268CF4U, 0x00268D14U, 0x00268D34U, 0x00268D54U, 0x00268D74U, 0x00268D94U, 0x00268DB4U, 0x00268DD4U, 0x00268DF4U, 0x00268E14U, 0x00268E24U, 0x00268E44U, 0x00268E64U, 0x00268E94U, 0x00268EB4U, 0x00268ED4U, 0x00268EE4U, 0x00268F04U, 0x00268F24U, 0x00268F4CU, 0x00268F6CU, 0x00268F8CU, 0x00268FACU, 0x00268FCCU, 0x00268FECU, 0x0026900CU, 0x0026902CU, 0x00269044U, 0x00269064U, 0x00269074U, 0x002690A4U, 0x002690C4U, 0x002690E4U, 0x0026910CU, 0x00269124U, 0x00269144U, 0x00269164U, 0x00269184U, 0x002691A4U, 0x002691C4U, 0x002691E4U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4768_4 = 1.0f;
const float unbake_rodata_800C476C_4 = 2.5f;
const float unbake_rodata_800C4770_4 = 0.349999994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4A28_4 = 0.00999999978f;
const float unbake_rodata_800C4A2C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A30_4 = 0.00999999978f;
const float unbake_rodata_800C4A34_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A38_4 = 0.00999999978f;
const float unbake_rodata_800C4A3C_4 = 2.14748365e+09f;
#endif
