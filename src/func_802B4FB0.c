#include "basetypes.h"

typedef struct {
    s16 count;
    s16 _pad2;
    s32 zero;
    s8 f8;
    s8 f9;
    s8 fA;
    s8 _padB;
    s32 _padC;
} Buf16c;

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B4FB0(s32 arg0, s32 arg1, s8 arg2) {
    Buf16c sp10;

    sp10.count = 2;
    sp10.f8 = (s8)(arg1 | 0xB0);
    sp10.fA = arg2;
    sp10.zero = 0;
    sp10.f9 = 0x5B;
    func_802B51A4(arg0 + 0x48, &sp10, 0);
}
