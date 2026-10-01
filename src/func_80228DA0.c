/* Bends a moving object toward the players' zoom anchors: for every player in the list from 0x20
   with its effect enabled at 0x5D0 while zoomed in at 0x11FC, it takes the direction from the object
   to the anchor at 0x1200 and, beyond squared distance D_800C7D08, scales it by D_800C7D0C over the
   squared distance (times the frame step D_800D2988 when that is below D_800C7D00[1]), reversed for
   zoom mode 0 at 0x120C, and weighted by D_800C7D10 times D_800C7D00[1] plus how closely it lines up
   with the object's velocity, adding it to the velocity at 0x1C; when any player acted the normalised
   velocity is stored at 0x174. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3;

extern f32 D_800C7D00;
extern f32 D_800C7D08;
extern f32 D_800C7D0C;
extern f32 D_800C7D10;
extern f32 D_800D2988;
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern void func_8027200C(Vec3 *, Vec3 *, f32);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);

typedef struct func_80228DA0_S1 func_80228DA0_S1;
typedef struct func_80228DA0_S2 func_80228DA0_S2;
typedef struct func_80228DA0_S3 func_80228DA0_S3;
struct func_80228DA0_S1 {
    char pad0[0x20];
    char* unk20;
};
struct func_80228DA0_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x1C - 0x8 - sizeof(Vec3)];
    Vec3 unk1C;
    char pad1C[0x174 - 0x1C - sizeof(Vec3)];
    Vec3 unk174;
};
struct func_80228DA0_S3 {
    char pad0[0x5D0];
    s32 unk5D0;
    char pad5D0[0x11FC - 0x5D0 - sizeof(s32)];
    f32 unk11FC;
    char pad11FC[0x1200 - 0x11FC - sizeof(f32)];
    Vec3 unk1200;
    char pad1200[0x120C - 0x1200 - sizeof(Vec3)];
    s32 unk120C;
    char pad120C[0x16E0 - 0x120C - sizeof(s32)];
    char* unk16E0;
};

void func_80228DA0(void *game, void *object) {
    Vec3 dir;
    Vec3 heading;
    char *player;
    s32 pulled;
    s32 zoomed;
    Vec3 *velocity;
    f32 base;
    f32 dist;
    f32 strength;
    f32 align;
    f32 zero;

    player = ((func_80228DA0_S1 *)(game))->unk20;
    pulled = 0;
    if (player == 0) {
        goto done;
    }
    velocity = &((func_80228DA0_S2 *)(object))->unk1C;
    zero = 0.0f;
    base = (&D_800C7D00)[1];
    for (; player != 0; player = ((func_80228DA0_S3 *)(player))->unk16E0) {
        if (((func_80228DA0_S3 *)(player))->unk5D0 == 0) {
            continue;
        }
        zoomed = 0;
        if (((func_80228DA0_S3 *)(player))->unk11FC > zero) {
            zoomed = 1;
        }
        if (!zoomed) {
            continue;
        }
        func_80271FD8(&dir, &((func_80228DA0_S3 *)(player))->unk1200, &((func_80228DA0_S2 *)(object))->unk8);
        dist = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
        func_802720EC(&dir);
        pulled = 1;
        if (D_800C7D08 < dist) {
            strength = D_800C7D0C / dist;
            if (D_800D2988 < base) {
                strength *= D_800D2988;
            }
            if (((func_80228DA0_S3 *)(player))->unk120C == 0) {
                strength = -strength;
            }
            heading = ((func_80228DA0_S2 *)(object))->unk1C;
            func_802720EC(&heading);
            align = dir.x;
            align *= heading.x;
            align += dir.y * heading.y;
            align += dir.z * heading.z;
            if (align < zero) {
                align = -align;
            }
            align += base;
            align *= D_800C7D10;
            strength *= align;
            func_8027200C(&dir, &dir, strength);
        }
        func_80271FA4(velocity, velocity, &dir);
    }
done:
    if (pulled) {
        dir = ((func_80228DA0_S2 *)(object))->unk1C;
        func_802720EC(&dir);
        ((func_80228DA0_S2 *)(object))->unk174 = dir;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2B44_4 = 1.0f;
const float unbake_rodata_800C2B48_4 = 9.99999975e-06f;
const float unbake_rodata_800C2B4C_4 = 100000000.0f;
const float unbake_rodata_800C2B50_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7D04_4 = 1.0f;
const float unbake_rodata_800C7D08_4 = 9.99999975e-06f;
const float unbake_rodata_800C7D0C_4 = 100000000.0f;
const float unbake_rodata_800C7D10_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2C14_4 = 1.0f;
const float unbake_rodata_800C2C18_4 = 9.99999975e-06f;
const float unbake_rodata_800C2C1C_4 = 100000000.0f;
const float unbake_rodata_800C2C20_4 = 0.5f;
#endif
