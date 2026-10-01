/* Tests a ray's horizontal segment against a rectangle (min x/z at 0 and 4, max x/z at 8 and 12): a start
 * point inside gives parameter 0; otherwise the crossing of the x edge facing the start is tried first and
 * then the z edge, each accepted when nearer than the ray's current nearest hit at 0x17C and landing within
 * the other axis's extent (using the ray's direction at 0x5C/0x64); the accepted parameter is stored and 1
 * is returned, 0 when the segment misses. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x44];
    Vec3 start;
    Vec3 end;
    Vec3 direction;
    char pad68[0x114];
    f32 nearest;
} Ray;

typedef struct {
    f32 minX;
    f32 minZ;
    f32 maxX;
    f32 maxZ;
} Rect;

s32 func_8023DDB4(Ray *ray, Rect *rect, f32 *t) {
    Vec3 *start;
    Vec3 *end;
    f32 a;
    f32 b;
    f32 param;
    Vec3 hit;

    start = &ray->start;
    end = &ray->end;
    if (rect->maxX >= start->x && rect->maxZ >= start->z && rect->minX <= start->x && rect->minZ <= start->z) {
        *t = 0.0f;
        return 1;
    }
    a = start->x;
    b = end->x;
    if (a != b) {
        if (a < b) {
            param = (rect->minX - a) / (b - a);
        } else {
            param = (a - rect->maxX) / (a - b);
        }
        if (param < ray->nearest) {
            hit.z = start->z + param * ray->direction.z;
            if (rect->minZ <= hit.z && hit.z <= rect->maxZ) {
                *t = param;
                return 1;
            }
        }
    }
    a = start->z;
    b = end->z;
    if (a == b) {
        return 0;
    }
    if (a < b) {
        param = (rect->minZ - a) / (b - a);
    } else {
        param = (a - rect->maxZ) / (a - b);
    }
    if (!(param < ray->nearest)) {
        return 0;
    }
    hit.x = start->x + param * ray->direction.x;
    if (rect->minX <= hit.x && hit.x <= rect->maxX) {
        *t = param;
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC750_24[] = {0x0042A5ACU, 0x0042A634U, 0x0042A690U, 0x0042A6C8U, 0x0042A74CU, 0x0042A858U, 0x0042A858U, 0x0042A7B8U, 0x0042A7FCU};
const float unbake_rodata_800DC774_4 = 0.00333333341f;
const float unbake_rodata_800DC778_4 = 100.0f;
const float unbake_rodata_800DC77C_4 = 150.0f;
const float unbake_rodata_800DC780_4 = 2.14748365e+09f;
const float unbake_rodata_800DC784_4 = 0.00333333341f;
const float unbake_rodata_800DC788_4 = 100.0f;
const float unbake_rodata_800DC78C_4 = 150.0f;
const float unbake_rodata_800DC790_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1878_E4[] = {0x004255E4U, 0x004255F4U, 0x00425844U, 0x0042562CU, 0x0042563CU, 0x0042564CU, 0x0042565CU, 0x0042566CU, 0x0042567CU, 0x0042568CU, 0x0042569CU, 0x004256ACU, 0x004256BCU, 0x004256CCU, 0x004256DCU, 0x004256ECU, 0x004256FCU, 0x0042570CU, 0x0042571CU, 0x0042572CU, 0x0042573CU, 0x0042574CU, 0x0042575CU, 0x0042576CU, 0x0042577CU, 0x0042578CU, 0x0042579CU, 0x004257ACU, 0x004257BCU, 0x004257CCU, 0x004257DCU, 0x00425844U, 0x004257ECU, 0x004257FCU, 0x00425844U, 0x00425844U, 0x0042580CU, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x00425844U, 0x0042582CU, 0x0042583CU, 0x00425844U, 0x00425844U, 0x00425844U, 0x0042581CU};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E2984_10[] = {0x80, 0x0D, 0x0D, 0xC0, 0x80, 0x0D, 0x65, 0x84, 0x80, 0x0D, 0xB1, 0x48, 0x80, 0x0D, 0xEF, 0x04};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDED4_C[] = {0x80, 0x0D, 0x16, 0x14, 0x80, 0x0D, 0x69, 0x00, 0x80, 0x0D, 0xAD, 0x38};
#elif defined(VERSION_DE)
const float unbake_rodata_800DCC70_4 = (-10000.0f);
const float unbake_rodata_800DCC74_4 = (-20000.0f);
#endif
