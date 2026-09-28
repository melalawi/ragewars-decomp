#include "basetypes.h"

typedef struct Vector3f {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

extern f32 D_800C99B8[];

void func_80272A80(void *arg0, void *arg1, Vector3f *arg2) {
    char *m = (char *)arg0;
    char *v = (char *)arg1;
    f32 w;
    f32 scale;

    arg2->x = (*(f32 *)(m + 0x0) * *(f32 *)(v + 0x0))
                       + (*(f32 *)(m + 0x10) * *(f32 *)(v + 0x4))
                       + (*(f32 *)(m + 0x20) * *(f32 *)(v + 0x8))
                       + *(f32 *)(m + 0x30);
    arg2->y = (*(f32 *)(m + 0x4) * *(f32 *)(v + 0x0))
                       + (*(f32 *)(m + 0x14) * *(f32 *)(v + 0x4))
                       + (*(f32 *)(m + 0x24) * *(f32 *)(v + 0x8))
                       + *(f32 *)(m + 0x34);
    arg2->z = (*(f32 *)(m + 0x8) * *(f32 *)(v + 0x0))
                       + (*(f32 *)(m + 0x18) * *(f32 *)(v + 0x4))
                       + (*(f32 *)(m + 0x28) * *(f32 *)(v + 0x8))
                       + *(f32 *)(m + 0x38);
    w = (*(f32 *)(m + 0xC) * *(f32 *)(v + 0x0))
        + (*(f32 *)(m + 0x1C) * *(f32 *)(v + 0x4))
        + (*(f32 *)(m + 0x2C) * *(f32 *)(v + 0x8))
        + *(f32 *)(m + 0x3C);
    if (w != 0.0f) {
        scale = D_800C99B8[1] / w;
        arg2->x = arg2->x * scale;
        arg2->y = arg2->y * scale;
        arg2->z = arg2->z * scale;
    }
}
