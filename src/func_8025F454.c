/* Converts an amount over a period into a whole rate: returns the constant at D_800C91F8 + 4 for an amount
 * equal to it or a period not above D_800C9200; otherwise the ratio scaled by D_800C9200 + 4 and rounded up
 * when that stays below the limit D_800D0DA0, else the ratio scaled by D_800C9208 rounded up when that
 * stays below the limit, else the amount itself. Rounding up is a static helper. */
#include "basetypes.h"

extern f32 D_800C91F8;
extern f32 D_800C9200;
extern f32 D_800C9208;
extern f32 D_800D0DA0;

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

typedef struct func_8025F454_S1 func_8025F454_S1;
typedef struct func_8025F454_S2 func_8025F454_S2;
struct func_8025F454_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8025F454_S2 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_8025F454(f32 amount, f32 period) {
    f32 rate;

    rate = 0.0f;
    if (amount == ((func_8025F454_S1 *)(&D_800C91F8))->unk4) {
        return ((func_8025F454_S1 *)(&D_800C91F8))->unk4;
    }
    if (period <= D_800C9200) {
        return ((func_8025F454_S1 *)(&D_800C91F8))->unk4;
    }
    rate = round_up(amount / period * ((func_8025F454_S2 *)(&D_800C9200))->unk4, rate);
    if (rate < D_800D0DA0) {
        return rate;
    }
    rate = round_up(amount / period * D_800C9208, 0.0f);
    if (rate < D_800D0DA0) {
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
