#include "basetypes.h"

typedef struct {
    s32 w[7];
} Block7;

extern char *func_8028FD94(s32 *, s32);

extern char D_800F7D20;

void func_8020A604(void *arg0) {
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s4;
    s32 base2;
    char *tbl;
    Block7 *src;
    char *dst;

    s2 = 0;
    tbl = &D_800F7D20;
    s4 = 0;
    do {
        s0 = 0;
        base2 = s2 * 2;
        s1 = s4;
        do {
            src = func_8028FD94(arg0, base2 + s0);
            dst = (char *)(s1 + (s32)tbl);
            *(Block7 *)dst = *src;
            s0 += 1;
            s1 += 0x1C;
        } while (s0 < 2);
        s2 += 1;
        s4 += 0x38;
    } while (s2 < 0x16);
}
