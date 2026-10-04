#include "common/types.h"
#include "span_1000/code_80258760.h"
#include "types.h"



extern f32 D_800C3EE0_de[];
extern s32 func_80257DD4_de(void *, s32, Vec3, s32, s32);




void func_80258A7C_de(void *arg0, s32 arg1, Vec3 arg2, s32 arg3, s32 arg4, f32 arg5) {
    ((func_80258A9C_S1 *)(arg0))->unk2BBC = arg5;
    func_80257DD4_de(arg0, arg1, arg2, arg3, arg4);
    ((func_80258A9C_S1 *)(arg0))->unk2BBC = D_800C3EE0_de[1];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E14_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FD4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4194_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C41D4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3EE4_4 = 1.0f;
#endif
