#include "basetypes.h"

typedef struct {
    s16 f0;
    char pad[14];
} Buf16;

extern s32 func_802B3A80(s32 arg0, s32 *arg1);
extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B4DD0(void *arg0) {
    Buf16 sp10;
    s32 sp20;
    s32 field18;

    if (*(s32 *)((char *)arg0 + 0x2C) == 1) {
        field18 = *(s32 *)((char *)arg0 + 0x18);
        if (field18 != 0 && (func_802B3A80(field18, &sp20) & 0xFF)) {
            sp10.f0 = 0;
            func_802B51A4((char *)arg0 + 0x48, &sp10, sp20 * *(s32 *)((char *)arg0 + 0x24));
        }
    }
}
