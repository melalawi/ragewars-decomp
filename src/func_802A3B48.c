/* Rebuilds one morphing mesh's vertices from its two key frames. The blend weight eases in and out
   of the clock's position in the actor's track, and again of the actor's own position in it while
   that is still inside the track; every vertex is then the first frame's position carried that far
   toward the second's, its two texture coordinates are the mesh's own scales times the caller's
   scale and times a fade that steps once a vertex, and its shade is the blend of the vertex's two
   shades. While func_8026E340 holds, the shade is instead greyed: red and green are cleared and
   blue carries the blended sum of the three channels over three, as an unsigned divide. Written
   from the assembly: the second frame's key is taken before the first frame's sample is read so
   that it lives across that call, and the first shade is reached through its own pointer, which is
   what keeps the blend cursor itself in a register rather than the whole record being addressed
   four bytes on. */
#include "basetypes.h"

typedef struct {
    u8 a;
    u8 b;
    u8 g;
    u8 r;
} Shade;

typedef struct {
    Shade from;
    Shade to;
    u16 first;
    u16 second;
} Blend;

typedef struct {
    char pad0[0x14];
} Key;

typedef struct {
    s32 count;
    Blend *blends;
    Key *first;
    Key *second;
    void *firstFrame;
    void *secondFrame;
    f32 scaleS;
    f32 scaleT;
    f32 step;
} Morph;

typedef struct {
    s16 x;
    s16 y;
    s16 z;
    s16 flag;
    s16 s;
    s16 t;
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} Vtx;

typedef struct {
    char pad0[4];
    f32 span;
    f32 total;
} Track;

typedef struct {
    char pad0[8];
    Track *track;
    char pad12[0x18];
    f32 time;
} Actor;

typedef struct {
    char pad0[8];
    f32 time;
} Clock;

extern f32 func_802BB630(f32 turn);
extern s32 func_8026E340(void);
extern void func_8027200C(f32 *out, Key *key, void *frame);

void func_802A3B48(Actor *actor, Clock *clock, Vtx *out, f32 scale, Morph *morph) {
    f32 a[3];
    f32 b[3];
    f32 weight;
    f32 t;
    f32 fade;
    Blend *blend;
    Shade *from;
    Key *key;
    s32 count;
    u32 grey;
    s32 red;
    s32 green;
    s32 blue;

    weight = 0.5f - func_802BB630(clock->time / actor->track->total * 3.1415927f) * 0.5f;
    if (actor->time <= actor->track->span) {
        weight = weight * (0.5f - func_802BB630(actor->time / actor->track->span * 3.1415927f) * 0.5f);
    }
    fade = 0.0f;
    count = morph->count;
    blend = morph->blends;
    t = 1.0f - weight;
    while (--count != -1) {
        key = &morph->second[blend->second];
        func_8027200C(a, &morph->first[blend->first], morph->firstFrame);
        func_8027200C(b, key, morph->secondFrame);
        out->x = (s16) (a[0] + t * (b[0] - a[0]));
        out->y = (s16) (a[1] + t * (b[1] - a[1]));
        out->z = (s16) (a[2] + t * (b[2] - a[2]));
        out->s = (s16) (morph->scaleS * scale);
        out->t = (s16) (morph->scaleT * fade);
        from = &blend->from;
        if (func_8026E340() != 0) {
            blue = blend->from.b;
            green = blend->from.g;
            red = blend->from.r;
            grey = (f32) (blue + green + red)
                 + t * (f32) ((blend->to.b - blue) + (blend->to.g - green) + (blend->to.r - red));
            out->r = 0;
            out->g = 0;
            out->b = grey / 3;
            out->a = (u32) ((f32) from->a + t * (f32) (blend->to.a - from->a));
        } else {
            out->r = (u32) ((f32) blend->from.r + t * (f32) (blend->to.r - blend->from.r));
            out->g = (u32) ((f32) blend->from.g + t * (f32) (blend->to.g - blend->from.g));
            out->b = (u32) ((f32) blend->from.b + t * (f32) (blend->to.b - blend->from.b));
            out->a = (u32) ((f32) from->a + t * (f32) (blend->to.a - from->a));
        }
        blend++;
        out++;
        fade = fade + morph->step;
    }
}
