#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

extern f32 D_800C8830;
extern void func_80271FD8(f32 *, void *, void *);

s32 func_802412C0(void *arg0, void *arg1, void *arg2, f32 *arg3) {
    f32 sp10[3];
    f32 sp20[3];
    f32 temp_f20;
    f32 var_f0;
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return 0;
    }
    func_80271FD8(sp10, arg2, arg1);
    temp_f20 = (M2C_FIELD(arg0, f32 *, 0x48) * sp10[0]) + (M2C_FIELD(arg0, f32 *, 0x4C) * sp10[1]) + (M2C_FIELD(arg0, f32 *, 0x50) * sp10[2]);
    var_v0 = 0;
    if (!(temp_f20 >= (f32)0)) {
        func_80271FD8(sp20, arg1, arg0 + 0x18);
        var_v0 = 1;
        var_f0 = -((M2C_FIELD(arg0, f32 *, 0x48) * sp20[0]) + (M2C_FIELD(arg0, f32 *, 0x4C) * sp20[1]) + (M2C_FIELD(arg0, f32 *, 0x50) * sp20[2])) / temp_f20;
    } else {
        var_f0 = D_800C8830;
    }
    *arg3 = var_f0;
    return var_v0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3670_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8830_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C39F0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A30_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3740_4 = 1.0f;
#endif
