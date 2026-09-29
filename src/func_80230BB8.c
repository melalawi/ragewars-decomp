/* Advances a player's second charging action: when the trigger is released (as in func_802312B8) or the
 * cooldown is past D_800C8008, it switches to action 2, runs func_8022AF30 and func_8022AFFC, plays sound
 * 0x794 at the player's target or position and pushes the charge at 0x128 by the release amount; otherwise
 * it grows the charge by the charge rate and each time the cue timer at 0x64 runs out adds the cue period
 * back and plays the charge cue (0x3F9 in a multiplayer match without controller, 0x4CB otherwise).
 * Adapted from func_802312B8. */
#include "basetypes.h"

extern f32 D_800C8008;
extern f32 D_800C8010;
extern s32 D_800CF518;
extern f32 D_800D2988;
extern s32 D_801450B8;
extern void func_80214178(void *, void *, s32);
extern s32 func_80222A80(void *, s16);
extern void func_8022AF30(void *);
extern void func_8022AFFC(void *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32 *, s32);
extern void func_802748E0(f32 *, f32, f32);
extern void func_8021A9A4(void *, s32);

typedef struct func_80230BB8_S1 func_80230BB8_S1;
typedef struct func_80230BB8_S2 func_80230BB8_S2;
typedef struct func_80230BB8_S3 func_80230BB8_S3;
typedef struct func_80230BB8_S4 func_80230BB8_S4;
typedef struct func_80230BB8_S5 func_80230BB8_S5;
typedef struct func_80230BB8_S6 func_80230BB8_S6;
typedef struct func_80230BB8_S7 func_80230BB8_S7;
typedef union func_80230BB8_S2_U1D8 { char* v0; void* v1; } func_80230BB8_S2_U1D8;
struct func_80230BB8_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x5DC - 0x8 - sizeof(s32)];
    char* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(char*)];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x11B4 - 0x6AC - sizeof(s32)];
    s32 unk11B4;
    char pad11B4[0x11D8 - 0x11B4 - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    char* unk1454;
};
struct func_80230BB8_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    func_80230BB8_S2_U1D8 unk1D8;
};
struct func_80230BB8_S3 {
    char pad0[0x23C];
    s32 unk23C;
};
struct func_80230BB8_S4 {
    char pad0[0x128];
    s32 unk128;
};
struct func_80230BB8_S5 {
    char pad0[0x64];
    f32 unk64;
    char pad64[0x128 - 0x64 - sizeof(f32)];
    f32 unk128;
};
struct func_80230BB8_S6 {
    char pad0[0x4];
    f32 unk4;
};
struct func_80230BB8_S7 {
    char pad0[0x4];
    f32 unk4;
};

static inline s32 released(void *actor, char *player) {
    char *control;
    s32 latch;

    if (((func_80230BB8_S1 *)(player))->unk11D8 > D_800C8008) {
        return 1;
    }
    if ((((func_80230BB8_S2 *)(actor))->unk100 & 0x300000) && ((func_80230BB8_S1 *)(player))->unk1450 != 0) {
        control = ((func_80230BB8_S1 *)(player))->unk1454;
        latch = ((func_80230BB8_S3 *)(control))->unk23C;
        ((func_80230BB8_S3 *)(control))->unk23C = 0;
        return latch == 0;
    }
    if (!(((func_80230BB8_S1 *)(player))->unk6AC & 0x2000)) {
        return 1;
    }
    if (((func_80230BB8_S1 *)(player))->unk11B4 != 0) {
        return 1;
    }
    return func_80222A80(player, ((func_80230BB8_S1 *)(player))->unk62E) == 0;
}

void func_80230BB8(void *actor, void *attack) {
    char *player;
    s32 *position;
    char *target;

    player = ((func_80230BB8_S2 *)(actor))->unk1D8.v0;
    target = ((func_80230BB8_S1 *)(player))->unk5DC;
    if (target != 0) {
        position = &((func_80230BB8_S4 *)(target))->unk128;
    } else {
        position = &((func_80230BB8_S1 *)(player))->unk8;
    }
    if (released(actor, player)) {
        func_80214178(actor, attack, 2);
        func_8022AF30(player);
        func_8022AFFC(player);
        func_8025DE74(0x794, position[0], position[1], position[2], position, -1);
        func_802748E0(&((func_80230BB8_S5 *)(attack))->unk128, (f32)D_800CF518 * ((func_80230BB8_S6 *)(&D_800C8008))->unk4, 0.4f);
        return;
    }
    func_802748E0(&((func_80230BB8_S5 *)(attack))->unk128, (f32)D_800CF518 * D_800C8010, 0.4f);
    ((func_80230BB8_S5 *)(attack))->unk64 -= D_800D2988;
    if (((func_80230BB8_S5 *)(attack))->unk64 <= 0.0f) {
        ((func_80230BB8_S5 *)(attack))->unk64 += ((func_80230BB8_S7 *)(&D_800C8010))->unk4;
        if (((func_80230BB8_S1 *)(player))->unk1450 == 0 && D_801450B8 == 1) {
            func_8021A9A4(((func_80230BB8_S2 *)(actor))->unk1D8.v1, 0x3F9);
        } else {
            func_8021A9A4(((func_80230BB8_S2 *)(actor))->unk1D8.v1, 0x4CB);
        }
    }
}
