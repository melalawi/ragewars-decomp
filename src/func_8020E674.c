#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct InstanceHdr {
    s32 w[5];
} InstanceHdr;

typedef struct Actor {
    InstanceHdr *instance;
    u8 pad004[0x254];
    f32 field258;
    u8 pad25C[4];
    f32 field260;
    f32 field264;
    u8 pad268[0x10];
    f32 field278;
} Actor;

typedef struct World {
    u8 pad000[0xFC];
    s32 state;
} World;

extern f32 D_800C6F30;
extern f32 D_800C6F34;
extern f32 D_800C6F38;
extern char D_80103FD0;
extern World *D_80103FCC;

extern f32 func_802BB630(f32 arg0);
extern f32 func_802BC200(f32 arg0);
extern s32 func_80244494(InstanceHdr *arg0, Vec3 current, Vec3 desired,
                          void *collisionInfo);

s32 func_8020E674(Actor *actor, f32 scale, f32 lateral) {
    Vec3 current;
    Vec3 desired;
    Vec3 delta;
    Vec3 acceleration;
    f32 invDuration;
    f32 total;
    f32 segment;
    f32 elapsed;
    f32 accelScale;
    f32 accelX;
    f32 accelY;
    f32 accelZ;
    s32 count;
    s32 i;

    if (actor == 0 || actor->field264 == 0.0f) {
        return 0;
    }

    invDuration = D_800C6F30 / actor->field264;
    delta.x = (actor->field258 - *(f32 *)((char *)actor->instance + 8)) * invDuration;
    delta.x *= scale * func_802BB630(actor->field278);
    delta.z = (actor->field260 - *(f32 *)((char *)actor->instance + 0x10)) * invDuration;
    delta.z *= scale * func_802BB630(actor->field278);
    delta.y = scale * func_802BC200(actor->field278);

    acceleration.x = 0.0f;
    acceleration.y = lateral;
    acceleration.z = 0.0f;

    total = (scale * func_802BB630(actor->field278)) / actor->field264;
    if (total == 0.0f) {
        return 0;
    }
    count = (s32)(total * D_800C6F34);
    if (count == 0) {
        return 0;
    }

    segment = total / (f32)count;
    current = *(Vec3 *)((char *)actor->instance + 8);
    accelScale = segment * segment * D_800C6F38;
    accelX = acceleration.x * accelScale;
    accelY = acceleration.y * accelScale;
    accelZ = acceleration.z * accelScale;

    desired.x = current.x + delta.x * segment + accelX;
    desired.y = current.y + delta.y * segment + accelY;
    desired.z = current.z + delta.z * segment + accelZ;

    elapsed = segment;

    if (func_80244494(actor->instance, current, desired, &D_80103FD0) != 0 &&
        (unsigned)(D_80103FCC->state - 7) >= 2) {
        return 1;
    }

    i = 0;
    delta.x += acceleration.x * elapsed;
    delta.y += acceleration.x * elapsed;
    delta.z += acceleration.x * elapsed;
    elapsed += segment;

    while (i < count) {
        current = desired;
        desired.x = current.x + delta.x * elapsed + accelX;
        desired.y = current.y + delta.y * elapsed + accelY;
        desired.z = current.z + delta.z * elapsed + accelZ;

        if (func_80244494(actor->instance, current, desired, &D_80103FD0) != 0 &&
            (unsigned)(D_80103FCC->state - 7) >= 2) {
            return 1;
        }

        delta.x += acceleration.x * elapsed;
        delta.y += acceleration.x * elapsed;
        delta.z += acceleration.x * elapsed;
        elapsed += segment;
        i++;
    }
    return 0;
}
