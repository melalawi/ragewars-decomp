#include "basetypes.h"

extern s32 D_800D2C94;
extern void func_8029BA34(s32 *arg0);

void func_802A3358(void) {
    s32 *p;

    p = &D_800D2C94;
    if (*p != 1) {
        *p = 1;
        func_8029BA34(p);
    }
}
