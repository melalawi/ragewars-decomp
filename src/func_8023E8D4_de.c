#include "common/types.h"
#include "span_1000/code_8023CBB0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Tests a ray against a polygon: intersects the ray from 0x44 to 0x50 with the polygon's plane through
 * func_802412D0_de and accepts a parameter nearer than the ray's current nearest hit, also allowing a slightly negative
 * one (above -D_800D0648 * D_800C87C0 scaled by the ray's 0x80 factor) except for kind 7 and types 5 and
 * 6; the hit point is then placed with func_80271FC8_de and must lie inside the polygon (func_802414F4_de). On a
 * hit the polygon record is optionally kept as the ray's nearest hit at 0xB0. */









extern s32 func_802412D0_de(Polygon_func_8023E8D4_de *, Vec3 *, Vec3 *, f32 *);
extern void func_80271FC8_de(Vec3 *, f32, Vec3 *, Vec3 *);
extern s32 func_802414F4_de(Polygon_func_8023E8D4_de *, Vec3 *);

static inline s32 accepts(Ray_func_8023E8D4_de *ray, Polygon_func_8023E8D4_de *poly) {
    if (poly->t <= 0.0f) {
        if (poly->kind == 7) {
            return 0;
        }
        if ((u32)(poly->type - 5) < 2) {
            return 0;
        }
        if (poly->t * ray->slack < -(D_800CB408_de * D_800C36D0_de)) {
            return 0;
        }
    }
    if (poly->t >= ray->nearest.t) {
        return 0;
    }
    return 1;
}

s32 func_8023E8D4_de(Ray_func_8023E8D4_de *ray, Polygon_func_8023E8D4_de *poly, s32 keep) {
    if (func_802412D0_de(poly, &ray->start, &ray->end, &poly->t) == 0) {
        return 0;
    }
    if (accepts(ray, poly) == 0) {
        return 0;
    }
    func_80271FC8_de(&poly->hit, poly->t, &ray->start, &ray->end);
    if (func_802414F4_de(poly, &poly->hit) == 0) {
        return 0;
    }
    if (keep != 0) {
        ray->nearest = *poly;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3600_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87C0_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3980_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39C0_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36D0_4 = 10.2399998f;
#endif
