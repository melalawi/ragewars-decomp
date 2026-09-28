#include "basetypes.h"

typedef struct {
    s16 count;
    s16 _pad2;
    s16 value;
    s16 _pad6;
    s32 _pad8;
    s32 _padC;
} Buf16b;

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B5030(s32 arg0, s16 arg1) {
    Buf16b sp10;

    sp10.value = arg1;
    sp10.count = 0xA;
    func_802B51A4(arg0 + 0x48, &sp10, 0);
}
