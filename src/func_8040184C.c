/* Evaluates keyframe track 3 of the current record's resource at time t: before the first key or
   after the last it holds that key's value, otherwise it finds the surrounding keys and blends
   their values with the smoothstep weight 3u^2 - 2u^3; an empty track yields D_800E0B60[1]. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 resource;
} Record;

typedef struct {
    f32 value;
    f32 time;
} Key;

extern Record *D_800E2830;
extern f32 D_800E0B60[];
extern f32 D_800E0B68;
#define THREE D_800E0B68
#define ONE (*(&D_800E0B68 + 1))

extern s32 *func_8028FD94(s32 resource, s32 index);

f32 func_8040184C(f32 t) {
    s32 *track;
    Key *key;
    s32 count;
    s32 i;
    f32 u;

    track = func_8028FD94(D_800E2830->resource, 3);
    key = (Key *)(track + 2);
    count = track[1];
    for (i = 0; i < count; i++) {
    }
    if (count == 0) {
        return D_800E0B60[1];
    }
    if (t <= key[0].time) {
        return key[0].value;
    }
    if (key[count - 1].time <= t) {
        return key[count - 1].value;
    }
    while (key->time < t) {
        key++;
    }
    u = (t - key[-1].time) / (key->time - key[-1].time);
    u = u * (u * THREE) - 2.0f * u * u * u;
    return key[-1].value * (ONE - u) + key->value * u;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DB7E4_4 = 47.5f;
const float unbake_rodata_800DB7E8_4 = 3.0f;
const float unbake_rodata_800DB7EC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E0B64_4 = 47.5f;
const float unbake_rodata_800E0B68_4 = 3.0f;
const float unbake_rodata_800E0B6C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED1B4_4 = 47.5f;
const float unbake_rodata_800ED1B8_4 = 3.0f;
const float unbake_rodata_800ED1BC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8374_4 = 47.5f;
const float unbake_rodata_800E8378_4 = 3.0f;
const float unbake_rodata_800E837C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DCB34_4 = 47.5f;
const float unbake_rodata_800DCB38_4 = 3.0f;
const float unbake_rodata_800DCB3C_4 = 1.0f;
#endif
