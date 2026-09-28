#include "basetypes.h"

typedef struct {
    s16 f0;
    s32 f4;
    s16 f8;
} Params;

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B7FE0(void *arg0, s16 arg1) {
    Params p;
    s32 acc;

    acc = *(s32 *)((char *)arg0 + 0x40);
    p.f0 = 3;
    acc += *(s32 *)((char *)arg0 + 0x3C) * 0x30;
    p.f8 = arg1;
    p.f4 = acc;
    func_802B51A4((char *)arg0 + 0x14, (s16 *)&p, 0);
}
