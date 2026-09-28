/* Tests a ray against a polygon: intersects the ray from 0x44 to 0x50 with the polygon's plane through
 * func_802412C0 and accepts a parameter nearer than the ray's current nearest hit, also allowing a slightly negative
 * one (above -D_800D0648 * D_800C87C0 scaled by the ray's 0x80 factor) except for kind 7 and types 5 and
 * 6; the hit point is then placed with func_80272038 and must lie inside the polygon (func_802414E4). On a
 * hit the polygon record is optionally kept as the ray's nearest hit at 0xB0. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 type;
    s32 pad4;
    s32 kind;
    char padC[0xC0];
    f32 t;
    Vec3 hit;
} Polygon;

typedef struct {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    char pad5C[0x24];
    f32 slack;
    char pad84[0x2C];
    Polygon nearest;
} Ray;

extern f32 D_800C87C0;
extern f32 D_800D0648;
extern s32 func_802412C0(Polygon *, Vec3 *, Vec3 *, f32 *);
extern void func_80272038(Vec3 *, f32, Vec3 *, Vec3 *);
extern s32 func_802414E4(Polygon *, Vec3 *);

static inline s32 accepts(Ray *ray, Polygon *poly) {
    if (poly->t <= 0.0f) {
        if (poly->kind == 7) {
            return 0;
        }
        if ((u32)(poly->type - 5) < 2) {
            return 0;
        }
        if (poly->t * ray->slack < -(D_800D0648 * D_800C87C0)) {
            return 0;
        }
    }
    if (poly->t >= ray->nearest.t) {
        return 0;
    }
    return 1;
}

s32 func_8023E8C4(Ray *ray, Polygon *poly, s32 keep) {
    if (func_802412C0(poly, &ray->start, &ray->end, &poly->t) == 0) {
        return 0;
    }
    if (accepts(ray, poly) == 0) {
        return 0;
    }
    func_80272038(&poly->hit, poly->t, &ray->start, &ray->end);
    if (func_802414E4(poly, &poly->hit) == 0) {
        return 0;
    }
    if (keep != 0) {
        ray->nearest = *poly;
    }
    return 1;
}
