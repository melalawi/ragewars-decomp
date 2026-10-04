#include "span_1000/code_8022D7A0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Eases a player's crouch depth at 0x718: the target is D_800C7ED0[0] while input bits 0xC0000 are
   held or crouching is forced at 0x71C (which also enters state 4 unless already in it) and zero
   otherwise; the depth moves a quarter of the way through func_80274870_de, steps smaller than
   D_800C7ED0[1] downward or D_800C7ED8[0] upward are dropped, and bit 0x80 of the flags is set while
   D_800C7ED8[1] less the depth lies within D_800C7EE0 to (&D_800C7EE0)[1], cleared otherwise. */

extern f32 D_800C2DE0_de[];
extern f32 D_800C2DE8_de[];

extern s32 func_802227F4_de(void *, void *, s32);
extern void func_80274870_de(f32 *, f32, f32);






void func_8022DC44_de(void *arg0, void *arg1, s32 unused, s32 *flags) {
    s32 held;
    s32 crouch;
    f32 target;
    f32 depth;
    f32 step;
    f32 clearance;
    f32 moved;
    f32 lo;

    held = ((func_8020D1FC_S1 *)(arg1))->unk38 & 0xC0000;
    crouch = held != 0;
    if (((func_8022DC34_S2 *)(arg0))->unk71C != 0) {
        crouch = 1;
        if (((func_8022DC34_S2 *)(arg0))->unk650 != 4) {
            func_802227F4_de(arg0, arg1, 4);
        }
    }
    target = 0.0f;
    if (crouch) {
        target = D_800C2DE0_de[0];
    }
    depth = ((func_8022DC34_S2 *)(arg0))->unk718;
    func_80274870_de(&depth, target, 0.25f);
    do {
        step = depth - ((func_8022DC34_S2 *)(arg0))->unk718;
        if (step < 0.0f) {
            if (-step < D_800C2DE0_de[1]) {
                goto still;
            }
        } else if (step < D_800C2DE8_de[0]) {
        still:
            step = 0.0f;
        }
        moved = ((func_8022DC34_S2 *)(arg0))->unk718 + step;
        clearance = D_800C2DE8_de[1] - moved;
        lo = D_800C2DF0_de;
    } while (0);
    ((func_8022DC34_S2 *)(arg0))->unk718 = moved;
    if (lo <= clearance && clearance <= (&D_800C2DF0_de)[1]) {
        *flags |= 0x80;
    } else {
        *flags &= ~0x80;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D10_4 = 40.9599991f;
const float unbake_rodata_800C2D14_4 = 0.00100000005f;
const float unbake_rodata_800C2D18_4 = 0.00100000005f;
const float unbake_rodata_800C2D1C_4 = 40.9599991f;
const float unbake_rodata_800C2D20_4 = (-10.2399998f);
const float unbake_rodata_800C2D24_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7ED0_4 = 40.9599991f;
const float unbake_rodata_800C7ED4_4 = 0.00100000005f;
const float unbake_rodata_800C7ED8_4 = 0.00100000005f;
const float unbake_rodata_800C7EDC_4 = 40.9599991f;
const float unbake_rodata_800C7EE0_4 = (-10.2399998f);
const float unbake_rodata_800C7EE4_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3084_4 = 40.9599991f;
const float unbake_rodata_800C3088_4 = 0.00100000005f;
const float unbake_rodata_800C308C_4 = 0.00100000005f;
const float unbake_rodata_800C3090_4 = 40.9599991f;
const float unbake_rodata_800C3094_4 = (-10.2399998f);
const float unbake_rodata_800C3098_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30C4_4 = 40.9599991f;
const float unbake_rodata_800C30C8_4 = 0.00100000005f;
const float unbake_rodata_800C30CC_4 = 0.00100000005f;
const float unbake_rodata_800C30D0_4 = 40.9599991f;
const float unbake_rodata_800C30D4_4 = (-10.2399998f);
const float unbake_rodata_800C30D8_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DE0_4 = 40.9599991f;
const float unbake_rodata_800C2DE4_4 = 0.00100000005f;
const float unbake_rodata_800C2DE8_4 = 0.00100000005f;
const float unbake_rodata_800C2DEC_4 = 40.9599991f;
const float unbake_rodata_800C2DF0_4 = (-10.2399998f);
const float unbake_rodata_800C2DF4_4 = 10.2399998f;
#endif
