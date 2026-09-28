/* Returns how strongly a blast at a position with a radius affects an actor: finds the shield covering the position (the held carrier shield D_801041F0 of the actor for an object target other than the two 0x402/0x404 types, otherwise func_8024B05C's shield in D_80110570), reports it, scales by the shield factor unless friendly fire is off for team damage, and when falloff is asked returns zero for an invulnerable player's untouched full hit, zero beyond the radius plus the actor's width, or the scale times one minus the distance to the actor's body over that reach. */
#include "basetypes.h"

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Triple {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct Shield {
    char pad0[0x68];
    f32 factor;
} Shield;

typedef struct Carrier {
    struct Actor *owner;
    char pad4[0x10];
    s32 slot;
    Shield shield;
} Carrier;

typedef struct Player {
    char pad0[0x122C];
    s32 flags;
} Player;

typedef struct Actor {
    char pad0[8];
    Vec3f position;
    char pad14[0x70 - 0x14];
    f32 height;
    char pad74[0x100 - 0x74];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    Player *player;
} Actor;

typedef struct Target {
    u8 kind;
    char pad1[3];
    u16 type;
} Target;

extern f32 D_800C9528;
extern f32 D_800C9530;
extern f32 D_800C9534;
extern u8 D_801462E5;
extern Carrier D_801041F0;
extern Shield D_80110570;

extern s32 func_8024B05C(Actor *, Vec3f, Shield *);
extern f32 func_8024D274(Actor *);
extern f32 func_8024D388(Actor *);
extern f32 func_80272768(Vec3f *, Vec3f *);

f32 func_802676FC(Actor *self, Target *target, Vec3f position, f32 radius, s32 falloff, s32 flags, Shield **found) {
    Player *player;
    s32 shielded;
    s32 scaled;
    s32 special;
    Shield *shield;
    f32 scale;
    f32 bottom;
    f32 top;
    f32 reach;
    f32 distance;
    Vec3f body;

    special = 0;
    shielded = 1;
    player = 0;
    scale = *(&D_800C9528 + 1);
    scaled = 1;
    if (self->flags & 0x300000) {
        player = self->player;
    }
    if (D_801462E5 != 0 && (flags & 0x200)) {
        shielded = 0;
    }
    if (target->kind == 2) {
        if (target->type == 0x404 || target->type == 0x402) {
            special = 1;
        }
        if (target->kind == 2 && D_801041F0.owner == self && D_801041F0.slot != -1 && !special) {
            shield = &D_801041F0.shield;
            falloff = 0;
            goto have;
        }
    }
    shield = func_8024B05C(self, position, &D_80110570) ? &D_80110570 : 0;
have:
    *found = shield;
    if (shielded && shield != 0) {
        scale *= shield->factor;
    }
    if (falloff != 0) {
        if (player != 0 && (player->flags & 2) && scale == D_800C9530 && (flags & 0x200)) {
            scale = 0.0f;
        } else {
            body = self->position;
            bottom = self->position.y + self->height;
            top = bottom + func_8024D274(self);
            if (top < position.y) {
                body.y = top;
            } else if (position.y < bottom) {
                body.y = bottom;
            } else {
                body.y = position.y;
            }
            reach = radius + func_8024D388(self);
            distance = func_80272768(&position, &body);
            if (reach < distance) {
                return 0.0f;
            }
            if (scaled) {
                scale *= D_800C9534 - distance / reach;
            }
        }
    }
    return scale;
}
