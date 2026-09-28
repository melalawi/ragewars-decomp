#include "basetypes.h"

extern s32 D_800D2BB4[3];

void func_802A2158(void *arg0, u8 *arg1) {
    while (*arg1 != 0) {
        arg1++;
    }
    arg1++;
    D_800D2BB4[0] = 0;
    D_800D2BB4[2] = 1;
}
