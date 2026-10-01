#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

/* Updates a computer player's brain for the frame: fixes its route start, runs its planner through func_802095F8 and its state callback, counts down its cooldown at 0x324, and for a displayed player sets the health meter from its health over the character's maximum (400 for kinds 11 and 12, 300 for 13 and 14, otherwise func_8022ABF0), as a percentage, rescaled for kind 14 by the difficulty D_8014693C; in the tutorial (D_801468A0) kind 11 also shows the timer and refills its ammunition, then the meter is drawn through func_802AB784 or func_802AB78C; finally it restarts a stalled player (state 0x12) through func_80209CD8. */
typedef struct Record {
    char pad0[0x80];
    s8 kind;
    char pad81[0x13];
    u8 display;
} Record;


typedef struct {
    char pad0[8];
    void (*update)(Player *, s32);
} Behaviour;

typedef struct {
    Player *player;
    s32 start;
    s32 route;
    char padC[0x20C];
    Behaviour *behaviour;
    char pad21C[0x20];
    s32 w23C;
    s32 w240;
    char pad244[0xE0];
    s32 cooldown;
} Brain;

typedef struct {
    char pad0[0x98];
    s32 active;
    char pad9C[4];
    s32 timer;
    s32 refills;
} Tutorial;

extern Tutorial D_801468A0;
extern char D_8013B7B8[];
extern s32 D_8014693C;

extern void func_802095F8(Brain *);
extern s32 func_8022ABF0(Player *);
extern void func_802AB784(char *, s32);
extern void func_802AB78C(char *, s32);
extern void func_802636D0(char *);
extern void func_802227D0(Player *, Player *, s32);
extern void func_80209CD8(Brain *, Player *);

void func_80208158(Brain *brain) {
    s32 health;
    s32 maximum;
    f32 meter;
    s32 kind;
    Tutorial *tutorial;
    Player *player;

    if (brain->player->views1450.view1450_1.computer == 0) {
        return;
    }
    if (brain->route == -1) {
        brain->route = brain->start;
    }
    func_802095F8(brain);
    if (brain->behaviour->update != 0) {
        brain->behaviour->update(brain->player, 0);
    }
    if (brain->cooldown > 0) {
        brain->cooldown--;
    }
    if (brain->player->views5D8.view5D8_1.record->display != 0) {
        health = brain->player->views5E4.view5E4_2.health >> 8;
        kind = brain->player->views5D8.view5D8_1.record->kind;
        if (kind == 11) {
            maximum = 400;
        } else if (kind == 12) {
            maximum = 400;
        } else if (kind == 14) {
            maximum = 300;
        } else if (kind == 13) {
            maximum = 300;
        } else {
            maximum = func_8022ABF0(brain->player) >> 8;
        }
        meter = (f32)health / (f32)maximum * 100.0f;
        if (brain->player->views5D8.view5D8_1.record->kind == 14) {
            if (meter == 0.0f) {
                meter = (3 - D_8014693C) * 33;
            } else {
                meter *= 0.33333334f;
                meter += (2 - D_8014693C) * 33;
            }
            if (meter < 0.0f) {
                meter = 0.0f;
            }
        }
        tutorial = &D_801468A0;
        if (tutorial->active != 0) {
            if (brain->player->views5D8.view5D8_1.record->kind == 11) {
                func_802AB784(D_8013B7B8, (f32)tutorial->timer);
                if (tutorial->refills > 0) {
                    tutorial->refills--;
                    func_802636D0((char *)brain->player + 0x688);
                    brain->w23C = 0;
                    brain->w240 = 0;
                }
                if (tutorial->refills == 0 && brain->player->views5E4.view5E4_2.health > 0) {
                    tutorial->timer = 100;
                    tutorial->refills = -1;
                    func_802227D0(brain->player, brain->player, 2);
                }
            }
            if (brain->player->views5D8.view5D8_1.record->display == 1) {
                func_802AB784(D_8013B7B8, meter);
            } else {
                func_802AB78C(D_8013B7B8, meter);
            }
        }
    }
    player = brain->player;
    if (player->views5E8.view650_16.state == 0x12) {
        player->views1340.view1340_1.stalls++;
        func_80209CD8(brain, player);
    }
}
