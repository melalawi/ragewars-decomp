#include "common/types.h"
#include "span_1000/code_8023CBB0.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Tests a ray against a polygon with a radius: intersects the ray from 0x44 to 0x50 with the polygon's plane
 * through func_802412D0_de and accepts a parameter nearer than the ray's nearest hit, also allowing a slightly
 * negative one (above -D_800D0648 * D_800C87C0[1] scaled by the ray's 0x80 factor) except for kind 7 and
 * types 5 and 6; the hit point is then placed with func_80271FC8_de and tested against the polygon with the
 * given point and radius through func_80241614_de. On a hit the polygon record is optionally kept as the ray's
 * nearest hit. Adapted from func_8023E8D4_de with the radius test and the slack constant. */









extern s32 func_802412D0_de(Polygon_func_8023E8D4_de *, Vec3 *, Vec3 *, f32 *);
extern void func_80271FC8_de(Vec3 *, f32, Vec3 *, Vec3 *);
extern s32 func_80241614_de(Polygon_func_8023E8D4_de *, Vec3 *, f32, Vec3 *);




static inline s32 accepts(Ray_func_8023E8D4_de *ray, Polygon_func_8023E8D4_de *poly) {
    if (poly->t <= 0.0f) {
        if (poly->kind == 7) {
            return 0;
        }
        if ((u32)(poly->type - 5) < 2) {
            return 0;
        }
        if (poly->t * ray->slack < -(D_800CB408_de * ((func_802077F4_S2 *)(&D_800C36D0_de))->unk4)) {
            return 0;
        }
    }
    if (poly->t >= ray->nearest.t) {
        return 0;
    }
    return 1;
}

s32 func_8023EA44_de(Ray_func_8023E8D4_de *ray, Polygon_func_8023E8D4_de *poly, Vec3 *point, f32 radius, s32 keep) {
    if (func_802412D0_de(poly, &ray->start, &ray->end, &poly->t) == 0) {
        return 0;
    }
    if (accepts(ray, poly) == 0) {
        return 0;
    }
    func_80271FC8_de(&poly->hit, poly->t, &ray->start, &ray->end);
    if (func_80241614_de(poly, point, radius, &poly->hit) == 0) {
        return 0;
    }
    if (keep != 0) {
        ray->nearest = *poly;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3604_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87C4_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3984_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39C4_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36D4_4 = 10.2399998f;
#endif
