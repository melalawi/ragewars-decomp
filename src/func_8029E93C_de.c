#include "common/types.h"
#include "span_1000/code_8029F304.h"
#include "span_C76B0/data.h"
#include "types.h"







void func_8029E93C_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    Vec3 delta;
    f32 numerator;
    f32 denominator;
    f32 fraction;

    delta.x = arg2->x - arg1->x;
    delta.y = arg2->y - arg1->y;
    delta.z = arg2->z - arg1->z;
    numerator = -((arg3 * arg1->x) + (arg4 * arg1->y) + (arg5 * arg1->z) + arg6);
    denominator = (arg3 * delta.x) + (arg4 * delta.y) + (arg5 * delta.z);
    if (!(denominator < D_800C5CAC_de) || (fraction = D_800C5CB4_de, !(D_800C5CB0_de < denominator))) {
        fraction = numerator / denominator;
    }
    arg0->x = arg1->x + (fraction * delta.x);
    arg0->y = arg1->y + (fraction * delta.y);
    arg0->z = arg1->z + (fraction * delta.z);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BDC_4 = 0.00100000005f;
const float unbake_rodata_800C5BE0_4 = (-0.00100000005f);
const float unbake_rodata_800C5BE4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE3C_4 = 0.00100000005f;
const float unbake_rodata_800CAE40_4 = (-0.00100000005f);
const float unbake_rodata_800CAE44_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F4C_4 = 0.00100000005f;
const float unbake_rodata_800C5F50_4 = (-0.00100000005f);
const float unbake_rodata_800C5F54_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5F8C_4 = 0.00100000005f;
const float unbake_rodata_800C5F90_4 = (-0.00100000005f);
const float unbake_rodata_800C5F94_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5CAC_4 = 0.00100000005f;
const float unbake_rodata_800C5CB0_4 = (-0.00100000005f);
const float unbake_rodata_800C5CB4_4 = 0.5f;
#endif
