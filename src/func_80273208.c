#include "basetypes.h"

/* Builds an orientation matrix whose third row is the given direction: the first row is the cross product of the up vector D_800C97B4 with it, or the X axis when the direction is within the vertical thresholds, the second row is the cross product of the first row with it, all three rows are normalised and the rest is identity. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Mtx {
    Vec3f right;
    f32 m03;
    Vec3f up;
    f32 m13;
    Vec3f forward;
    f32 m23;
    f32 m30;
    f32 m31;
    f32 m32;
    f32 m33;
} Mtx;

extern Vec3f D_800C97B0[2];
extern f32 D_800C99D0;
typedef struct { f32 unk0; } func_80273208_G2;
extern func_80273208_G2 D_800C99D8;
extern f32 D_800C99DC;
extern f32 D_800C99E0;
extern void func_80272088(Vec3f *out, Vec3f *a, Vec3f *b);
extern void func_802720EC(Vec3f *v);

typedef struct func_80273208_S1 func_80273208_S1;
struct func_80273208_S1 {
    char pad0[0x4];
    Vec3f unk4;
};

void func_80273208(Mtx *m, Vec3f *direction) {
    Vec3f up;

    up = ((func_80273208_S1 *)(D_800C97B0))->unk4;
    if (direction->y < 0.0f ? (&D_800C99D0)[1] <= -direction->y : D_800C99D8.unk0 <= direction->y) {
        m->right.y = 0;
        m->right.z = 0;
        m->right.x = D_800C99DC;
    } else {
        func_80272088(&m->right, &up, direction);
    }
    func_80272088(&m->up, &m->right, direction);
    m->forward = *direction;
    func_802720EC(&m->right);
    func_802720EC(&m->up);
    func_802720EC(&m->forward);
    m->m03 = m->m13 = m->m23 = m->m30 = m->m31 = m->m32 = 0.0f;
    m->m33 = D_800C99E0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C45F4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C45F8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C45FC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C97B4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C97B8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C97BC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C4974_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C4978_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C497C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C49B4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C49B8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C49BC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C46C4_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C46C8_4[] = {0x3F, 0x80, 0x00, 0x00};
const unsigned char unbake_rodata_800C46CC_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
