#include "basetypes.h"
extern s32 D_800D297C;

void func_80279A00(void *arg0) {
    s32 *p = (s32 *)arg0;
    p[2] = p[1];
    p[3] = p[0] + ((p[1] * D_800D297C) << 6);
}
