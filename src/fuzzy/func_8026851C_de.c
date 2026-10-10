#include "types.h"

/* Spawns an effect of the given kind for an object through func_802627A0_de at the object's position with its velocity (none when the object is inactive) and a uniform scale; kind 0x40C instead starts at the camera with no velocity and, once spawned, follows the camera's target through func_802833D0_de, and kinds 0x474 to 0x477 attach to the host's partner effect for active flagged hosts, otherwise the effect is started through func_80262C88_de. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Source {
    unsigned char active;
    char pad1[7];
    Vec3f position;
    s32 id;
    char pad18[4];
    Vec3f velocity;
} Source;

typedef struct Host {
    unsigned char type;
    char pad1[0x100 - 1];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    struct Effect *partner;
} Host;

typedef struct Effect {
    char pad0[0x6C];
    f32 scale;
    char pad70[0x1D8 - 0x70];
    s32 target;
    char pad1DC[0x2A0 - 0x1DC];
    Vec3f offset;
    char pad2AC[0x11E8 - 0x2AC];
    struct Effect *child;
} Effect;

typedef struct Spawn {
    Vec3f position;
    s32 kind;
    f32 size;
} Spawn;

typedef struct Camera {
    char pad0[0xE4];
    Vec3f position;
    Vec3f offset;
} Camera;

extern Camera *D_80103FCC;
extern char D_80131150;
extern Effect *func_802627A0_de(void *system, s32 kind, s32 id, Vec3f position, s32 arg4, Vec3f velocity, Vec3f scale, s32 arg11);
extern s32 func_802833D0_de(Host *host);
extern void func_80262C88_de(Effect *effect);

void func_8026851C_de(Source *source, Host *host, s32 unused, Spawn spawn) {
    Vec3f scale;
    Vec3f velocity;
    Effect *effect;
    Effect *partner;

    if (source->active == 0) {
        velocity.x = 0;
        velocity.y = 0;
        velocity.z = 0;
    } else {
        velocity = source->velocity;
    }
    spawn.position = source->position;
    scale.x = spawn.size;
    scale.y = spawn.size;
    scale.z = spawn.size;
    if (spawn.kind == 0x40C) {
        spawn.position = D_80103FCC->position;
        velocity.x = 0;
        velocity.y = 0;
        velocity.z = 0;
    }
    effect = func_802627A0_de(&D_80131150, spawn.kind, source->id, spawn.position, 0, velocity, scale, 0);
    if (effect == 0) {
        return;
    }
    if (spawn.kind == 0x40C) {
        effect->target = func_802833D0_de(host);
        effect->offset.x = D_80103FCC->offset.x;
        effect->offset.y = D_80103FCC->offset.y;
        effect->offset.z = D_80103FCC->offset.z;
    } else if ((unsigned)(spawn.kind - 0x474) < 4) {
        if (host->type == 1 && (host->flags & 0x300000)) {
            partner = host->partner;
            if (partner != 0) {
                partner->child = effect;
                effect->scale = partner->scale;
            }
        } else {
            func_80262C88_de(effect);
        }
    }
}
