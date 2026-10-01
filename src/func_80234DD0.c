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

typedef struct func_80234DD0_S1 func_80234DD0_S1;
typedef struct func_80234DD0_S2 func_80234DD0_S2;
typedef union func_80234DD0_S1_U260 { Vec3 v0; f32 v1; } func_80234DD0_S1_U260;
struct func_80234DD0_S1 {
    char pad0[0x70];
    f32 unk70;
    char pad70[0x74 - 0x70 - sizeof(f32)];
    f32 unk74;
    char pad74[0x78 - 0x74 - sizeof(f32)];
    f32 unk78;
    char pad78[0x7C - 0x78 - sizeof(f32)];
    s32 unk7C;
    char pad7C[0x260 - 0x7C - sizeof(s32)];
    func_80234DD0_S1_U260 unk260;
    char pad260[0x368 - 0x260 - sizeof(func_80234DD0_S1_U260)];
    f32 unk368;
    char pad368[0x36C - 0x368 - sizeof(f32)];
    f32 unk36C;
    char pad36C[0x370 - 0x36C - sizeof(f32)];
    f32 unk370;
    char pad370[0x374 - 0x370 - sizeof(f32)];
    f32 unk374;
    char pad374[0x378 - 0x374 - sizeof(f32)];
    f32 unk378;
    char pad378[0x37C - 0x378 - sizeof(f32)];
    f32 unk37C;
    char pad37C[0x528 - 0x37C - sizeof(f32)];
    f32 unk528;
    char pad528[0x530 - 0x528 - sizeof(f32)];
    f32 unk530;
};
struct func_80234DD0_S2 {
    char pad0[0x264];
    f32 unk264;
    char pad264[0x268 - 0x264 - sizeof(f32)];
    f32 unk268;
};

void func_80234DD0(char *camera) {
    Vec3 pts[5];
    Vec3 *out;
    f32 radius;
    f32 height;

    if (((func_80234DD0_S1 *)(camera))->unk7C == 0) {
        return;
    }
    if (D_801462E5 == 0) {
        radius = ((func_80234DD0_S1 *)(camera))->unk528 /
                 func_802BB630(((func_80234DD0_S1 *)(camera))->unk530 * ((func_80234DD0_S1 *)(camera))->unk70 * D_800C82F0[0]);
        pts[0].x = 0.0f;
        pts[0].y = 0.0f;
        pts[0].z = 0.0f;
        pts[1].x = radius * func_802BC200(((func_80234DD0_S1 *)(camera))->unk530 * ((func_80234DD0_S1 *)(camera))->unk70 * D_800C82F0[0]);
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
        pts[1].x = ((func_80234DD0_S1 *)(camera))->unk74 * D_800C82F0[1];
        pts[1].y = ((func_80234DD0_S1 *)(camera))->unk78 * D_800C82F0[1];
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
        radius = func_802BC380(pts[1].x * pts[1].x + pts[1].y * pts[1].y + pts[1].z * pts[1].z);
    }
    out = &((func_80234DD0_S1 *)(camera))->unk260.v0;
    func_802729B4(camera + 0x160, pts, out, 5);
    func_802975B0(camera + 0x2F0, out, out + 1, out + 2, out + 3, out + 4);
    func_802759C4(camera + 0x350, 5, out);
    height = radius * D_800C82F8;
    ((func_80234DD0_S1 *)(camera))->unk368 = ((func_80234DD0_S1 *)(camera))->unk260.v1 - radius;
    ((func_80234DD0_S1 *)(camera))->unk374 = ((func_80234DD0_S1 *)(camera))->unk260.v1 + radius;
    ((func_80234DD0_S1 *)(camera))->unk36C = ((func_80234DD0_S2 *)(camera))->unk264 - height;
    ((func_80234DD0_S1 *)(camera))->unk378 = ((func_80234DD0_S2 *)(camera))->unk264 + height;
    ((func_80234DD0_S1 *)(camera))->unk370 = ((func_80234DD0_S2 *)(camera))->unk268 - radius;
    ((func_80234DD0_S1 *)(camera))->unk37C = ((func_80234DD0_S2 *)(camera))->unk268 + radius;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3130_4 = 0.00872664712f;
const float unbake_rodata_800C3134_4 = 0.5f;
const float unbake_rodata_800C3138_4 = 1.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C82F0_4 = 0.00872664712f;
const float unbake_rodata_800C82F4_4 = 0.5f;
const float unbake_rodata_800C82F8_4 = 1.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C34B0_4 = 0.00872664712f;
const float unbake_rodata_800C34B4_4 = 0.5f;
const float unbake_rodata_800C34B8_4 = 1.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C34F0_4 = 0.00872664712f;
const float unbake_rodata_800C34F4_4 = 0.5f;
const float unbake_rodata_800C34F8_4 = 1.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3200_4 = 0.00872664712f;
const float unbake_rodata_800C3204_4 = 0.5f;
const float unbake_rodata_800C3208_4 = 1.5f;
#endif
