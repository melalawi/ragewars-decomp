/* Evaluates the position keyframe track 1 of the current record's resource at time t: holds the
   first or last key's position outside the track, is zero when the track is empty, and otherwise
   blends the surrounding keys' positions linearly with the vector scale and add helpers. Vector
   counterpart of func_8040170C. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    char pad0[4];
    s32 resource;
} Record;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 pad;
    f32 time;
} Key;

extern Record *D_800E2830;
extern f32 D_800E0B58;

extern s32 *func_8028FD94(s32 resource, s32 index);
extern void func_8027200C(Vec3f *out, Vec3f *in, f32 scale);
extern void func_80271FA4(Vec3f *out, Vec3f *a, Vec3f *b);

Vec3f func_80401564(f32 t) {
    s32 *track;
    Key *key;
    s32 count;
    f32 u;
    Vec3f result;
    Vec3f a;
    Vec3f b;

    track = func_8028FD94(D_800E2830->resource, 1);
    count = track[1];
    key = (Key *)(track + 2);
    if (count == 0) {
        result.x = 0.0f;
        result.y = 0.0f;
        result.z = 0.0f;
        return result;
    } else if (t <= key[0].time) {
        result.x = key[0].x;
        result.y = key[0].y;
        result.z = key[0].z;
        return result;
    } else if (key[count - 1].time <= t) {
        result.x = key[count - 1].x;
        result.y = key[count - 1].y;
        result.z = key[count - 1].z;
        return result;
    } else {
        while (key->time < t) {
            key++;
        }
        u = (t - key[-1].time) / (key->time - key[-1].time);
        a.x = key[-1].x;
        a.y = key[-1].y;
        a.z = key[-1].z;
        b.x = key->x;
        b.y = key->y;
        b.z = key->z;
        func_8027200C(&a, &a, D_800E0B58 - u);
        func_8027200C(&b, &b, u);
        func_80271FA4(&result, &a, &b);
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DB7D8_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E0B58_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED1A8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8368_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DCB28_4 = 1.0f;
#endif
