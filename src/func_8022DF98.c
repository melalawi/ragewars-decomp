/* Updates a player's charge effect: cancels the charge and moves its effect to state 3 when the
   current weapon's entry in D_800D052C has no ammunition, the charge is off, or D_801468F4 is set with
   the player's controller flag at 0x8F; while the button at 0x5E4 is held and charging it targets
   D_800C7EF4, then runs the effect through func_80219480, eases the level toward the target by half
   through func_802748E0 and clears a level below D_800C7EF8 once the target is zero. */
#include "basetypes.h"

extern void *D_800D052C[];
extern s32 D_801468F4;
extern f32 D_800C7EF4;
extern f32 D_800C7EF8;
extern void func_80219480(void *, void *);
extern void func_802748E0(f32 *, f32, f32);

void func_8022DF98(void *arg0) {
    f32 target;
    char *effect;
    s32 state;

    target = 0.0f;
    effect = (char *) arg0 + 0x878;
    if (*(s16 *) ((char *) D_800D052C[*(s16 *) ((char *) arg0 + 0x62E)] + 8) <= 0
        || *(s32 *) ((char *) arg0 + 0x7E8) == 0
        || (D_801468F4 != 0 && *(u8 *) (*(char **) ((char *) arg0 + 0x5D8) + 0x8F) != 0)) {
        do {
            *(s32 *) ((char *) arg0 + 0x7E8) = 0;
            state = *(s32 *) (effect + 0xB4);
        } while (0);
        if (state != 0 && state != 3) {
            *(s32 *) (effect + 0xB4) = 3;
        }
    }
    if (*(s32 *) ((char *) arg0 + 0x5E4) != 0 && *(s32 *) ((char *) arg0 + 0x7E8) != 0) {
        target = D_800C7EF4;
        *(s32 *) ((char *) arg0 + 0x7E8) = 1;
    }
    *(f32 *) ((char *) arg0 + 0x7F0) = target;
    func_80219480((char *) arg0 + 0x878, arg0);
    func_802748E0((f32 *) ((char *) arg0 + 0x7EC), target, 0.5f);
    if (target == 0.0f && *(f32 *) ((char *) arg0 + 0x7EC) < D_800C7EF8) {
        *(f32 *) ((char *) arg0 + 0x7EC) = 0.0f;
    }
}
