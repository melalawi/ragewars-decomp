#include "span_1000/code_802406DC.h"
#include "span_C76B0/data.h"
#include "types.h"
#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))



extern void func_80271F68_de(f32 *, void *, void *);

s32 func_80271FC8_de(void *, u32, void *, void *);

s32 func_802413C8_de(void *arg0, void *arg1, void *arg2, void *arg3) {
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30;
    f32 temp_f20;
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        var_v0 = 0;
    } else {
        func_80271F68_de(sp10, arg2, arg1);
        temp_f20 = (M2C_FIELD(arg0, f32 *, 0x48) * sp10[0]) + (M2C_FIELD(arg0, f32 *, 0x4C) * sp10[1]) + (M2C_FIELD(arg0, f32 *, 0x50) * sp10[2]);
        var_v0 = 0;
        if (temp_f20 >= (f32)0) {
            sp30 = D_800C3744_de;
        } else {
            func_80271F68_de(sp20, arg1, arg0 + 0x18);
            var_v0 = 1;
            sp30 = -((M2C_FIELD(arg0, f32 *, 0x48) * sp20[0]) + (M2C_FIELD(arg0, f32 *, 0x4C) * sp20[1]) + (M2C_FIELD(arg0, f32 *, 0x50) * sp20[2])) / temp_f20;
        }
    }
    if (var_v0 != 0) {
        func_80271FC8_de(arg3, *(u32 *)&sp30, arg1, arg2);
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3674_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8834_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C39F4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A34_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3744_4 = 1.0f;
#endif
