#include "basetypes.h"

extern f32 D_800C6DB0;
extern f32 D_800C6DB4;
extern f32 D_800CDA30;
extern f32 D_800CDA34;
extern f32 D_800CDA38;
extern f32 func_80274B00(f32 arg0, f32 arg1);

f32 func_80209DAC(void *arg0) {
    f32 temp_f20;
    f32 var_f14;
    u8 state;

    state = *(u8 *)((char *)*(void **)((char *)*(void **)arg0 + 0x5D8) + 0x93);
    switch (state) {
    default:
        *(s8 *)((char *)*(void **)((char *)*(void **)arg0 + 0x5D8) + 0x93) = 0;
    case 0:
        var_f14 = D_800CDA30;
        break;
    case 1:
        var_f14 = D_800CDA34;
        break;
    case 2:
        var_f14 = D_800CDA38;
        break;
    }
    temp_f20 = *(f32 *)((char *)arg0 + 0x244);
    if (temp_f20 < func_80274B00(-var_f14, var_f14)) {
        temp_f20 += D_800C6DB0;
    } else {
        temp_f20 -= D_800C6DB4;
    }
    *(f32 *)((char *)arg0 + 0x244) = temp_f20;
    return temp_f20;
}
