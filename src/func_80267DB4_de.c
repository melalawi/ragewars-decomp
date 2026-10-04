#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "types.h"





extern s32 func_802394BC_de(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, Triple arg6);
extern char D_80140FC8;
extern f32 D_800C4450_de[2];

void func_80267DB4_de(s32 arg0, s32 arg1, s32 arg2, Triple t, Vec4s v) {
    func_802394BC_de(&D_80140FC8, (f32) v.x, (f32) v.y, (f32) v.z, (f32) v.w * D_800C4450_de[1], 1, t);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4384_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9544_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4704_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4744_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4454_4 = 10.2399998f;
#endif
