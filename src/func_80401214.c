/* Samples the current record's clip sequence at time t: walks clip list 0 accumulating each
   clip's end time (the time of its last 0x24-byte key) until the clip spanning t is found or the
   ends are passed, then evaluates that clip's keys through func_80400E50 at the time into the
   clip, frozen at the clip start when the clip's flag word is set. */
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
    char pad0[0x1C];
    f32 time;
    char pad20[4];
} Key;

extern Record *D_800E2830;

extern s32 *func_8028FD94(s32 *node, s32 index);
extern Vec3f func_80400E50(Key *keys, s32 count, f32 t);

Vec3f func_80401214(f32 t) {
    s32 i;
    s32 idx;
    s32 count;
    Key *keys;
    s32 *clip;
    f32 start;
    f32 end;

    start = 0.0f;
    count = 0;
    keys = 0;
    idx = 0;
    i = 0;
    end = start;
    while (i < *func_8028FD94((s32 *)D_800E2830->resource, 0)) {
        idx = i;
        clip = func_8028FD94(func_8028FD94(func_8028FD94((s32 *)D_800E2830->resource, 0), idx), 0);
        count = clip[1];
        keys = (Key *)(clip + 2);
        start = end;
        end = start + keys[count - 1].time;
        if (idx == 0 && t <= start) {
            break;
        }
        if (idx == *func_8028FD94((s32 *)D_800E2830->resource, 0) - 1 && end < t) {
            break;
        }
        i = idx + 1;
        if (start <= t && t <= end) {
            break;
        }
    }
    if (*func_8028FD94(func_8028FD94(func_8028FD94((s32 *)D_800E2830->resource, 0), idx), 2) != 0) {
        t = start;
    }
    return func_80400E50(keys, count, t - start);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800EEE50_8[] = {0x80, 0x15, 0xCE, 0xB0, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA010_8[] = {0x80, 0x15, 0x6E, 0xB0, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DE7E0_8[] = {0x80, 0x14, 0xCE, 0xB0, 0x00, 0x00, 0x00, 0x00};
#endif
