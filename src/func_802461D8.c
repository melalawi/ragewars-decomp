/* Moves an object horizontally to (x, z) through the collision mover func_80243A80 while keeping its
 * height above the ground: the velocity at 0x1C is zeroed for the move and the global D_801040D0 is
 * preserved, then both are restored. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 w[20];
} InstanceHdr;

extern s32 D_801040D0;
extern f32 func_80275E44(s32, f32, f32);
extern s32 func_80243A80(InstanceHdr *, Vec3, s32 *);

void func_802461D8(InstanceHdr *arg0, f32 x, f32 z) {
    char *o = (char *)arg0;
    Vec3 saved;
    Vec3 pos;
    s32 keep;
    s32 *mask = &D_801040D0;
    f32 height;

    height = *(f32 *)(o + 0xC) - func_80275E44(*(s32 *)(o + 0x14), *(f32 *)(o + 0x8), *(f32 *)(o + 0x10));
    saved = *(Vec3 *)(o + 0x1C);
    *(f32 *)(o + 0x1C) = *(f32 *)(o + 0x20) = *(f32 *)(o + 0x24) = 0.0f;
    pos.x = x;
    pos.y = *(f32 *)(o + 0xC);
    pos.z = z;
    keep = *mask;
    func_80243A80(arg0, pos, mask);
    *mask = keep;
    *(Vec3 *)(o + 0x1C) = saved;
    *(f32 *)(o + 0xC) = func_80275E44(*(s32 *)(o + 0x14), *(f32 *)(o + 0x8), *(f32 *)(o + 0x10)) + height;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF06C_44[] = {0x00, 0x42, 0x18, 0xF4, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x0E, 0x90, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x18, 0xC4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x1A, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x42, 0x19, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x04, 0x2E, 0x65};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E39B4_C[] = {0x80, 0x0D, 0x74, 0x90, 0x80, 0x0D, 0x74, 0x94, 0x80, 0x0D, 0x74, 0x98};
#elif defined(VERSION_EU)
const float unbake_rodata_800EDBF4_4 = 4.0f;
const float unbake_rodata_800EDBF8_4 = 100.0f;
const float unbake_rodata_800EDBFC_4 = 255.0f;
const float unbake_rodata_800EDC00_4 = 150.0f;
const float unbake_rodata_800EDC04_4 = 4.0f;
const float unbake_rodata_800EDC08_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8CD0_4 = 10240.0f;
const float unbake_rodata_800E8CD4_4 = 0.0174532942f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDFF8_18[] = {0x0043B564U, 0x0043B564U, 0x0043B574U, 0x0043B574U, 0x0043B584U, 0x0043B594U};
#endif
