#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "span_1000/types.h"
#include "types.h"



extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);




/** Subtract obj->y from arg2 in-place via func_80271F68_de, then return the squared length of (arg1, arg2', arg3). */
f32 func_80217224_de(void *arg0, Vec3 v) {
    f32 temp_f1;

    func_80271F68_de(&v, &v, &((Actor_func_80214310_de *)(arg0))->position);
    temp_f1 = v.y - ((Actor_func_80214310_de *)(arg0))->eye;
    v.y = temp_f1;
    return (v.x * v.x) + (temp_f1 * temp_f1) + (v.z * v.z);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4990_4 = 2.38418579e-05f;
const float unbake_rodata_800C4994_4 = 9.31322575e-09f;
const float unbake_rodata_800C4998_4 = (-1.0f);
const float unbake_rodata_800C499C_4 = 9.31322575e-09f;
const float unbake_rodata_800C49A0_4 = 0.00999999978f;
const float unbake_rodata_800C49A4_4 = 0.00999999978f;
const float unbake_rodata_800C49A8_4 = 0.00999999978f;
const float unbake_rodata_800C49AC_4 = 0.00999999978f;
const float unbake_rodata_800C49B0_4 = 0.00999999978f;
const float unbake_rodata_800C49B4_4 = 0.00999999978f;
const float unbake_rodata_800C49B8_4 = 2.38418579e-05f;
const float unbake_rodata_800C49BC_4 = 4.65661287e-10f;
const double unbake_rodata_800C49C0_8 = 4294967296.0;
const float unbake_rodata_800C49C8_4 = 2.37487257e-06f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9B50_4 = 2.38418579e-05f;
const float unbake_rodata_800C9B54_4 = 9.31322575e-09f;
const float unbake_rodata_800C9B58_4 = (-1.0f);
const float unbake_rodata_800C9B5C_4 = 9.31322575e-09f;
const float unbake_rodata_800C9B60_4 = 0.00999999978f;
const float unbake_rodata_800C9B64_4 = 0.00999999978f;
const float unbake_rodata_800C9B68_4 = 0.00999999978f;
const float unbake_rodata_800C9B6C_4 = 0.00999999978f;
const float unbake_rodata_800C9B70_4 = 0.00999999978f;
const float unbake_rodata_800C9B74_4 = 0.00999999978f;
const float unbake_rodata_800C9B78_4 = 2.38418579e-05f;
const float unbake_rodata_800C9B7C_4 = 4.65661287e-10f;
const double unbake_rodata_800C9B80_8 = 4294967296.0;
const float unbake_rodata_800C9B88_4 = 2.37487257e-06f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4748_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C46D0_4 = 0.5f;
const float unbake_rodata_800C46D4_4 = 0.0399999991f;
const float unbake_rodata_800C46D8_4 = 1.0f;
const float unbake_rodata_800C46DC_4 = 1.0f;
const float unbake_rodata_800C46E0_4 = 1.0f;
const float unbake_rodata_800C46E4_4 = 1.0f;
const float unbake_rodata_800C46E8_4 = 0.0399999991f;
const float unbake_rodata_800C46EC_4 = 102.399994f;
const float unbake_rodata_800C46F0_4 = 0.666666985f;
const float unbake_rodata_800C46F4_4 = 0.25f;
const float unbake_rodata_800C46F8_4 = 75.0f;
const float unbake_rodata_800C46FC_4 = 11.0f;
const float unbake_rodata_800C4700_4 = 0.666666985f;
const float unbake_rodata_800C4704_4 = 0.25f;
const float unbake_rodata_800C4708_4 = 75.0f;
const float unbake_rodata_800C470C_4 = 11.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4A10_4 = 0.0117647061f;
const float unbake_rodata_800C4A14_4 = 0.0117647061f;
const float unbake_rodata_800C4A18_4 = 0.0117647061f;
const float unbake_rodata_800C4A1C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A20_4 = 2.14748365e+09f;
const float unbake_rodata_800C4A24_4 = 2.14748365e+09f;
#endif
