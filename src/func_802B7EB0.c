#include "basetypes.h"

typedef struct {
    s16 f0;
    s32 f4;
    s8 f8;
} Params;

extern s32 func_802B51A4(void *, s16 *, s32);

typedef struct func_802B7EB0_S1 func_802B7EB0_S1;
struct func_802B7EB0_S1 {
    char pad0[0x14];
    char unk14;
    char pad14[0x3C - 0x14 - sizeof(char)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
};

void func_802B7EB0(void *arg0, s8 arg1) {
    Params p;
    s32 acc;

    acc = ((func_802B7EB0_S1 *)(arg0))->unk40;
    p.f0 = 8;
    acc += ((func_802B7EB0_S1 *)(arg0))->unk3C * 0x30;
    p.f8 = arg1;
    p.f4 = acc;
    func_802B51A4(&((func_802B7EB0_S1 *)(arg0))->unk14, (s16 *)&p, 0);
}
