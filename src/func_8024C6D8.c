/* Applies a blast from a source to a body when an owner is given: the strength comes from the falloff table
 * D_800D06C0 indexed by the source's remaining charges, times 0.5 and 0.3 and the kind (-2 for kind 5);
 * the body's reversed velocity is placed in its offset transform, an impulse at the source position is
 * built by func_80272D70 and applied through func_8026F690, the velocity is restored onto the body, and
 * the source spends a charge when its owner matches. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x12];
    s8 charges;
    char pad13;
    s8 owner;
    char pad15[3];
    Vec3 position;
} Source;

typedef struct {
    char pad0[0x30];
    Vec3 velocity;
} Body;

extern f32 D_800D06C0[];
extern void func_8027302C(f32 *, Body *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_802734B8(void *, f32, f32, f32);
extern void func_80272D70(f32 *, f32, f32, f32, f32);
extern void func_8026F690(Body *, f32 *, f32 *);

void func_8024C6D8(s32 unused, Source *source, Body *body, s32 owner, s32 kind) {
    Vec3 velocity;
    Vec3 position;
    f32 impulse[16];
    f32 transform[16];
    f32 strength;
    f32 reverse;
    f32 multiplier;

    if (owner == 0) {
        return;
    }
    velocity.x = body->velocity.x;
    velocity.y = body->velocity.y;
    velocity.z = body->velocity.z;
    position = source->position;
    strength = D_800D06C0[25 - source->charges] * 0.5f;
    strength *= 0.3f;
    if (kind == 5) {
        strength *= -2.0f;
    } else {
        strength *= kind;
    }
    func_8027302C(transform, body);
    reverse = -1.0f;
    func_8027200C(&velocity, &velocity, reverse);
    func_802734B8(transform, velocity.x, velocity.y, velocity.z);
    func_80272D70(impulse, strength, position.x, position.y, position.z);
    func_8026F690(body, transform, impulse);
    func_8027200C(&velocity, &velocity, reverse);
    func_802734B8(body, velocity.x, velocity.y, velocity.z);
    if (source->owner == owner) {
        source->charges--;
    }
}
