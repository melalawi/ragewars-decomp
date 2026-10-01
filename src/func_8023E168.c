/* Tests a ray against a vertical cylinder: projects the center onto the ray's horizontal direction from 0x44,
 * finds the entry parameter from the radius, accepts it under the same rules as func_8023E8C4, places the
 * hit with func_80272038 and optionally rejects hits above the top or below the bottom; when kept, the
 * polygon record takes the hit as its point with a horizontal normal away from the center and becomes the
 * ray's nearest hit. Adapted from func_8023E8C4 with its static acceptance helper.
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
    char padC[0x8];
    s32 flag;
    Vec3 point;
    char pad24[0x24];
    Vec3 normal;
    char pad54[0x78];
    f32 t;
    Vec3 hit;
} Polygon;

typedef struct {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    Vec3 dir;
    char pad68[0x18];
    f32 slack;
    char pad84[0x2C];
    Polygon nearest;
} Ray;

extern f32 D_800C8780[];
extern f32 D_800D0648;
extern s32 func_802412C0(Polygon *, Vec3 *, Vec3 *, f32 *);
extern void func_80272038(Vec3 *, f32, Vec3 *, Vec3 *);
extern f32 func_802BC380(f32);

static inline s32 accepts(Ray *ray, Polygon *poly) {
    if (poly->t <= 0.0f) {
        if (poly->kind == 7) {
            return 0;
        }
        if ((u32)(poly->type - 5) < 2) {
            return 0;
        }
        if (poly->t * ray->slack < -(D_800D0648 * D_800C8780[2])) {
            return 0;
        }
    }
    if (poly->t >= ray->nearest.t) {
        return 0;
    }
    return 1;
}

s32 func_8023E168(Ray *ray, Vec3 *center, f32 radius, f32 top, f32 bottom, s32 clip, Polygon *poly, s32 keep) {
    Vec3 delta;
    Vec3 dir;
    Vec3 perp;
    f32 len;
    f32 inv;
    f32 along;
    f32 disc;

    delta.x = center->x - ray->start.x;
    delta.z = center->z - ray->start.z;
    if (delta.x * ray->dir.x + delta.z * ray->dir.z < 0.0f) {
        return 0;
    }
    len = func_802BC380(ray->dir.x * ray->dir.x + ray->dir.z * ray->dir.z);
    if (len == 0.0f) {
        return 0;
    }
    inv = D_800C8780[1] / len;
    dir.x = ray->dir.x * inv;
    dir.z = ray->dir.z * inv;
    along = delta.x * dir.x + delta.z * dir.z;
    perp.x = delta.x - dir.x * along;
    perp.z = delta.z - dir.z * along;
    disc = radius * radius - (perp.x * perp.x + perp.z * perp.z);
    if (!(disc > 0.0f)) {
        return 0;
    }
    poly->t = (along - func_802BC380(disc)) * inv;
    if (accepts(ray, poly) != 0) {
        func_80272038(&poly->hit, poly->t, &ray->start, &ray->end);
        if (clip != 0 && (poly->hit.y > top || poly->hit.y < bottom)) {
            return 0;
        }
        if (keep != 0) {
            poly->flag = 1;
            poly->point = poly->hit;
            poly->normal.x = poly->point.x - center->x;
            poly->normal.y = 0.0f;
            poly->normal.z = poly->point.z - center->z;
            ray->nearest = *poly;
        }
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C35C4_4 = 1.0f;
const float unbake_rodata_800C35C8_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8784_4 = 1.0f;
const float unbake_rodata_800C8788_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3944_4 = 1.0f;
const float unbake_rodata_800C3948_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3984_4 = 1.0f;
const float unbake_rodata_800C3988_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3694_4 = 1.0f;
const float unbake_rodata_800C3698_4 = 10.2399998f;
#endif
