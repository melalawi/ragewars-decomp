/* Handles a player's attack trigger: nothing while cooling down past D_800C7FD0; the trigger is the
 * controller latch at 0x23C (cleared when read) for a flagged controlled player, else flag 0x2000; when it
 * fires and func_80230048 accepts the attack, a ranged attack (type 2) that may fire takes action 8 and
 * returns 2, otherwise action 4 starts with the combo byte cleared and returns 1. Adapted from
 * func_80231BA0 with the fire check as the same static helper. */
#include "basetypes.h"

extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8;
extern f32 D_800C7FD0;
extern f32 D_800C7FD4;
extern char D_80145040;
extern char D_80145088;
extern s32 func_80230048(void *, void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern void func_80214178(void *, void *, s32);

typedef struct func_802301E4_S1 func_802301E4_S1;
typedef struct func_802301E4_S2 func_802301E4_S2;
typedef struct func_802301E4_S3 func_802301E4_S3;
typedef struct func_802301E4_S4 func_802301E4_S4;
struct func_802301E4_S1 {
    char pad0[0x5D4];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x11D8 - 0x6AC - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    char* unk1454;
};
struct func_802301E4_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_802301E4_S3 {
    char pad0[0x23C];
    s32 unk23C;
};
struct func_802301E4_S4 {
    char pad0[0xCB];
    u8 unkCB;
    char padCB[0x13C - 0xCB - sizeof(u8)];
    s32 unk13C;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_802301E4_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_802301E4_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_802301E4_S1 *)(player))->unk5D4 * 0x190], ((func_802301E4_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_802301E4_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_802301E4_S1 *)(player))->unk5DC, D_800D70E8, func_8022A590(&D_80145040, player),
                          D_800C7FD4);
        }
    }
    return ammo;
}

s32 func_802301E4(void *actor, void *attack) {
    char *player;
    s32 trigger;
    char *control;

    player = ((func_802301E4_S2 *)(actor))->unk1D8;
    if (((func_802301E4_S1 *)(player))->unk11D8 > D_800C7FD0) {
        return 0;
    }
    if ((((func_802301E4_S2 *)(actor))->unk100 & 0x300000) && ((func_802301E4_S1 *)(player))->unk1450 != 0) {
        control = ((func_802301E4_S1 *)(player))->unk1454;
        trigger = ((func_802301E4_S3 *)(control))->unk23C;
        ((func_802301E4_S3 *)(control))->unk23C = 0;
    } else {
        trigger = ((func_802301E4_S1 *)(player))->unk6AC & 0x2000;
    }
    if (trigger != 0 && func_80230048(actor, attack) != 0) {
        if (((func_802301E4_S4 *)(attack))->unk13C == 2 && can_fire(player)) {
            func_80214178(actor, attack, 8);
            return 2;
        }
        func_80214178(actor, attack, 4);
        ((func_802301E4_S4 *)(attack))->unkCB = 0;
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E10_4 = 0.100000001f;
const float unbake_rodata_800C2E14_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7FD0_4 = 0.100000001f;
const float unbake_rodata_800C7FD4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2EE0_4 = 0.100000001f;
const float unbake_rodata_800C2EE4_4 = 1.0f;
#endif
