#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80233920.h"
#include "types.h"
/* Rebuilds a camera's view volume when it is active: the eye and the four far corners at depth 0x528 come
 * either from the field of view 0x530 and aspect 0x70 (a perspective camera, radius the slant distance to
 * the far plane) or, while the global orthographic flag is set, from half the view extents 0x74 and 0x78
 * (radius the corner distance); the corners are transformed by the view matrix at 0x160 into 0x260, the
 * clip planes at 0x2F0 and the bounds at 0x350 are rebuilt from them, and a box around the eye of that
 * radius (half again as tall) is stored at 0x368. */



extern const f32 D_800C3200_de[];
extern const f32 D_800C3208_de;
extern u8 D_801462E5;


extern f32 func_802B72B0_de(f32);
extern void func_80272944_de(void *, Vec3 *, Vec3 *, s32);
extern void func_802965B0_de(void *, Vec3 *, Vec3 *, Vec3 *, Vec3 *, Vec3 *);
extern void func_80275954_de(void *, s32, Vec3 *);







void func_80234DE0_de(char *camera) {
    Vec3 pts[5];
    Vec3 *out;
    f32 radius;
    f32 height;

    if (((func_80234DD0_S1 *)(camera))->unk7C == 0) {
        return;
    }
    if (D_801462E5 == 0) {
        radius = ((func_80234DD0_S1 *)(camera))->unk528 /
                 func_802B6560_de(((func_80234DD0_S1 *)(camera))->unk530 * ((func_80234DD0_S1 *)(camera))->unk70 * D_800C3200_de[0]);
        pts[0].x = 0.0f;
        pts[0].y = 0.0f;
        pts[0].z = 0.0f;
        pts[1].x = radius * func_802B7130_de(((func_80234DD0_S1 *)(camera))->unk530 * ((func_80234DD0_S1 *)(camera))->unk70 * D_800C3200_de[0]);
        pts[1].y = pts[1].x / ((func_80234DD0_S1 *)(camera))->unk70;
        pts[1].z = -((func_80234DD0_S1 *)(camera))->unk528;
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
        pts[1].x = ((func_80234DD0_S1 *)(camera))->unk74 * D_800C3200_de[1];
        pts[1].y = ((func_80234DD0_S1 *)(camera))->unk78 * D_800C3200_de[1];
        pts[1].z = -((func_80234DD0_S1 *)(camera))->unk528;
        pts[2].x = -pts[1].x;
        pts[2].y = pts[1].y;
        pts[2].z = pts[1].z;
        pts[3].x = pts[1].x;
        pts[3].y = -pts[1].y;
        pts[3].z = pts[1].z;
        pts[4].x = -pts[1].x;
        pts[4].y = -pts[1].y;
        pts[4].z = pts[1].z;
        radius = func_802B72B0_de(pts[1].x * pts[1].x + pts[1].y * pts[1].y + pts[1].z * pts[1].z);
    }
    out = &((func_80234DD0_S1 *)(camera))->unk260.v0;
    func_80272944_de(camera + 0x160, pts, out, 5);
    func_802965B0_de(camera + 0x2F0, out, out + 1, out + 2, out + 3, out + 4);
    func_80275954_de(camera + 0x350, 5, out);
    height = radius * D_800C3208_de;
    ((func_80234DD0_S1 *)(camera))->unk368 = ((func_80234DD0_S1 *)(camera))->unk260.v1 - radius;
    ((func_80234DD0_S1 *)(camera))->unk374 = ((func_80234DD0_S1 *)(camera))->unk260.v1 + radius;
    ((func_80234DD0_S1 *)(camera))->unk36C = ((func_80234DD0_S2 *)(camera))->unk264 - height;
    ((func_80234DD0_S1 *)(camera))->unk378 = ((func_80234DD0_S2 *)(camera))->unk264 + height;
    ((func_80234DD0_S1 *)(camera))->unk370 = ((func_80234DD0_S2 *)(camera))->unk268 - radius;
    ((func_80234DD0_S1 *)(camera))->unk37C = ((func_80234DD0_S2 *)(camera))->unk268 + radius;
}
