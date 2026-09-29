#include "basetypes.h"

/* Returns how strongly a listener at 0x128 hears a source at 0x34: one minus the squared distance over the squared range D_800D0D10 (zero beyond it), shaped by the source's curve at 0x44 as the eighth power, the square or the plain value. */

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern f32 D_800D0D10;
extern f32 D_800C9088[];

typedef struct func_8025C388_S1 func_8025C388_S1;
typedef struct func_8025C388_S2 func_8025C388_S2;
struct func_8025C388_S1 {
    char pad0[0x34];
    Vec3 unk34;
    char pad34[0x44 - 0x34 - sizeof(Vec3)];
    s8 unk44;
};
struct func_8025C388_S2 {
    char pad0[0x128];
    Vec3 unk128;
};

f32 func_8025C388(char *source, char *listener)
{
    Vec3 *a = &((func_8025C388_S1 *)(source))->unk34;
    Vec3 *b = &((func_8025C388_S2 *)(listener))->unk128;
    f32 dx = a->x - b->x;
    f32 dy;
    f32 dz;
    f32 d;
    f32 t;

    dx *= dx;
    dy = a->y - b->y;
    dy *= dy;
    dz = a->z - b->z;
    dz *= dz;
    d = dx + dy + dz;
    if (d >= D_800D0D10) {
        t = 0.0f;
    } else {
        t = D_800C9088[1] - d / D_800D0D10;
    }
    switch (((func_8025C388_S1 *)(source))->unk44) {
    case 2:
        return t;
    case 0:
        t *= t;
        t *= t;
    case 1:
        return t * t;
    default:
        return 0.0f;
    }
}
