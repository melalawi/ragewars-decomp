#include "basetypes.h"

/* Returns the rotation quaternion that tilts the up axis onto a polygon's unit normal (recomputed from its edges into D_80115E10 and normalised into D_80115E20 whenever the polygon differs from the last one, straight up for no polygon), recording the half-angle sine in D_80115DEC and giving the identity when the normal is vertical. Adapted from func_802756F8 with the cached polygon normal of func_80275854 replacing func_80275120 and the default normals written through their separate cells. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Vec4f {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4f;

typedef struct Polygon {
    char pad0[2];
    u16 flags;
    Vec3f *v0;
    Vec3f *v1;
    Vec3f *v2;
} Polygon;

extern Polygon *D_800D2638;
extern Polygon *D_800D263C;
extern Vec3f D_80115E10;
extern f32 D_80115E14;
extern s32 D_80115E18;
extern Vec3f D_80115E20;
extern f32 D_80115E24;
extern s32 D_80115E28;
extern f32 D_80115DEC;
extern void func_80271FD8(Vec3f *out, Vec3f *a, Vec3f *b);
extern void func_80272088(Vec3f *out, Vec3f *a, Vec3f *b);
extern void func_802720EC(Vec3f *v);
extern void func_8027200C(Vec3f *out, Vec3f *in, f32 scale);
extern f32 func_802BC380(f32);
extern f32 func_80274640(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);

static inline void edge(Vec3f *out, Vec3f *a, Vec3f *b) {
    func_80271FD8(out, a, b);
}

static inline void normalize_copy(Vec3f *out, Vec3f *in) {
    *out = *in;
    func_802720EC(out);
}

Vec4f *func_80275480(Vec4f *out, Polygon *polygon) {
    Vec3f normal;
    Vec3f up;
    Vec3f axis;
    Vec4f result;
    Vec3f edge0;
    Vec3f edge1;
    f32 one;
    f32 len;
    f32 angle;
    f32 scale;

    if (polygon == 0) {
        *(s32 *)&D_80115E20 = 0;
        D_80115E28 = 0;
        D_80115E24 = 1.0f;
    } else if (polygon != D_800D263C) {
        if (polygon == 0) {
            *(s32 *)&D_80115E10 = 0;
            D_80115E18 = 0;
            D_80115E14 = 1.0f;
        } else if (polygon != D_800D2638) {
            edge(&edge0, polygon->v1, polygon->v0);
            edge(&edge1, polygon->v2, polygon->v1);
            func_80272088(&D_80115E10, &edge0, &edge1);
        }
        D_800D2638 = polygon;
        normalize_copy(&D_80115E20, &D_80115E10);
    }
    one = 1.0f;
    D_800D263C = polygon;
    normal = D_80115E20;
    up.x = 0.0f;
    up.y = one;
    up.z = 0.0f;
    func_80272088(&axis, &up, &normal);
    len = func_802BC380(axis.x * axis.x + axis.y * axis.y + axis.z * axis.z);
    if (len == 0.0f) {
        result.z = 0.0f;
        result.y = 0.0f;
        result.x = 0.0f;
        result.w = one;
    } else {
        func_8027200C(&axis, &axis, one / len);
        angle = func_80274640(up.x * normal.x + up.y * normal.y + up.z * normal.z);
        angle *= 0.5f;
        scale = func_802BC200(angle);
        result.x = axis.x * scale;
        result.y = axis.y * scale;
        result.z = axis.z * scale;
        D_80115DEC = scale;
        result.w = func_802BB630(angle);
    }
    *out = result;
    return out;
}
