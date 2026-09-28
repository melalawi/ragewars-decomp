#include "basetypes.h"

extern char D_800C9068;
extern f32 D_800C9070;
extern f32 D_800C9074;
extern s16 D_8010BFA0[];

typedef struct Record {
    s32 index;
    char pad04[4];
    s32 f08;
    s32 f0C;
    char pad10[4];
    s32 f14;
    char pad18[0x14];
    f32 f2C;
    char pad30[4];
    f32 f34;
    s16 f38;
    s16 f3A;
    char pad3C[4];
    s32 f40;
    char pad44[0x14];
    s32 f58;
    s32 f5C;
    char pad60[0x44];
    s32 fA4;
    char padA8[4];
    s32 fAC;
    s32 owner;
    s32 fB4;
    f32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    char padC8[4];
} Record;

void func_8025B778(s32 *arg0, s32 arg1) {
    s32 i;
    s32 idx;
    f32 t;
    f32 p;
    s32 off;
    Record *rec;
    f32 k1;
    f32 k2;
    f32 k3;
    s32 negone;
    s32 one;

    i = 0;
    k1 = *(f32 *)((char *)&D_800C9068 + 4);
    k2 = D_800C9070;
    *arg0 = arg1;
    do {
        t = (f32)i * k1;
        p = t * t * t * t * t * k2;
        idx = 0x5A - i;
        i += 1;
        D_8010BFA0[idx] = (s16)(s32)p;
    } while (i < 0x5B);

    negone = -1;
    i = 0;
    k3 = D_800C9074;
    one = 1;
    off = i;
    do {
        rec = (Record *)((u32)off + (u32)arg0);
        rec = (Record *)((char *)rec + 4);
        rec->index = i;
        i += 1;
        rec->owner = arg1;
        rec->f0C = negone;
        rec->f08 = negone;
        rec->f3A = (s16)negone;
        rec->f38 = 0;
        rec->f40 = negone;
        rec->f14 = 0;
        rec->f2C = k3;
        rec->f58 = 0;
        rec->f5C = 0;
        rec->f34 = k3;
        rec->fA4 = 0;
        rec->fAC = 0;
        rec->fB4 = negone;
        rec->fB8 = k3;
        rec->fBC = 0;
        rec->fC0 = 0;
        rec->fC4 = one;
        off += 0xCC;
    } while (i < 0x11);
}
