/* Plays a sound effect for an actor at a position: snaps the position to the nearest registered emitter
 * in D_8013B364 when there is one, draws a random direction and (except for sound 0xBD7) scales it to a
 * velocity of 409.6, then starts the sound through func_8028FFB0 on D_80131600 with the actor's id and
 * the given volume. */
#include "basetypes.h"

typedef struct Vec3Words {
    s32 x;
    s32 y;
    s32 z;
} Vec3Words;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct SoundRequest {
    s32 kind;
    Vec3Words position;
    char pad[0x148];
    s32 owner;
    s32 flags;
} SoundRequest;

extern char D_80131600;
extern char D_8013B364;
extern f32 D_800C8DC0[];
extern s32 func_8020CB3C(void *, void *);
extern Vec3Words *func_8020C994(void *, s32);
extern void func_802720EC(Vec3f *);
extern void func_8027200C(void *, void *, f32);
extern s32 func_8028FFB0(s32, s32, s32, Vec3Words, Vec3Words, s32, f32);

typedef struct func_8024DBB0_S1 func_8024DBB0_S1;
struct func_8024DBB0_S1 {
    char pad0[0x14];
    s32 unk14;
};

void func_8024DBB0(void *actor, Vec3Words pos, s32 sound, f32 volume) {
    Vec3f up;
    Vec3f dir;
    Vec3Words velocity;
    Vec3Words at;
    SoundRequest request;
    Vec3Words *emitter;

    emitter = func_8020C994(&D_8013B364, func_8020CB3C(&D_8013B364, &pos));
    request.position = pos;
    at = request.position;
    request.owner = ((func_8024DBB0_S1 *)(actor))->unk14;
    if (emitter != 0) {
        at = *emitter;
    }
    up.x = 0.0f;
    up.y = D_800C8DC0[1];
    up.z = 0.0f;
    dir.x = dir.y = dir.z = up.x;
    func_802720EC(&dir);
    if (sound != 0xBD7) {
        func_8027200C(&velocity, &dir, 409.59998f);
    }
    func_8028FFB0((s32)&D_80131600, 0, sound, velocity, at, request.owner, volume);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3C04_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8DC4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3F84_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3FC4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3CD4_4 = 1.0f;
#endif
