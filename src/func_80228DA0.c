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

    player = *(char **) ((char *) game + 0x20);
    pulled = 0;
    if (player == 0) {
        goto done;
    }
    velocity = (Vec3 *) ((char *) object + 0x1C);
    zero = 0.0f;
    base = (&D_800C7D00)[1];
    for (; player != 0; player = *(char **) (player + 0x16E0)) {
        if (*(s32 *) (player + 0x5D0) == 0) {
            continue;
        }
        zoomed = 0;
        if (*(f32 *) (player + 0x11FC) > zero) {
            zoomed = 1;
        }
        if (!zoomed) {
            continue;
        }
        func_80271FD8(&dir, (Vec3 *) (player + 0x1200), (Vec3 *) ((char *) object + 8));
        dist = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
        func_802720EC(&dir);
        pulled = 1;
        if (D_800C7D08 < dist) {
            strength = D_800C7D0C / dist;
            if (D_800D2988 < base) {
                strength *= D_800D2988;
            }
            if (*(s32 *) (player + 0x120C) == 0) {
                strength = -strength;
            }
            heading = *(Vec3 *) ((char *) object + 0x1C);
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
        dir = *(Vec3 *) ((char *) object + 0x1C);
        func_802720EC(&dir);
        *(Vec3 *) ((char *) object + 0x174) = dir;
    }
}
