#include "basetypes.h"

typedef struct {
    s16 f0;
    s32 f4;
    s16 f8;
} Params;

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B7E50(void *arg0) {
    s32 base = *(s32 *)((char *)arg0 + 0x40);

    if (*(s32 *)(base + *(s32 *)((char *)arg0 + 0x3C) * 0x30 + 0x28) == 0) {
        Params p;
        p.f0 = 0;
        p.f4 = base + *(s32 *)((char *)arg0 + 0x3C) * 0x30;
        func_802B51A4((char *)arg0 + 0x14, (s16 *)&p, 0);
    }
}
