#include "basetypes.h"

extern s32 func_802B5410(s32, s32, void *, s32, s32);
extern void func_802B3B80(s32 a, s32 *b);

extern f32 D_800C90E8;

typedef struct {
    s32 a;
    s32 b;
    s8 c;
    s8 pad[3];
    s32 d;
    s32 e;
    s32 f;
    s32 g;
} Params;

void func_8025D864(void *arg0, s32 arg1) {
    char *o = (char *)arg0;
    Params p;
    s32 result;
    s32 t;

    *(s32 *)(o + 0x0) = arg1;
    *(s32 *)(o + 0x18) = 0x10;
    *(s32 *)(o + 0x28) = -1;
    *(s32 *)(o + 0x1C) = 0;
    p.a = 0x14;
    p.b = 0xC0;
    p.c = 0x14;
    t = *(s32 *)(o + 0x0);
    p.e = 0;
    p.f = 0;
    p.g = 0;
    p.d = t + 0x1DA8;
    result = func_802B5410(0, 0, (void *)(*(s32 *)(o + 0x0) + 0x1DA8), 1, 0x7C);
    *(s32 *)(o + 0x14) = result;
    func_802B3B80(result, (s32 *)&p);
    result = func_802B5410(0, 0, (void *)(*(s32 *)(o + 0x0) + 0x1DA8), 1, 0xF8);
    {
        f32 k0 = D_800C90E8;
        f32 k1 = *(f32 *)((char *)&D_800C90E8 + 4);
        *(s32 *)(o + 0x10) = result;
        *(s32 *)(o + 0x24) = 0x32;
        *(s32 *)(o + 0x38) = 0;
        *(f32 *)(o + 0x30) = k0;
        *(f32 *)(o + 0x34) = k1;
        *(f32 *)(o + 0x3C) = k0;
        *(f32 *)(o + 0x40) = k0;
    }
}
