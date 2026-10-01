/* Tests a swept sphere against a polygon: shifts the ray from 0x44 to 0x50 back along the polygon normal by
 * the radius (plus an optional offset), intersects the shifted ray with the polygon's plane through
 * func_802412C0 under the same acceptance rules as func_8023E8C4, requires the shifted hit point to pass
 * func_802406C0 at that radius, then places the hit on the unshifted ray and optionally keeps the polygon
 * as the ray's nearest hit. Adapted from func_8023E8C4 with its static acceptance helper.
 */
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
    char padC[0x3C];
    Vec3 normal;
    char pad54[0x78];
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

extern f32 D_800C8780;
extern f32 D_800D0648;
extern s32 func_802412C0(Polygon *, Vec3 *, Vec3 *, f32 *);
extern void func_80272038(Vec3 *, f32, Vec3 *, Vec3 *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);
extern s32 func_802406C0(Polygon *, Vec3 *, f32);

static inline s32 accepts(Ray *ray, Polygon *poly) {
    if (poly->t <= 0.0f) {
        if (poly->kind == 7) {
            return 0;
        }
        if ((u32)(poly->type - 5) < 2) {
            return 0;
        }
        if (poly->t * ray->slack < -(D_800D0648 * D_800C8780)) {
            return 0;
        }
    }
    if (poly->t >= ray->nearest.t) {
        return 0;
    }
    return 1;
}

s32 func_8023DF60(Ray *ray, Vec3 *offset, f32 radius, Polygon *poly, s32 keep) {
    Vec3 start;
    Vec3 end;
    Vec3 shift;
    Vec3 hit;

    if (offset != 0) {
        func_8027200C(&shift, &poly->normal, -radius);
        func_80271FA4(&shift, &shift, offset);
    } else {
        shift.x = 0.0f;
        shift.y = 0.0f;
        shift.z = 0.0f;
    }
    func_80271FA4(&start, &ray->start, &shift);
    func_80271FA4(&end, &ray->end, &shift);
    if (func_802412C0(poly, &start, &end, &poly->t) == 0) {
        return 0;
    }
    if (accepts(ray, poly) == 0) {
        return 0;
    }
    func_80272038(&hit, poly->t, &start, &end);
    if (func_802406C0(poly, &hit, radius) == 0) {
        return 0;
    }
    func_80272038(&poly->hit, poly->t, &ray->start, &ray->end);
    if (keep != 0) {
        ray->nearest = *poly;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C35C0_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8780_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3940_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3980_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3690_4 = 10.2399998f;
#endif
