#include "basetypes.h"

/* Places a rider along its path for the frame: clamps the throttle to 0..1 (eased through func_80265734 unless the segment is linear), offsets its base by the segment's rise and circle point, moves the rider there through func_80272038, adds a bob to its height (one wave or a sum of four detuned waves by the segment's bob mode), applies its shake offsets, turns the actor by the segment's yaw mode (interpolated, constant spin unless held, or constant spin) and, for free segments, snaps the actor to the ground through func_80275E44 and func_8027625C. */
typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[4];
    u16 moving;
    char pad6[0x22];
    u8 bobMode;
    u8 linear;
    u8 yawMode;
    char pad2B;
    f32 rise;
    f32 radius;
    f32 angle;
    char pad38[4];
    f32 yaw;
    char pad40[4];
    f32 bob;
} Segment;

typedef struct {
    char pad0[8];
    f32 x;
    f32 y;
    f32 z;
    s32 model;
    char *track;
    char pad1C[0x50];
    f32 yaw;
} Actor;

typedef struct {
    char pad0[0x3C];
    s32 flags;
    char pad40[0x14];
    Vec3 pos;
    char pad60[4];
    f32 throttle;
    char pad68[0x34];
    f32 baseYaw;
    Vec3 base;
    char padAC[0x7C];
    Vec3 shake;
    char pad134[8];
    f32 phase;
} Rider;

extern f32 func_80265734(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_80272038(Vec3 *, f32, Vec3 *, Vec3 *);
extern f32 func_80275E44(s32, f32, f32);
extern void func_8027625C(s32, f32);

void func_80206DD4(Actor *actor, Rider *rider) {
    Vec3 point;
    Segment *segment;
    f32 t;
    f32 phase;
    f32 amp;
    Vec3 *base;
    Actor *owner;

    t = rider->throttle;
    segment = (Segment *)(actor->track + 0x14);
    if (t < 0.0f) {
        t = 0.0f;
    } else if (t > 1.0f) {
        t = 1.0f;
    }
    if (segment->linear == 0) {
        t = func_80265734(t);
    }
    owner = actor;
    point = rider->base;
    base = &rider->base;
    point.y += segment->rise;
    if (segment->moving != 0) {
        point.x += segment->radius * func_802BC200(segment->angle);
        point.z += segment->radius * func_802BB630(segment->angle);
    }
    func_80272038(&rider->pos, t, base, &point);
    switch (segment->bobMode) {
    case 0:
        rider->pos.y += segment->bob * func_802BC200(rider->phase);
        break;
    case 1:
        phase = rider->phase;
        amp = 0.25f;
        rider->pos.y += segment->bob * (func_802BC200(phase) * amp);
        rider->pos.y += segment->bob * (func_802BC200(phase * 1.1f) * amp);
        rider->pos.y += segment->bob * (func_802BC200(phase * 1.2f) * amp);
        rider->pos.y += segment->bob * (func_802BC200(phase * 1.3f) * amp);
        break;
    }
    rider->pos.x += rider->shake.x;
    rider->pos.y += rider->shake.y;
    rider->pos.z += rider->shake.z;
    switch (segment->yawMode) {
    case 0:
        owner->yaw = rider->baseYaw + t * ((rider->baseYaw + segment->yaw) - rider->baseYaw);
        break;
    case 1:
        if (rider->flags & 0x400) {
            break;
        }
    case 2:
        owner->yaw += segment->yaw * 0.06666667f;
        break;
    }
    if (segment->moving == 0) {
        func_8027625C(owner->model, func_80275E44(owner->model, owner->x, owner->z) + rider->pos.y - owner->y);
    }
}
