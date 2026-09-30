#include "basetypes.h"
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

typedef struct RiderTriple { s32 a, b, c; } RiderTriple;
typedef struct Quad { s32 a, b, c, d; } Quad;
typedef struct Rider {
    char pad0[0x128];
    Vec3f centre;
} Rider;

typedef struct Actor {
    u8 kind;
    char pad1[7];
    RiderTriple position;
    char pad14[4];
    s32 *state;
    Vec3f origin;
    char pad28[0x6C - 0x28];
    f32 spin;
    char pad70[0x100 - 0x70];
    s32 flags;
    char pad104[0x170 - 0x104];
    s32 unk170;
    char pad174[0x1AC - 0x174];
    s32 unk1AC;
    char pad1B0[0x1D8 - 0x1B0];
    Player *player;
} Actor;

typedef struct Thing {
    char pad0[0x66];
    u8 kind;
} Thing;

extern char D_80121990;
extern char D_8011FE88;

extern f32 func_80216F44(Actor *, RiderTriple);
extern void func_8022B08C(Player *, Vec3f *);
extern void func_80239314(Rider *, f32, f32, f32, f32, s32, RiderTriple);
extern void func_8024E78C(void *, RiderTriple, void *, s32 *, s32, s32);
extern void func_80271888(Quad *, Vec3f *);
extern void func_80271FA4(Vec3f *, Vec3f *, Vec3f *);
extern void func_80278DE8(Actor *, s32, Actor *);
extern void func_80280094(void *, void *, void *, s32, s32, s32, RiderTriple, Quad, RiderTriple, s32, s32, s32);
extern void func_8028CE70(void *, void *, s32, RiderTriple, f32, f32);

/* func_80267968, integrated here: the parameter copies are the frame's 0x58..0x6F block. */
static inline void spawn_hit_effect(Player *player, Actor *actor, RiderTriple position, Vec3f direction, s32 kind) {
    Vec3f v;
    RiderTriple point;
    RiderTriple zero;
    Quad rotation;
    s32 unused;

    if (player->views5DC.view5DC_5.rider == 0) {
        return;
    }
    player = actor->player;  /* FAKEMATCH: reuses the helper's player parameter for actor->player; a separate local gives the right code but not the target register numbering. Owner-accepted 2026-09-28; clean draft 236/253. */
    v.x = -direction.x;
    v.y = direction.y;
    v.z = direction.z;
    func_8022B08C(player, &v);
    v.x -= player->views5DC.view5DC_5.rider->centre.x;
    v.y -= player->views5DC.view5DC_5.rider->centre.y;
    v.z -= player->views5DC.view5DC_5.rider->centre.z;
    func_80271888(&rotation, &v);
    func_8024E78C(actor, position, &point, &unused, 0, 1);
    point = position;
    ((Vec3f *)&point)->y += 12.0f;
    zero.a = 0;
    zero.b = 0;
    zero.c = 0;
    func_80280094(&D_80121990, actor, actor, 0, 0, 0xE9, zero, rotation, point, 0, -1, kind == 5 ? 3 : 1);
    point.a = 0;
    point.b = 0;
    point.c = 0;
    func_8028CE70(&D_8011FE88, player->views5E8.view698_37.emitter + 0x140, 3, point, 10.24f, 1.0f);
}

void func_8026643C(Actor *self, Actor *other, s32 hit, RiderTriple pos, Vec3f vel, s32 spin, Thing *thing, s32 flags) {
    Actor *target;

    if (other->kind == 1) {
        other->unk170 |= 0x8000;
        target = other;
        if ((self->flags & 0x300000) && self->player->views5DC.view5DC_5.rider != 0) {
            if (other->unk1AC & 0x4000) {
                func_80239314(self->player->views5DC.view5DC_5.rider, 20.0f, 100.0f, 20.0f, 1.0f, 1, pos);
            } else if (other->unk1AC & 0x2000) {
                func_80239314(self->player->views5DC.view5DC_5.rider, 10.0f, 50.0f, 10.0f, 1.0f, 1, pos);
            }
        }
        if (hit != 0) {
            if (thing != 0 && (target->flags & 0x300000) && (thing->kind == 4 || thing->kind == 5)) {
                spawn_hit_effect(target->player, other, pos, vel, thing->kind);
            }
            vel.x = 0.0f;
            vel.y = 0.0f;
            vel.z = 0.0f;
        }
        if ((target->flags & 0x300000) && (flags & 0x200)) {
            func_80278DE8(self, 0x10, target);
        }
    }
    if (*self->state == 1 || *self->state == 0xB) {
        func_80271FA4(&self->origin, &self->origin, &vel);
        if (spin != 0) {
            self->spin += func_80216F44(self, other->position) * 0.5f;
        }
    }
}
