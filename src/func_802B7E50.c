#include "basetypes.h"

typedef struct {
    s16 f0;
    s32 f4;
    s16 f8;
} Params;

extern s32 func_802B51A4(void *, s16 *, s32);

typedef struct func_802B7E50_S1 func_802B7E50_S1;
struct func_802B7E50_S1 {
    char pad0[0x14];
    char unk14;
    char pad14[0x3C - 0x14 - sizeof(char)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
};

void func_802B7E50(void *arg0) {
    s32 base = ((func_802B7E50_S1 *)(arg0))->unk40;

    if (*(s32 *)(base + ((func_802B7E50_S1 *)(arg0))->unk3C * 0x30 + 0x28) == 0) {
        Params p;
        p.f0 = 0;
        p.f4 = base + ((func_802B7E50_S1 *)(arg0))->unk3C * 0x30;
        func_802B51A4(&((func_802B7E50_S1 *)(arg0))->unk14, (s16 *)&p, 0);
    }
}
