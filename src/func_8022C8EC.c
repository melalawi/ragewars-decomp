/* Runs a player's grounded movement state: updates it through func_80224028, eases the value at
   0x72C to zero by a quarter, applies the movement tables D_800CE7FC and D_800CE7C0, then leaves for
   state 2 when not on the ground (animation 0x5E24 for the D_800CED30 state table, otherwise 1), or
   picks the animation from the stick at 0x6C0 and 0x6C4: 0xA64 at rest, 0xA67 or 0xA66 when the
   second axis dominates and 0xA65 or 0xA68 otherwise, by the sign of the dominant axis. */
#include "basetypes.h"

extern void func_80224028(void *, void *);
extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(void *, void *, void *);
extern void func_802233CC(void *, void *, void *);
extern s32 func_802227D0(void *, void *, s32);
extern char D_800CE7FC;
extern char D_800CE7C0;
extern s32 D_800CED30;

void func_8022C8EC(void *arg0, void *arg1) {
    f32 x;
    f32 y;
    f32 zero;

    func_80224028(arg0, arg1);
    zero = 0.0f;
    func_802748E0((f32 *) ((char *) arg0 + 0x72C), zero, 0.25f);
    func_802231B0(arg0, arg1, &D_800CE7FC);
    func_802233CC(arg0, arg1, &D_800CE7C0);
    if (!(*(s32 *) ((char *) arg0 + 0x6AC) & 0x10)) {
        func_802227D0(arg0, arg1, 2);
        if (*(s32 **) ((char *) arg0 + 0x13B4) == &D_800CED30) {
            *(s32 *) ((char *) arg0 + 0x86C) = 0x5E24;
        } else {
            *(s32 *) ((char *) arg0 + 0x86C) = 1;
        }
    } else {
        x = *(f32 *) ((char *) arg0 + 0x6C0);
        if (x != zero || *(f32 *) ((char *) arg0 + 0x6C4) != zero) {
            y = *(f32 *) ((char *) arg0 + 0x6C4);
            if (x < y) {
                if (zero < y) {
                    *(s32 *) ((char *) arg0 + 0x86C) = 0xA67;
                } else {
                    *(s32 *) ((char *) arg0 + 0x86C) = 0xA66;
                }
            } else if (zero < x) {
                *(s32 *) ((char *) arg0 + 0x86C) = 0xA65;
            } else {
                *(s32 *) ((char *) arg0 + 0x86C) = 0xA68;
            }
        } else {
            *(s32 *) ((char *) arg0 + 0x86C) = 0xA64;
        }
    }
}
