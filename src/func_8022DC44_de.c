#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022D944.h"
#include "types.h"
/* Eases a player's crouch depth at 0x718: the target is D_800C7ED0[0] while input bits 0xC0000 are
   held or crouching is forced at 0x71C (which also enters state 4 unless already in it) and zero
   otherwise; the depth moves a quarter of the way through func_80274870_de, steps smaller than
   D_800C7ED0[1] downward or D_800C7ED8[0] upward are dropped, and bit 0x80 of the flags is set while
   D_800C7ED8[1] less the depth lies within D_800C7EE0 to (&D_800C7EE0)[1], cleared otherwise. */

extern f32 D_800C7ED0[];
extern f32 D_800C7ED8[];

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
        target = D_800C7ED0[0];
    }
    depth = ((func_8022DC34_S2 *)(arg0))->unk718;
    func_80274870_de(&depth, target, 0.25f);
    do {
        step = depth - ((func_8022DC34_S2 *)(arg0))->unk718;
        if (step < 0.0f) {
            if (-step < D_800C7ED0[1]) {
                goto still;
            }
        } else if (step < D_800C7ED8[0]) {
        still:
            step = 0.0f;
        }
        moved = ((func_8022DC34_S2 *)(arg0))->unk718 + step;
        clearance = D_800C7ED8[1] - moved;
        lo = D_800C7EE0;
    } while (0);
    ((func_8022DC34_S2 *)(arg0))->unk718 = moved;
    if (lo <= clearance && clearance <= (&D_800C7EE0)[1]) {
        *flags |= 0x80;
    } else {
        *flags &= ~0x80;
    }
}
