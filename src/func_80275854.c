#include "basetypes.h"

/* Returns whether a polygon counts as a wall: without flag 0x2000 it returns its flag 8, and otherwise it takes the polygon's unit normal (recomputed from its edges into D_80115E10 and normalised into D_80115E20 whenever the polygon differs from the last one) and returns whether the normal's upward component is at most D_800C9AD8. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Polygon {
    char pad0[2];
    u16 flags;
    Vec3f *v0;
    Vec3f *v1;
    Vec3f *v2;
} Polygon;

extern f32 D_800C9AD0;
extern f32 D_800C9AD8;
extern Polygon *D_800D2638;
extern Polygon *D_800D263C;
extern Vec3f D_80115E10;
extern f32 D_80115E14;
extern s32 D_80115E18;
extern Vec3f D_80115E20;
extern void func_80271FD8(Vec3f *out, Vec3f *a, Vec3f *b);
extern void func_80272088(Vec3f *out, Vec3f *a, Vec3f *b);
extern void func_802720EC(Vec3f *v);

static inline void edge(Vec3f *out, Vec3f *a, Vec3f *b) {
    func_80271FD8(out, a, b);
}

static inline void normalize_copy(Vec3f *out, Vec3f *in) {
    *out = *in;
    func_802720EC(out);
}

s32 func_80275854(Polygon *polygon) {
    Vec3f up;
    Vec3f normal;
    Vec3f edge0;
    Vec3f edge1;

    if (polygon == 0) {
        return 0;
    }
    if (!(polygon->flags & 0x2000)) {
        return polygon->flags & 8;
    }
    up.x = 0.0f;
    up.y = *(&D_800C9AD0 + 1);
    up.z = 0.0f;
    if (polygon != D_800D263C) {
        if (polygon == 0) {
            *(s32 *)&D_80115E10 = 0;
            D_80115E14 = *(&D_800C9AD0 + 1);
            D_80115E18 = 0;
        } else if (polygon != D_800D2638) {
            edge(&edge0, polygon->v1, polygon->v0);
            edge(&edge1, polygon->v2, polygon->v1);
            func_80272088(&D_80115E10, &edge0, &edge1);
        }
        D_800D2638 = polygon;
        normalize_copy(&D_80115E20, &D_80115E10);
    }
    normal = D_80115E20;
    D_800D263C = polygon;
    if (normal.x * up.x + normal.y * up.y + normal.z * up.z <= D_800C9AD8) {
        return 1;
    }
    return 0;
}
