#include "common/types.h"
#include "span_1000/code_8023CBB0.h"
#include "types.h"
/* Tests a ray against an axis-aligned box: a ray starting inside the box hits at parameter 0; otherwise
 * each axis whose start and end differ gives the parameter where the ray reaches the box face it
 * approaches, and the first such hit nearer than the ray's current nearest hit whose point lies within the
 * face's other two extents is written out. Returns whether the box was hit. */







s32 func_8023DAA0_de(Ray *ray, Box *box, f32 *out) {
    Vec3 hit;
    Vec3 *start;
    Vec3 *end;
    f32 t;

    start = &ray->start;
    end = &ray->end;
    if (box->max.x >= start->x && box->max.y >= start->y && box->max.z >= start->z && box->min.x <= start->x &&
        box->min.y <= start->y && box->min.z <= start->z) {
        *out = 0.0f;
        return 1;
    }
    if (start->x != end->x) {
        if (start->x < end->x) {
            t = (box->min.x - start->x) / (end->x - start->x);
        } else {
            t = (start->x - box->max.x) / (start->x - end->x);
        }
        if (t < ray->nearest) {
            hit.y = start->y + t * ray->dir.y;
            hit.z = start->z + t * ray->dir.z;
            if (box->min.y <= hit.y && hit.y <= box->max.y && box->min.z <= hit.z && hit.z <= box->max.z) {
                *out = t;
                return 1;
            }
        }
    }
    if (start->y != end->y) {
        if (start->y < end->y) {
            t = (box->min.y - start->y) / (end->y - start->y);
        } else {
            t = (start->y - box->max.y) / (start->y - end->y);
        }
        if (t < ray->nearest) {
            hit.x = start->x + t * ray->dir.x;
            hit.z = start->z + t * ray->dir.z;
            if (box->min.x <= hit.x && hit.x <= box->max.x && box->min.z <= hit.z && hit.z <= box->max.z) {
                *out = t;
                return 1;
            }
        }
    }
    if (start->z != end->z) {
        if (start->z < end->z) {
            t = (box->min.z - start->z) / (end->z - start->z);
        } else {
            t = (start->z - box->max.z) / (start->z - end->z);
        }
        if (t < ray->nearest) {
            hit.x = start->x + t * ray->dir.x;
            hit.y = start->y + t * ray->dir.y;
            if (box->min.x <= hit.x && hit.x <= box->max.x && box->min.y <= hit.y && hit.y <= box->max.y) {
                *out = t;
                return 1;
            }
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DC73C_4 = 255.0f;
const float unbake_rodata_800DC740_4 = 4.0f;
const float unbake_rodata_800DC744_4 = 210.0f;
const float unbake_rodata_800DC748_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E16C8_C8[] = {0x00425070U, 0x00425070U, 0x00425080U, 0x00425080U, 0x00425090U, 0x00425090U, 0x004250A0U, 0x004250A0U, 0x004250B0U, 0x004250B0U, 0x004250C0U, 0x004250C0U, 0x004250D0U, 0x004250D0U, 0x004250E0U, 0x004250E0U, 0x004250F0U, 0x004250F0U, 0x00425100U, 0x00425100U, 0x00425110U, 0x00425110U, 0x00425120U, 0x00425120U, 0x00425120U, 0x00425130U, 0x00425130U, 0x00425130U, 0x00425140U, 0x00425140U, 0x00425140U, 0x00425150U, 0x00425150U, 0x00425150U, 0x00425160U, 0x00425160U, 0x00425160U, 0x00425170U, 0x00425170U, 0x00425170U, 0x00425180U, 0x00425180U, 0x00425180U, 0x00425180U, 0x00425180U, 0x00425190U, 0x00425190U, 0x00425190U, 0x00425190U, 0x00425190U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E2814_10[] = {0x80, 0x0D, 0x0C, 0xE0, 0x80, 0x0D, 0x63, 0x68, 0x80, 0x0D, 0xB0, 0x68, 0x80, 0x0D, 0xEE, 0x24};
const unsigned char unbake_rodata_800E2824_10[] = {0x80, 0x0D, 0x0C, 0xE4, 0x80, 0x0D, 0x63, 0x74, 0x80, 0x0D, 0xB0, 0x6C, 0x80, 0x0D, 0xEE, 0x28};
const unsigned char unbake_rodata_800E2834_10[] = {0x80, 0x0D, 0x0C, 0xE8, 0x80, 0x0D, 0x63, 0x80, 0x80, 0x0D, 0xB0, 0x70, 0x80, 0x0D, 0xEE, 0x2C};
const unsigned char unbake_rodata_800E2844_10[] = {0x80, 0x0D, 0x0C, 0xEC, 0x80, 0x0D, 0x63, 0x8C, 0x80, 0x0D, 0xB0, 0x74, 0x80, 0x0D, 0xEE, 0x30};
const unsigned char unbake_rodata_800E2854_10[] = {0x80, 0x0D, 0x0C, 0xF0, 0x80, 0x0D, 0x63, 0x98, 0x80, 0x0D, 0xB0, 0x78, 0x80, 0x0D, 0xEE, 0x34};
const unsigned char unbake_rodata_800E2864_10[] = {0x80, 0x0D, 0x0C, 0xF4, 0x80, 0x0D, 0x63, 0xA4, 0x80, 0x0D, 0xB0, 0x7C, 0x80, 0x0D, 0xEE, 0x38};
const unsigned char unbake_rodata_800E2874_10[] = {0x80, 0x0D, 0x0C, 0xF8, 0x80, 0x0D, 0x63, 0xB0, 0x80, 0x0D, 0xB0, 0x80, 0x80, 0x0D, 0xEE, 0x3C};
const unsigned char unbake_rodata_800E2884_10[] = {0x80, 0x0D, 0x0C, 0xFC, 0x80, 0x0D, 0x63, 0xBC, 0x80, 0x0D, 0xB0, 0x84, 0x80, 0x0D, 0xEE, 0x40};
const unsigned char unbake_rodata_800E2894_10[] = {0x80, 0x0D, 0x0D, 0x00, 0x80, 0x0D, 0x63, 0xC8, 0x80, 0x0D, 0xB0, 0x88, 0x80, 0x0D, 0xEE, 0x44};
const unsigned char unbake_rodata_800E28A4_10[] = {0x80, 0x0D, 0x0D, 0x04, 0x80, 0x0D, 0x63, 0xD4, 0x80, 0x0D, 0xB0, 0x8C, 0x80, 0x0D, 0xEE, 0x48};
const unsigned char unbake_rodata_800E28B4_10[] = {0x80, 0x0D, 0x0D, 0x08, 0x80, 0x0D, 0x63, 0xE0, 0x80, 0x0D, 0xB0, 0x90, 0x80, 0x0D, 0xEE, 0x4C};
const unsigned char unbake_rodata_800E28C4_10[] = {0x80, 0x0D, 0x0D, 0x0C, 0x80, 0x0D, 0x63, 0xEC, 0x80, 0x0D, 0xB0, 0x94, 0x80, 0x0D, 0xEE, 0x50};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDEC8_C[] = {0x80, 0x0D, 0x16, 0x10, 0x80, 0x0D, 0x68, 0xFC, 0x80, 0x0D, 0xAD, 0x34};
#elif defined(VERSION_DE)
const double unbake_rodata_800DCC40_8 = 4294967296.0;
const float unbake_rodata_800DCC48_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC4C_4 = 1.0f;
const float unbake_rodata_800DCC50_4 = 255.0f;
const float unbake_rodata_800DCC54_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC58_4 = 255.0f;
const float unbake_rodata_800DCC5C_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC60_4 = 255.0f;
const float unbake_rodata_800DCC64_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC68_4 = 255.0f;
const float unbake_rodata_800DCC6C_4 = 2.14748365e+09f;
#endif
