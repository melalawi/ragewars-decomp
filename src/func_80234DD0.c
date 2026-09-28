/* Rebuilds a camera's view volume when it is active: the eye and the four far corners at depth 0x528 come
 * either from the field of view 0x530 and aspect 0x70 (a perspective camera, radius the slant distance to
 * the far plane) or, while the global orthographic flag is set, from half the view extents 0x74 and 0x78
 * (radius the corner distance); the corners are transformed by the view matrix at 0x160 into 0x260, the
 * clip planes at 0x2F0 and the bounds at 0x350 are rebuilt from them, and a box around the eye of that
 * radius (half again as tall) is stored at 0x368. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern const f32 D_800C82F0[];
extern const f32 D_800C82F8;
extern u8 D_801462E5;
extern f32 func_802BB630(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BC380(f32);
extern void func_802729B4(void *, Vec3 *, Vec3 *, s32);
extern void func_802975B0(void *, Vec3 *, Vec3 *, Vec3 *, Vec3 *, Vec3 *);
extern void func_802759C4(void *, s32, Vec3 *);

void func_80234DD0(char *camera) {
    Vec3 pts[5];
    Vec3 *out;
    f32 radius;
    f32 height;

    if (*(s32 *)(camera + 0x7C) == 0) {
        return;
    }
    if (D_801462E5 == 0) {
        radius = *(f32 *)(camera + 0x528) /
                 func_802BB630(*(f32 *)(camera + 0x530) * *(f32 *)(camera + 0x70) * D_800C82F0[0]);
        pts[0].x = 0.0f;
        pts[0].y = 0.0f;
        pts[0].z = 0.0f;
        pts[1].x = radius * func_802BC200(*(f32 *)(camera + 0x530) * *(f32 *)(camera + 0x70) * D_800C82F0[0]);
        pts[1].y = pts[1].x / *(f32 *)(camera + 0x70);
        pts[1].z = -*(f32 *)(camera + 0x528);
        pts[2].x = -pts[1].x;
        pts[2].y = pts[1].y;
        pts[2].z = pts[1].z;
        pts[3].x = pts[1].x;
        pts[3].y = -pts[1].y;
        pts[3].z = pts[1].z;
        pts[4].x = -pts[1].x;
        pts[4].y = -pts[1].y;
        pts[4].z = pts[1].z;
    } else {
        pts[0].x = 0.0f;
        pts[0].y = 0.0f;
        pts[0].z = 0.0f;
        pts[1].x = *(f32 *)(camera + 0x74) * D_800C82F0[1];
        pts[1].y = *(f32 *)(camera + 0x78) * D_800C82F0[1];
        pts[1].z = -*(f32 *)(camera + 0x528);
        pts[2].x = -pts[1].x;
        pts[2].y = pts[1].y;
        pts[2].z = pts[1].z;
        pts[3].x = pts[1].x;
        pts[3].y = -pts[1].y;
        pts[3].z = pts[1].z;
        pts[4].x = -pts[1].x;
        pts[4].y = -pts[1].y;
        pts[4].z = pts[1].z;
        radius = func_802BC380(pts[1].x * pts[1].x + pts[1].y * pts[1].y + pts[1].z * pts[1].z);
    }
    out = (Vec3 *)(camera + 0x260);
    func_802729B4(camera + 0x160, pts, out, 5);
    func_802975B0(camera + 0x2F0, out, out + 1, out + 2, out + 3, out + 4);
    func_802759C4(camera + 0x350, 5, out);
    height = radius * D_800C82F8;
    *(f32 *)(camera + 0x368) = *(f32 *)(camera + 0x260) - radius;
    *(f32 *)(camera + 0x374) = *(f32 *)(camera + 0x260) + radius;
    *(f32 *)(camera + 0x36C) = *(f32 *)(camera + 0x264) - height;
    *(f32 *)(camera + 0x378) = *(f32 *)(camera + 0x264) + height;
    *(f32 *)(camera + 0x370) = *(f32 *)(camera + 0x268) - radius;
    *(f32 *)(camera + 0x37C) = *(f32 *)(camera + 0x268) + radius;
}
