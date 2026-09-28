#include "basetypes.h"

/* Draws an actor's ground shadow: probes the ground under the actor through func_80243A80 into D_801041F0, and when ground is found tilts the shadow model from D_8011FFB0 to the ground normal, scales it by the actor's size shrinking with height above the ground, fades it with height (and with lost health for actors flagged 1), places it on the ground and draws it through func_8026992C between render-mode commands. */

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Quat {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct Gfx {
    u32 w0;
    u32 w1;
} Gfx;

typedef struct Instance {
    char pad0[8];
    Vec3 position;
    char pad14[8];
    Vec3 velocity;
    char pad28[0x28];
} Instance;

typedef struct Ground {
    s32 found;
    char pad4[8];
    f32 height;
    char pad10[0xE0];
    Vec3 normal;
} Ground;

typedef struct Size {
    char pad0[0x18];
    f32 scale;
} Size;

typedef struct ActorDef {
    s32 flags;
    char pad4[0x10];
    s32 large;
    char pad18[0xC];
    Size *size;
} ActorDef;

typedef struct Actor {
    Instance instance;
    char pad50[0xC8];
    ActorDef *def;
    char pad11C[0x24];
    f32 damage;
    char pad144[8];
    s16 health;
    char pad14E[0xA];
    f32 radius;
} Actor;

extern char D_8011FFB0;
extern char D_80104030;
extern Ground D_801041F0;
extern f32 D_80115DEC;
extern Gfx *D_80110634;
extern void *func_80279A30(void *, s32);
extern s32 func_80243A80(Instance *, Vec3, void *);
extern void func_80271888(Quat *, Vec3 *);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_80274108(Quat *out, Quat *a, Quat *b);
extern s32 func_802725BC(Vec3 *, f32);
extern void func_802742B4(Quat *, f32 *);
extern void func_802734EC(f32 *, f32, f32, f32);
extern void func_802734B8(f32 *, f32, f32, f32);
extern void func_802702EC(f32 *, void *);
extern void func_8026992C(void *model, s32 pass, u8 alpha);

#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define MAX(a, b) ((a) < (b) ? (b) : (a))

#define MIN_F(a, b) ({ f32 _m = (a); if (!(_m <= (b))) _m = (b); _m; })

void func_8027E758(Actor *actor) {
    f32 matrix[16];
    Vec3 point;
    Quat rotation;
    Quat tilt;
    Quat roll;
    Instance probe;
    void *model;
    Ground *ground;
    f32 angle;
    f32 height;
    f32 alpha;
    f32 size;
    f32 health;
    f32 floor;
    f32 shrink;

    model = func_80279A30(&D_8011FFB0, 1);
    if (model == 0) {
        return;
    }
    probe = actor->instance;
    probe.velocity.x = 0.0f;
    probe.velocity.y = 0.0f;
    probe.velocity.z = 0.0f;
    probe.position.y += 10.24f;
    point.x = probe.position.x;
    point.y = probe.position.y - 102400.0f;
    point.z = probe.position.z;
    func_80243A80(&probe, point, &D_80104030);
    ground = &D_801041F0;
    if (ground->found == 0) {
        return;
    }
    angle = 0.78539824f;
    func_80271888(&tilt, &ground->normal);
    roll.x = D_80115DEC = func_802BC200(angle);
    roll.y = 0.0f;
    roll.z = 0.0f;
    roll.w = func_802BB630(angle);
    func_80274108(&rotation, &roll, &tilt);
    floor = ground->height;
    height = actor->instance.position.y - floor;
    alpha = MAX(MIN(200.0f - height * 0.30517578f, 255.0f), 0.0f);
    size = actor->radius * 7.68f;
    if (actor->def->large != 0) {
        size *= 8.0f;
    }
    size *= actor->def->size->scale;
    shrink = height * 0.1f;
    size = MAX(MIN_F(size - shrink, size), 0.0f);
    if (actor->def->flags & 1) {
        health = actor->health;
        if (0.0f < health) {
            alpha *= (health - actor->damage) / health;
        }
    }
    point.x = actor->instance.position.x;
    point.z = actor->instance.position.z;
    point.y = floor;
    func_802725BC(&point, 20000.0f);
    func_802742B4(&rotation, matrix);
    func_802734EC(matrix, size, 1.0f, size);
    func_802734B8(matrix, point.x, point.y, point.z);
    func_802702EC(matrix, model);
    {
        Gfx *cmd = D_80110634++;
        cmd->w0 = 0xE7000000;
        cmd->w1 = 0;
        cmd = D_80110634++;
        cmd->w0 = 0xE3000A01;
        cmd->w1 = 0x100000;
    }
    func_8026992C(model, 1, (u32)alpha);
    {
        Gfx *cmd = D_80110634++;
        cmd->w0 = 0xE7000000;
        cmd->w1 = 0;
        cmd = D_80110634++;
        cmd->w0 = 0xE3000A01;
        cmd->w1 = 0;
    }
}
