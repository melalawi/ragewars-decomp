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

typedef struct func_8022DF98_S1 func_8022DF98_S1;
typedef struct func_8022DF98_S2 func_8022DF98_S2;
typedef struct func_8022DF98_S3 func_8022DF98_S3;
struct func_8022DF98_S1 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x5E4 - 0x5D8 - sizeof(char*)];
    s32 unk5E4;
    char pad5E4[0x62E - 0x5E4 - sizeof(s32)];
    s16 unk62E;
    char pad62E[0x7E8 - 0x62E - sizeof(s16)];
    s32 unk7E8;
    char pad7E8[0x7EC - 0x7E8 - sizeof(s32)];
    f32 unk7EC;
    char pad7EC[0x7F0 - 0x7EC - sizeof(f32)];
    f32 unk7F0;
    char pad7F0[0x878 - 0x7F0 - sizeof(f32)];
    char unk878;
};
struct func_8022DF98_S2 {
    char pad0[0x8];
    s16 unk8;
};
struct func_8022DF98_S3 {
    char pad0[0xB4];
    s32 unkB4;
};

void func_8022DF98(void *arg0) {
    f32 target;
    char *effect;
    s32 state;

    target = 0.0f;
    effect = &((func_8022DF98_S1 *)(arg0))->unk878;
    if (((func_8022DF98_S2 *)(D_800D052C[((func_8022DF98_S1 *)(arg0))->unk62E]))->unk8 <= 0
        || ((func_8022DF98_S1 *)(arg0))->unk7E8 == 0
        || (D_801468F4 != 0 && *(u8 *) (((func_8022DF98_S1 *)(arg0))->unk5D8 + 0x8F) != 0)) {
        do {
            ((func_8022DF98_S1 *)(arg0))->unk7E8 = 0;
            state = ((func_8022DF98_S3 *)(effect))->unkB4;
        } while (0);
        if (state != 0 && state != 3) {
            ((func_8022DF98_S3 *)(effect))->unkB4 = 3;
        }
    }
    if (((func_8022DF98_S1 *)(arg0))->unk5E4 != 0 && ((func_8022DF98_S1 *)(arg0))->unk7E8 != 0) {
        target = D_800C7EF4;
        ((func_8022DF98_S1 *)(arg0))->unk7E8 = 1;
    }
    ((func_8022DF98_S1 *)(arg0))->unk7F0 = target;
    func_80219480(&((func_8022DF98_S1 *)(arg0))->unk878, arg0);
    func_802748E0(&((func_8022DF98_S1 *)(arg0))->unk7EC, target, 0.5f);
    if (target == 0.0f && ((func_8022DF98_S1 *)(arg0))->unk7EC < D_800C7EF8) {
        ((func_8022DF98_S1 *)(arg0))->unk7EC = 0.0f;
    }
}
