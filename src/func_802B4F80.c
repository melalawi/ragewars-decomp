#include "basetypes.h"

typedef struct {
    s16 count;
    s16 _pad2;
    s32 value;
    s32 _pad8;
    s32 _padC;
} Buf16;

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B4F80(s32 arg0, s32 arg1) {
    Buf16 sp10;

    sp10.value = arg1;
    sp10.count = 0xE;
    func_802B51A4(arg0 + 0x48, &sp10, 0);
}
