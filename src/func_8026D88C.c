#include "basetypes.h"

extern s32 D_800D15D0;
extern s32 D_80110620;
extern s32 D_800D15D4;
extern s32 D_800D15D8;
extern s32 D_800D15DC;

void func_8026D88C(void) {
    if (D_800D15D0 != 0 || D_80110620 != 0) {
        D_800D15D4 = 0x10000;
        D_800D15D8 = 0xC4000000;
        D_800D15DC = 0xC8000000;
        return;
    }
    D_800D15D4 = 0;
    D_800D15D8 = 0x0C080000;
    D_800D15DC = 0x0C080000;
}
