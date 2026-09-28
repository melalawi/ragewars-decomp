/* Evaluates keyframe track 1 of the current record's resource at time t by linear interpolation
   between the surrounding keys (holding the end values outside the track, zero when empty), then
   stretches the result about the margin D_800E2848 as v * (2m + 1) - m and clamps it to 0..1.
   Linear, clamped counterpart of func_8040184C. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 resource;
} Record;

typedef struct {
    char pad0[0xC];
    f32 value;
    f32 time;
} Key;

extern Record *D_800E2830;
extern f32 D_800E2848;
extern f32 D_800E0B58;
extern f32 D_800E0B60;
#define ONE (*(&D_800E0B58 + 1))

extern s32 *func_8028FD94(s32 resource, s32 index);

f32 func_8040170C(f32 t) {
    s32 *track;
    Key *key;
    s32 count;
    f32 u;
    f32 v;

    track = func_8028FD94(D_800E2830->resource, 1);
    count = track[1];
    key = (Key *)(track + 2);
    if (count == 0) {
        v = 0.0f;
    } else if (t <= key[0].time) {
        v = key[0].value;
    } else if (key[count - 1].time <= t) {
        v = key[count - 1].value;
    } else {
        while (key->time < t) {
            key++;
        }
        u = (t - key[-1].time) / (key->time - key[-1].time);
        v = key[-1].value * (ONE - u) + key->value * u;
    }
    v *= 2.0f * D_800E2848 + D_800E0B60;
    v -= D_800E2848;
    if (D_800E0B60 < v) {
        v = D_800E0B60;
    }
    if (v < 0.0f) {
        v = 0.0f;
    }
    return v;
}
