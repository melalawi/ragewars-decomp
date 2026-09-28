/* Spawns a hit effect when the target has a rider: turns the negated hit direction into the victim's frame through func_8022B08C, makes it relative to the victim rider's centre and converts it to a rotation, resolves the hit position on the attacker through func_8024E78C, spawns effect 0xE9 there raised by D_800C9538 (size 3 for kind 5, otherwise 1), and starts effect 3 on the victim's emitter. */
#include "basetypes.h"

typedef struct Triple {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct Quad {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Rider {
    char pad0[0x128];
    Vec3f centre;
} Rider;

typedef struct Player {
    char pad0[0x5DC];
    Rider *rider;
    char pad5E0[0x698 - 0x5E0];
    char *emitter;
} Player;

typedef struct Actor {
    char pad0[0x1D8];
    Player *player;
} Actor;

extern f32 D_800C9538;
extern f32 D_800C9540;
extern char D_80121990;
extern char D_8011FE88;

extern void func_8022B08C(Player *, Vec3f *);
extern void func_80271888(Quad *, Vec3f *);
extern void func_8024E78C(void *, Triple, void *, s32 *, s32, s32);
extern void func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);
extern void func_8028CE70(void *, void *, s32, Triple, f32, f32);

void func_80267968(Player *target, Actor *actor, Triple position, Vec3f direction, s32 kind) {
    Player *player;
    Vec3f v;
    Triple point;
    Triple zero;
    Quad rotation;
    s32 unused;

    if (target->rider == 0) {
        return;
    }
    player = actor->player;
    v.x = -direction.x;
    v.y = direction.y;
    v.z = direction.z;
    func_8022B08C(player, &v);
    v.x -= player->rider->centre.x;
    v.y -= player->rider->centre.y;
    v.z -= player->rider->centre.z;
    func_80271888(&rotation, &v);
    func_8024E78C(actor, position, &point, &unused, 0, 1);
    point = position;
    ((Vec3f *)&point)->y += D_800C9538;
    zero.a = 0;
    zero.b = 0;
    zero.c = 0;
    func_80280094(&D_80121990, actor, actor, 0, 0, 0xE9, zero, rotation, point, 0, -1, kind == 5 ? 3 : 1);
    point.a = 0;
    point.b = 0;
    point.c = 0;
    func_8028CE70(&D_8011FE88, player->emitter + 0x140, 3, point, *(&D_800C9538 + 1), D_800C9540);
}
