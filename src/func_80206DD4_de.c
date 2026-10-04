#include "common/types.h"
#include "span_1000/code_80206DD4.h"
#include "span_1000/code_8026565C.h"
#include "types.h"

/* Places a rider along its path for the frame: clamps the throttle to 0..1 (eased through func_80265714_de unless the segment is linear), offsets its base by the segment's rise and circle point, moves the rider there through func_80271FC8_de, adds a bob to its height (one wave or a sum of four detuned waves by the segment's bob mode), applies its shake offsets, turns the actor by the segment's yaw mode (interpolated, constant spin unless held, or constant spin) and, for free segments, snaps the actor to the ground through func_80275DD4_de and func_802761EC_de. */









extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);
extern void func_80271FC8_de(Vec3 *, f32, Vec3 *, Vec3 *);
extern f32 func_80275DD4_de(s32, f32, f32);
extern void func_802761EC_de(s32, f32);

void func_80206DD4_de(Actor_func_80206DD4_de *actor, Rider_func_80206DD4_de *rider) {
    Vec3 point;
    Segment_func_80206DD4_de *segment;
    f32 t;
    f32 phase;
    f32 amp;
    Vec3 *base;
    Actor_func_80206DD4_de *owner;

    t = rider->throttle;
    segment = (Segment_func_80206DD4_de *)(actor->track + 0x14);
    if (t < 0.0f) {
        t = 0.0f;
    } else if (t > 1.0f) {
        t = 1.0f;
    }
    if (segment->linear == 0) {
        t = func_80265714_de(t);
    }
    owner = actor;
    point = rider->base;
    base = &rider->base;
    point.y += segment->rise;
    if (segment->moving != 0) {
        point.x += segment->radius * func_802B7130_de(segment->angle);
        point.z += segment->radius * func_802B6560_de(segment->angle);
    }
    func_80271FC8_de(&rider->pos, t, base, &point);
    switch (segment->bobMode) {
    case 0:
        rider->pos.y += segment->bob * func_802B7130_de(rider->phase);
        break;
    case 1:
        phase = rider->phase;
        amp = 0.25f;
        rider->pos.y += segment->bob * (func_802B7130_de(phase) * amp);
        rider->pos.y += segment->bob * (func_802B7130_de(phase * 1.1f) * amp);
        rider->pos.y += segment->bob * (func_802B7130_de(phase * 1.2f) * amp);
        rider->pos.y += segment->bob * (func_802B7130_de(phase * 1.3f) * amp);
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
        func_802761EC_de(owner->model, func_80275DD4_de(owner->model, owner->x, owner->z) + rider->pos.y - owner->y);
    }
}
