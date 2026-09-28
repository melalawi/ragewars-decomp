#include "basetypes.h"

typedef struct Source {
    s32 pad0;
    s32 x;
    s32 pad8;
    s32 y;
    s32 z;
    s32 pad14;
    s32 a[16];
    s32 b[16];
    u8 c[16];
    u8 d[16];
    s32 e[16];
} Source;

typedef struct Dest {
    s32 x;
    s32 y;
    s32 z;
    s32 a[16];
    s32 b[16];
    u8 c[16];
    u8 d[16];
    s32 e[16];
} Dest;

void func_802B3A0C(Source *src, Dest *dst) {
    s32 i;

    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
    for (i = 0; i < 16; i++) {
        dst->a[i] = src->a[i];
        dst->b[i] = src->b[i];
        dst->c[i] = src->c[i];
        dst->d[i] = src->d[i];
        dst->e[i] = src->e[i];
    }
}
