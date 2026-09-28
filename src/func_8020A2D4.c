/* Runs a computer player's engagement timer: while the countdown at 0x2E4 is positive it rerolls the
   wait at 0x2E8 as the config's base at 8 plus a random share (scale D_800C6E00) of its spread at 0xC
   and counts down; at zero it counts the opponents in range through func_802831FC (three counting as
   the whole wait) and either flags waiting at 0x23C while fewer than the wait or starts pursuit with
   the countdown at -1 and a wait from the config's 0x24 and 0x28 (scale D_800C6E04); during pursuit
   the wait runs down, ends early once the player is within D_800C6E08 of its target on the target's
   height, and when it reaches zero flags 0x240 and acts through func_8020A95C. Written in the style of
   func_8020A458 with the random scale loaded into a local first. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3;

extern f32 D_800C6E00;
extern f32 D_800C6E04;
extern f32 D_800C6E08;
extern char D_80121990;
extern f32 func_802745D4(f32);
extern s32 func_802831FC(char *, void *);
extern void func_80284FC8(char *, void *, Vec3 *);
extern f32 func_8027272C(Vec3 *, Vec3 *);
extern void func_8020A95C(void *, void *);

void func_8020A2D4(void *arg0, void *config) {
    s32 count;
    char *target;
    Vec3 pos;
    f32 range;
    f32 scale;

    if (*(s32 *) ((char *) arg0 + 0x2E4) > 0) {
        scale = D_800C6E00;
        *(s32 *) ((char *) arg0 + 0x2E8) = *(s32 *) ((char *) config + 0x8);
        *(s32 *) ((char *) arg0 + 0x2E8) =
            (f32) *(s32 *) ((char *) arg0 + 0x2E8)
            + func_802745D4(scale) * (f32) *(s32 *) ((char *) config + 0xC);
        *(s32 *) ((char *) arg0 + 0x2E4) -= 1;
        return;
    }
    if (*(s32 *) ((char *) arg0 + 0x2E4) == 0) {
        count = func_802831FC(&D_80121990, *(void **) arg0);
        if (count == 3) {
            *(s32 *) ((char *) arg0 + 0x2E8) = count;
        }
        if (count < *(s32 *) ((char *) arg0 + 0x2E8)) {
            *(s32 *) ((char *) arg0 + 0x23C) = 1;
            return;
        }
        *(s32 *) ((char *) arg0 + 0x2E4) = -1;
        scale = D_800C6E04;
        *(s32 *) ((char *) arg0 + 0x2E8) = *(s32 *) ((char *) config + 0x24);
        *(s32 *) ((char *) arg0 + 0x2E8) =
            (f32) *(s32 *) ((char *) arg0 + 0x2E8)
            + func_802745D4(scale) * (f32) *(s32 *) ((char *) config + 0x28);
        return;
    }
    *(s32 *) ((char *) arg0 + 0x2E8) -= 1;
    target = *(char **) (*(char **) ((char *) arg0 + 0x64) + 0x1D8);
    func_80284FC8(&D_80121990, *(void **) arg0, &pos);
    range = D_800C6E08;
    pos.y = *(f32 *) (target + 0xC);
    if (func_8027272C(&pos, (Vec3 *) (target + 8)) < range) {
        *(s32 *) ((char *) arg0 + 0x2E8) = 0;
    }
    if (*(s32 *) ((char *) arg0 + 0x2E8) == 0) {
        *(s32 *) ((char *) arg0 + 0x240) = 1;
        func_8020A95C(arg0, config);
    }
}
