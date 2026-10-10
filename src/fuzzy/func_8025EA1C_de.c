#include "types.h"

extern f32 D_800C4094_de;
extern f32 D_800C4098_de;
extern f32 D_800C40C8_de;
extern void *func_8028FDB4_de(void *, s32);
extern void func_80270AAC_de(f32 *out, f32 t, void *from, void *to);

typedef struct AnimTrack {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 length;
    /* 0x1C */ f32 rate;
} AnimTrack;

typedef struct AnimRef {
    /* 0x00 */ char pad0[0xC];
    /* 0x0C */ u32 span;
    /* 0x10 */ void **data;
} AnimRef;

typedef struct KeyIndex {
    /* 0x00 */ char pad0[0xA];
    /* 0x0A */ s16 key;
    /* 0x0C */ char padC[2];
} KeyIndex;

typedef struct PoseTable {
    s32 stride;
    char pad4[4];
    s16 pad8[2];
    s16 value[4];
} PoseTable;

/* Fills a four-float keyframe sample for an animation track: either the stored constant pose or an
 * interpolation between the two keys around the time. */
void func_8025EA1C_de(AnimRef *anim, s32 index, f32 time, f32 *out) {
    void *root;
    void *tracks;
    AnimTrack *track;
    f32 length;
    f32 rate;
    f32 position;
    s32 key;
    s32 first;
    s32 second;
    u8 *frames;
    s32 base;
    PoseTable *pose;

    root = *anim->data;
    tracks = func_8028FDB4_de(root, 5);
    track = func_8028FDB4_de(tracks, 0);
    key = ((KeyIndex *)((u8 *)func_8028FDB4_de(root, 1) + index * 4))->key;
    rate = track->rate;
    length = track->length;
    position = time * rate;
    if (key == -1) {
        u8 *table = func_8028FDB4_de(root, 2);
        s16 *entry = (s16 *)(table + index * *(s32 *)table + 8);

        out[0] = entry[6] * D_800C4094_de;
        out[1] = entry[7] * D_800C4094_de;
        out[2] = entry[8] * D_800C4094_de;
        out[3] = entry[9] * D_800C4094_de;
    } else {
        frames = func_8028FDB4_de(func_8028FDB4_de(root, 2), key);
        if (anim->span == 0xFFFF) {
            first = (position >= 0.0f ? (s32)position : (s32)position - ((f32)(s32)position != position));
            if (length <= (f32)first) {
                first = 0;
            }
            second = first + 1;
            if (length <= (f32)second) {
                second = 0;
            }
        } else {
            first = (position >= 0.0f ? (s32)position : (s32)position - ((f32)(s32)position != position));
            if (length - D_800C4098_de <= (f32)first) {
                first = (((f32)anim->span * rate) <= 0.0f ? (s32)((f32)anim->span * rate) : (s32)((f32)anim->span * rate) + ((f32)(s32)((f32)anim->span * rate) != ((f32)anim->span * rate)));
            }
            second = first + 1;
            if (length - D_800C40C8_de <= (f32)second) {
                second = (((f32)anim->span * rate) <= 0.0f ? (s32)((f32)anim->span * rate) : (s32)((f32)anim->span * rate) + ((f32)(s32)((f32)anim->span * rate) != ((f32)anim->span * rate)));
            }
        }
        func_80270AAC_de(out, position - (f32)(position >= 0.0f ? (s32)position : (s32)position - ((f32)(s32)position != position)), frames + first * 0x10, frames + second * 0x10);
    }
}

