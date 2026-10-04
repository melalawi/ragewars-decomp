#include "common/types.h"
#include "span_1000/code_8025E5D0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Converts an amount over a period into a whole rate: returns the constant at D_800C91F8 + 4 for an amount
 * equal to it or a period not above D_800C9200; otherwise the ratio scaled by D_800C9200 + 4 and rounded up
 * when that stays below the limit D_800D0DA0, else the ratio scaled by D_800C9208 rounded up when that
 * stays below the limit, else the amount itself. Rounding up is a static helper. */





static inline f32 round_up(f32 x, f32 floor) {
    s32 i;

    if (x <= floor) {
        return (f32)(s32)x;
    }
    i = (s32)x;
    if ((f32)i == x) {
        return (f32)i;
    }
    return (f32)(i + 1);
}






f32 func_8025F434_de(f32 amount, f32 period) {
    f32 rate;

    rate = 0.0f;
    if (amount == ((func_802077F4_S2 *)(&D_800C4108_de))->unk4) {
        return ((func_802077F4_S2 *)(&D_800C4108_de))->unk4;
    }
    if (period <= D_800C4110_de) {
        return ((func_802077F4_S2 *)(&D_800C4108_de))->unk4;
    }
    rate = round_up(amount / period * ((func_802077F4_S2 *)(&D_800C4110_de))->unk4, rate);
    if (rate < (90.0f)) {
        return rate;
    }
    rate = round_up(amount / period * D_800C4118_de, 0.0f);
    if (rate < (90.0f)) {
        return rate;
    }
    return amount;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C403C_4 = 1.0f;
const float unbake_rodata_800C4040_4 = 0.00999999978f;
const float unbake_rodata_800C4044_4 = 30.0f;
const float unbake_rodata_800C4048_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C91FC_4 = 1.0f;
const float unbake_rodata_800C9200_4 = 0.00999999978f;
const float unbake_rodata_800C9204_4 = 30.0f;
const float unbake_rodata_800C9208_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C43BC_4 = 1.0f;
const float unbake_rodata_800C43C0_4 = 0.00999999978f;
const float unbake_rodata_800C43C4_4 = 30.0f;
const float unbake_rodata_800C43C8_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C43FC_4 = 1.0f;
const float unbake_rodata_800C4400_4 = 0.00999999978f;
const float unbake_rodata_800C4404_4 = 30.0f;
const float unbake_rodata_800C4408_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C410C_4 = 1.0f;
const float unbake_rodata_800C4110_4 = 0.00999999978f;
const float unbake_rodata_800C4114_4 = 30.0f;
const float unbake_rodata_800C4118_4 = 15.0f;
#endif
