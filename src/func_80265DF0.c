#include "basetypes.h"
extern s32 D_800D0ED0;
extern s32 D_80110560;
void func_80265DF0(void) {
    D_80110560 = D_800D0ED0;
    if (D_800D0ED0 == 0) {
        D_800D0ED0 = 0x20;
        return;
    }
    D_800D0ED0 = 0;
}
