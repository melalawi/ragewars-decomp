/* Adds packed per-axis byte offsets to each entry of a vertex list. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 deltas[1];
} Table;

extern Table *func_8028FD94(s32, s32);

void func_80278BAC(s32 arg0, s32 count, Vec3f *vtx) {
    Table *t;
    s32 zero;
    s32 i;
    s32 *d;
    s32 w;
    s32 dx;
    s32 dy;
    s32 dz;

    t = func_8028FD94(arg0, 1);
    if (t->unk4 != 0) {
        zero = 0;
        i = zero;
        d = t->deltas;
        if (count > zero) {
            do {
                w = d[i];
                dx = ((w & 0xFF0000) << 8) >> 23;
                dy = ((w << 16) >> 24) * 2;
                dz = (w << 24) >> 23;
                vtx[i].x += (f32)dx;
                vtx[i].y += (f32)dy;
                vtx[i].z += (f32)dz;
                i++;
            } while (i < count);
        }
    }
}
