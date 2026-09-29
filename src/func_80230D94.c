/* Runs a spinning weapon's barrel for its holder at 0x1D8: unless the weapon is in state 4 the spin
   speed at 0x128 decays, the spin angle at 0x124 advances by twice the speed per frame, and the
   holder's model animation speed at 0x168 follows the spin speed, capped at 1; while the fire input
   0x4000 is held and the holder is not stunned, a single player game (D_801462D5) without infinite
   ammunition at 0x1450 checks the ammunition through func_8022F54C and, when it is empty, clicks
   (sound 0xD4D) and shows the empty message on the holder's view; with ammunition and a loaded
   weapon at 0x5F6 it plays the wind-up sound 0x7BC unless already firing, sets the firing flags
   0x18400 and restarts the firing timer at 0x1230 at 25. Written with the fire check as the static
   helper shared with func_80231BA0. */
#include "basetypes.h"

typedef struct {
    s16 action;
    char pad2[0x16];
} StateInfo;

extern StateInfo D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8;
extern f32 D_800D2988;
extern char D_80145040;
extern char D_80145088;
extern s32 func_80222A80(void *, s16);
extern s16 func_8022F95C(void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern f32 func_80274810(f32, f32);
extern void func_80214178(void *, void *, s32);

typedef struct func_80230D94_S1 func_80230D94_S1;
typedef struct func_80230D94_S2 func_80230D94_S2;
typedef struct func_80230D94_S3 func_80230D94_S3;
typedef struct func_80230D94_S4 func_80230D94_S4;
struct func_80230D94_S1 {
    char pad0[0x5D4];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x5F6 - 0x5DC - sizeof(void*)];
    s16 unk5F6;
    char pad5F6[0x62E - 0x5F6 - sizeof(s16)];
    s16 unk62E;
    char pad62E[0x698 - 0x62E - sizeof(s16)];
    char* unk698;
    char pad698[0x6AC - 0x698 - sizeof(char*)];
    s32 unk6AC;
    char pad6AC[0x11D8 - 0x6AC - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x122C - 0x11D8 - sizeof(f32)];
    s32 unk122C;
    char pad122C[0x1230 - 0x122C - sizeof(s32)];
    f32 unk1230;
    char pad1230[0x1450 - 0x1230 - sizeof(f32)];
    s32 unk1450;
};
struct func_80230D94_S2 {
    char pad0[0x1D8];
    char* unk1D8;
};
struct func_80230D94_S3 {
    char pad0[0x34];
    s8 unk34;
    char pad34[0x124 - 0x34 - sizeof(s8)];
    f32 unk124;
    char pad124[0x128 - 0x124 - sizeof(f32)];
    f32 unk128;
};
struct func_80230D94_S4 {
    char pad0[0x168];
    f32 unk168;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_80230D94_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_80230D94_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_80230D94_S1 *)(player))->unk5D4 * 0x190], ((func_80230D94_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_80230D94_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_80230D94_S1 *)(player))->unk5DC, D_800D70E8, func_8022A590(&D_80145040, player),
                          1.0f);
        }
    }
    return ammo;
}

void func_80230D94(void *actor, void *weapon) {
    char *player;
    char *model;

    player = ((func_80230D94_S2 *)(actor))->unk1D8;
    if (((func_80230D94_S3 *)(weapon))->unk34 != 4) {
        ((func_80230D94_S3 *)(weapon))->unk128 = func_80274810(((func_80230D94_S3 *)(weapon))->unk128, 0.013613569f);
    }
    ((func_80230D94_S3 *)(weapon))->unk124 += ((func_80230D94_S3 *)(weapon))->unk128 * D_800D2988 * 2.0f;
    model = ((func_80230D94_S1 *)(player))->unk698;
    if (!(((func_80230D94_S3 *)(weapon))->unk128 < 0.0f ? 1.0f < -((func_80230D94_S3 *)(weapon))->unk128 * 1.7904929f
                                                   : 1.0f < ((func_80230D94_S3 *)(weapon))->unk128 * 1.7904929f)) {
        if (((func_80230D94_S3 *)(weapon))->unk128 < 0.0f) {
            ((func_80230D94_S4 *)(model))->unk168 = -((func_80230D94_S3 *)(weapon))->unk128 * 1.7904929f;
        } else {
            ((func_80230D94_S4 *)(model))->unk168 = ((func_80230D94_S3 *)(weapon))->unk128 * 1.7904929f;
        }
    } else {
        ((func_80230D94_S4 *)(model))->unk168 = 1.0f;
    }
    if ((((func_80230D94_S1 *)(player))->unk6AC & 0x4000) && can_fire(player) && ((func_80230D94_S1 *)(player))->unk5F6 > 0) {
        if (!(((func_80230D94_S1 *)(player))->unk122C & 0x18400)) {
            func_8025DF54(0x7BC);
        }
        ((func_80230D94_S1 *)(player))->unk122C |= 0x18400;
        ((func_80230D94_S1 *)(player))->unk1230 = 25.0f;
    }
}
