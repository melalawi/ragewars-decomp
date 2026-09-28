/* Drives close-range combat: pursuit, retreat and strafing around a target, bailing out when it gets too far away. */
#include "basetypes.h"

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
    f32 forward; s32 w6AC,buttons; char pad6B4[0xDA0];
    struct Brain *brain;
} Actor;

typedef struct Brain {
    Actor *player;
    s32 route;
    s32 w8,destination;
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
    s32 distance;char pad2E4[0x34];
    s32 frames;
    s32 visible,fireTimer;
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


extern void func_80208410(Brain *),func_80208AAC(Brain *),func_8020FA10(Brain *);
extern struct {char pad[0xC];unsigned short flags;} *func_8020C994(char *,int);
void func_80211A7C(Actor *actor) {
    char *routes;
    s32 mine, theirs, dir, route;
    Actor *player;
    Actor *target;
    Brain *brain;
    Vec3 *pos;
    f32 dist, near, far, range, speed, strafe;
    s32 pattern;

    brain = actor->self->brain;
    func_80211020(brain);
    player = brain->target;
    routes = D_8013B364;
    if (player != 0) {
        if (!(brain->frames & 3)) {
            brain->visible = func_802099B4(brain, player);
        }
        brain->frames += 1;
        target = brain->target->self;
        mine = brain->player->flags & 0x3000;
        theirs = (target->flags & 0x3000) != 0;
        if (mine && !theirs) {
            func_80209874(brain, 12);
            return;
        }
        route = target->brain->route;
        if (func_8020C994(routes, route)->flags & 0x400) {
            brain->target = 0;
            func_8020FA10(brain);
            return;
        }
        if (brain->visible != 0) {
            speed = func_80209BE0(brain);
            strafe = speed;
            if (--brain->timer <= 0) {
                brain->timer = func_80274544() % 4 + 2;
                brain->pattern = func_80274544() % 2;
                brain->distance = func_80274544() % 32400 + 10000;
            }
            pos = &target->pos;
            func_80209308(brain, pos, 2.0f, func_80209DAC(brain));
            dist = func_8027272C(pos, &brain->player->pos);
            if (dist > 377487.3f) {
                brain->combat = 5;
                func_80209874(brain, 6);
                return;
            }
            near = dist + 10000.0f;
            range = (f32)brain->distance;
            if (near < 0.0f) {
                if (range < -near) {
                    goto fwd;
                }
                goto back_test;
            }
            if (range < near) {
fwd:
                dir = func_80210EFC(brain->player->yaw - 3.1415927f);
                player = brain->player;
                if ((player->slot % 2) == D_800D297C) {
                    func_80210964(player, dir);
                }
                if (!(brain->walk[dir] < 100.0f)) {
                    brain->player->forward = 1.0f;
                } else {
                    goto stop;
                }
            } else {
back_test:
                far = dist - 10000.0f;
                range = (f32)brain->distance;
                if (far < 0.0f) {
                    if (-far < range) {
                        goto back;
                    }
                    goto stop;
                }
                if (far < range) {
back:
                    dir = func_80210EFC(brain->player->yaw);
                    player = brain->player;
                    if ((player->slot % 2) == D_800D297C) {
                        func_80210964(player, dir);
                    }
                    if (!(brain->walk[dir] < 100.0f)) {
                        brain->player->forward = -1.0f;
                    } else {
                        goto stop;
                    }
                } else {
stop:
                    brain->player->forward = 0.0f;
                }
            }
            pattern = brain->pattern;
            if (pattern == 0) {
                dir = func_80210EFC((brain->player->yaw - 3.1415927f) - 1.5707964f);
                player = brain->player;
                if ((player->slot % 2) == D_800D297C) {
                    func_80210964(player, dir);
                }
                if (!(brain->walk[dir] < 100.0f)) {
                    brain->player->strafe = -strafe;
                } else {
                    goto halt;
                }
            } else if (pattern == 1) {
                dir = func_80210EFC((brain->player->yaw - 3.1415927f) + 1.5707964f);
                player = brain->player;
                if ((player->slot % 2) == D_800D297C) {
                    func_80210964(player, dir);
                }
                if (brain->walk[dir] < 100.0f) {
halt:
                    brain->player->strafe = 0.0f;
                    brain->pattern = 2;
                } else {
                    brain->player->strafe = strafe;
                }
            } else {
                brain->player->strafe = 0.0f;
            }
            brain->w14 = -1;
            if (--brain->fireTimer == 0 && (func_80274544() % 100) < (s32)speed) {
                brain->player->buttons |= 0x10;
            }
            if (brain->fireTimer < 0) {
                brain->fireTimer = ((func_80274544() % 1) + 2) * 0xF;
            }
            func_80209E80(brain);
        } else {
            brain->destination = route;
            func_80208410(brain);
            func_80208AAC(brain);
        }
        if (route != brain->node) {
            brain->node = route;
            if (func_8020D1CC(routes, brain->route, route) == 0) {
                func_80209874(brain, 1);
            }
        }
    }
}
