/* Eases a player's crouch depth at 0x718: the target is D_800C7ED0[0] while input bits 0xC0000 are
   held or crouching is forced at 0x71C (which also enters state 4 unless already in it) and zero
   otherwise; the depth moves a quarter of the way through func_802748E0, steps smaller than
   D_800C7ED0[1] downward or D_800C7ED8[0] upward are dropped, and bit 0x80 of the flags is set while
   D_800C7ED8[1] less the depth lies within D_800C7EE0 to (&D_800C7EE0)[1], cleared otherwise. */
#include "basetypes.h"

extern f32 D_800C7ED0[];
extern f32 D_800C7ED8[];
extern f32 D_800C7EE0;
extern s32 func_802227D0(void *, void *, s32);
extern void func_802748E0(f32 *, f32, f32);

typedef struct func_8022DC34_S1 func_8022DC34_S1;
typedef struct func_8022DC34_S2 func_8022DC34_S2;
struct func_8022DC34_S1 {
    char pad0[0x38];
    s32 unk38;
};
struct func_8022DC34_S2 {
    char pad0[0x650];
    s16 unk650;
    char pad650[0x718 - 0x650 - sizeof(s16)];
    f32 unk718;
    char pad718[0x71C - 0x718 - sizeof(f32)];
    s32 unk71C;
};

void func_8022DC34(void *arg0, void *arg1, s32 unused, s32 *flags) {
    s32 held;
    s32 crouch;
    f32 target;
    f32 depth;
    f32 step;
    f32 clearance;
    f32 moved;
    f32 lo;

    held = ((func_8022DC34_S1 *)(arg1))->unk38 & 0xC0000;
    crouch = held != 0;
    if (((func_8022DC34_S2 *)(arg0))->unk71C != 0) {
        crouch = 1;
        if (((func_8022DC34_S2 *)(arg0))->unk650 != 4) {
            func_802227D0(arg0, arg1, 4);
        }
    }
    target = 0.0f;
    if (crouch) {
        target = D_800C7ED0[0];
    }
    depth = ((func_8022DC34_S2 *)(arg0))->unk718;
    func_802748E0(&depth, target, 0.25f);
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
