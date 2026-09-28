#include "basetypes.h"

extern s32 D_800D2AE8;
extern s32 D_8014AEBC;

void func_8029576C(void) {
    s32 *p;
    s32 old;
    s32 value;
    s32 remainder;

    old = D_800D2AE8++;
    if (old >= 3) {
        p = &D_8014AEBC;
        value = p[0] + 1;
        remainder = value % p[-1];
        D_800D2AE8 = 0;
        p[2] = 1;
        *(volatile s32 *)&p[0] = value;
        p[0] = remainder;
    }
}
