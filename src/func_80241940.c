/* Builds the eight world-space corners of an object's collision box: the extents come from the shape at
 * 0x18 + 0x14 (half width and depth, or the radius for a cylinder of kind 1), grown by the optional
 * attachment's sizes from func_8024D388, func_8024D274 and func_8024E410; the box is turned by the object's
 * rest matrix from 0x2A4 and its heading 0x6C composed with its orientation at 0x5C, moved to its position
 * and, for shapes flagged 1, its bottom corners are dropped to the ground height of the given floor. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct {
    s32 flags;
    u16 kind;
    f32 radius;
    f32 halfWidth;
    f32 height;
    f32 halfDepth;
    Vec3 center;
} Shape;

extern f32 D_80115DEC;
extern f32 func_8024D388(s32);
extern f32 func_8024D274(s32);
extern f32 func_8024E410(s32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern void func_802736B8(f32 *, s32);
extern void func_80274108(Quat *, Quat *, Quat *);
extern void func_802742B4(Quat *, f32 *);
extern void func_8026F690(f32 *, f32 *, f32 *);
extern void func_802734B8(f32 *, s32, s32, s32);
extern void func_802729B4(f32 *, Vec3 *, Vec3 *, s32);

void func_80241940(char *obj, Vec3 *corners, char *floor, s32 attachment) {
    f32 matrix[16];
    f32 rest[16];
    f32 turn[16];
    Quat yaw;
    Quat orient;
    Shape *shape;
    char *anim;
    f32 grow;
    f32 lift;
    f32 extra;
    f32 extentX;
    f32 extentZ;
    f32 height;
    f32 minX;
    f32 maxX;
    f32 minZ;
    f32 maxZ;
    f32 top;
    f32 bottom;
    f32 diff;
    f32 sine;
    f32 angle;

    anim = obj + 0x170;
    shape = (Shape *)(*(char **)(obj + 0x18) + 0x14);
    if (attachment != 0) {
        grow = func_8024D388(attachment);
        lift = func_8024D274(attachment);
        extra = func_8024E410(attachment);
    } else {
        lift = 0.0f;
        grow = 0.0f;
        extra = 0.0f;
    }
    diff = extra - lift;
    if (shape->kind != 1) {
        extentX = shape->halfWidth * 0.5f + grow * 0.5f;
        extentZ = shape->halfDepth * 0.5f + grow * 0.5f;
        height = shape->height + extra;
    } else {
        extentZ = shape->radius + grow;
        height = shape->height + extra;
        extentX = extentZ;
    }
    bottom = shape->center.y + diff;
    minX = shape->center.x - extentX;
    top = shape->center.y + height;
    maxZ = shape->center.z + extentZ;
    maxX = shape->center.x + extentX;
    minZ = shape->center.z - extentZ;
    corners[0].x = minX;
    corners[0].y = top;
    corners[0].z = maxZ;
    corners[1].x = maxX;
    corners[1].y = top;
    corners[1].z = maxZ;
    corners[2].x = maxX;
    corners[2].y = top;
    corners[2].z = minZ;
    corners[3].x = minX;
    corners[3].y = top;
    corners[3].z = minZ;
    corners[4].x = minX;
    corners[4].y = bottom;
    corners[4].z = maxZ;
    corners[5].x = maxX;
    corners[5].y = bottom;
    corners[5].z = maxZ;
    corners[6].x = maxX;
    corners[6].y = bottom;
    corners[6].z = minZ;
    corners[7].x = minX;
    corners[7].y = bottom;
    corners[7].z = minZ;
    func_802736B8(rest, *(s32 *)(anim + 0x134));
    sine = func_802BC200(*(f32 *)(obj + 0x6C) * 0.5f);
    yaw.x = 0.0f;
    yaw.y = sine;
    yaw.z = 0.0f;
    angle = *(f32 *)(obj + 0x6C) * 0.5f;
    D_80115DEC = sine;
    yaw.w = func_802BB630(angle);
    func_80274108(&orient, &yaw, (Quat *)(obj + 0x5C));
    func_802742B4(&orient, turn);
    func_8026F690(matrix, rest, turn);
    func_802734B8(matrix, *(s32 *)(obj + 0x8), *(s32 *)(obj + 0xC), *(s32 *)(obj + 0x10));
    func_802729B4(matrix, corners, corners, 8);
    if (shape->flags & 1) {
        bottom = *(f32 *)(floor + 0x54) - *(f32 *)(floor + 0x10);
        lift = bottom;
        corners[4].y = bottom;
        corners[5].y = bottom;
        corners[6].y = bottom;
        corners[7].y = bottom;
    }
}
