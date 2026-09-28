#include "basetypes.h"

/* Runs a computer player's chase state: refreshes its view through func_80211020 and, without a target, returns to roaming (state 2); otherwise re-checks the target's visibility every fourth frame through func_802099B4, backs off (state 12) when only it is on the upper layer, switches to close combat (state 7, sub-state 13) within 600 units, re-rolls its strafe pattern through func_80274544 when its timer runs out, steers at the target through func_80209308 and strafes left or right at 0.4 of its speed while func_80210964 reports room to walk, stopping otherwise, then drives through func_80209E80; losing sight of the target or failing to re-route to the target's new node through func_8020D1CC also returns it to roaming. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

struct Brain;

typedef struct Actor {
    char pad0[8];
    Vec3 pos;
    char pad14[0x24];
    s32 flags;
    char pad3C[0x30];
    f32 yaw;
    char pad70[0x168];
    struct Actor *self;
    char pad1DC[0x3F8];
    s32 slot;
    char pad5D8[0xCC];
    f32 strafe;
    char pad6A8[0xDAC];
    struct Brain *brain;
} Actor;

typedef struct Brain {
    Actor *player;
    s32 route;
    char pad8[8];
    s32 node;
    s32 w14;
    char pad18[0x4C];
    Actor *target;
    char pad68[0x188];
    f32 walk[8];
    char pad210[0x20];
    s32 combat;
    char pad234[0xA4];
    s32 timer;
    s32 pattern;
    char pad2E0[0x38];
    s32 frames;
    s32 visible;
} Brain;

extern s32 D_800D297C;
extern char D_8013B364[];

extern void func_80211020(Brain *);
extern s32 func_802099B4(Brain *, Actor *);
extern void func_80209874(Brain *, s32);
extern f32 func_8027272C(Vec3 *, Vec3 *);
extern f32 func_80209BE0(Brain *);
extern s32 func_80274544(void);
extern f32 func_80209DAC(Brain *);
extern f32 func_80209308(Brain *, Vec3 *, f32, f32);
extern s32 func_80210EFC(f32);
extern void func_80210964(Actor *, s32);
extern void func_80209E80(Brain *);
extern s32 func_8020D1CC(char *, s32, s32);

void func_80212088(Actor *actor) {
    Brain *brain;
    s32 mine;
    Actor *target;
    s32 node;
    f32 speed;
    s32 dir;
    s32 roll;
    s32 theirs;

    brain = actor->self->brain;
    func_80211020(brain);
    if (brain->target == 0) {
        brain->target = 0;
        func_80209874(brain, 2);
        return;
    }
    if (!(brain->frames & 3)) {
        brain->visible = func_802099B4(brain, brain->target);
    }
    brain->frames++;
    target = brain->target->self;
    mine = brain->player->flags & 0x3000;
    theirs = (target->flags & 0x3000) != 0;
    if (mine && !theirs) {
        func_80209874(brain, 12);
        return;
    }
    node = target->brain->route;
    if (brain->visible != 0) {
        if (func_8027272C(&target->pos, &brain->player->pos) < 360000.0f) {
            brain->combat = 13;
            func_80209874(brain, 7);
            return;
        }
        speed = func_80209BE0(brain) * 0.4f;
        if (--brain->timer <= 0) {
            brain->timer = func_80274544() % 4 + 12;
            brain->pattern = func_80274544() % 2;
            roll = func_80274544();
            if (roll / 2 * 2 == roll - 1) {
                brain->pattern = 2;
            }
        }
        func_80209308(brain, &target->pos, 2.0f, func_80209DAC(brain));
        if (brain->pattern == 0) {
            dir = func_80210EFC(brain->player->yaw - 3.1415927f - 1.5707964f);
            if (brain->player->slot % 2 == D_800D297C) {
                func_80210964(brain->player, dir);
            }
            if (brain->walk[dir] < 100.0f) {
                goto stop;
            }
            brain->player->strafe = -speed;
        } else if (brain->pattern == 1) {
            dir = func_80210EFC(brain->player->yaw - 3.1415927f + 1.5707964f);
            if (brain->player->slot % 2 == D_800D297C) {
                func_80210964(brain->player, dir);
            }
            if (brain->walk[dir] < 100.0f) {
            stop:
                brain->player->strafe = 0.0f;
                brain->pattern = 2;
            } else {
                brain->player->strafe = speed;
            }
        } else {
            brain->player->strafe = 0.0f;
        }
        brain->w14 = -1;
        func_80209E80(brain);
    } else {
        brain->target = 0;
        func_80209874(brain, 2);
    }
    if (node != brain->node) {
        brain->node = node;
        if (func_8020D1CC(D_8013B364, brain->route, node) == 0) {
            brain->target = 0;
            func_80209874(brain, 2);
        }
    }
}
