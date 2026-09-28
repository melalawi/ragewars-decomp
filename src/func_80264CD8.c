#include "basetypes.h"

extern s32 D_8010FC40[3];

void func_80264CD8(void) {
    s32 *p = D_8010FC40;
    s32 v = p[2];
    if (v != 0) {
        v = v - 1;
        p[2] = v;
        if (v == 0) {
            p[1] = 0;
        }
    }
}
