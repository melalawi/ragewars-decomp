#include "basetypes.h"

typedef struct {
    s16 f0;
    char pad[14];
} Buf16;

extern s32 func_802B3A80(s32 arg0, s32 *arg1);
extern s32 func_802B51A4(void *, s16 *, s32);

typedef struct func_802B4DD0_S1 func_802B4DD0_S1;
struct func_802B4DD0_S1 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x24 - 0x18 - sizeof(s32)];
    s32 unk24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x48 - 0x2C - sizeof(s32)];
    char unk48;
};

void func_802B4DD0(void *arg0) {
    Buf16 sp10;
    s32 sp20;
    s32 field18;

    if (((func_802B4DD0_S1 *)(arg0))->unk2C == 1) {
        field18 = ((func_802B4DD0_S1 *)(arg0))->unk18;
        if (field18 != 0 && (func_802B3A80(field18, &sp20) & 0xFF)) {
            sp10.f0 = 0;
            func_802B51A4(&((func_802B4DD0_S1 *)(arg0))->unk48, &sp10, sp20 * ((func_802B4DD0_S1 *)(arg0))->unk24);
        }
    }
}
