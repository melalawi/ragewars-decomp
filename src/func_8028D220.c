#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

void *func_8028D220(void *a, s32 b, s32 c) {
    void *r1;
    void *r2;
    s32 field;

    r1 = func_8028FD94(*(void **)((s8 *)a + 0x7C), b);
    r2 = func_8028FD94(r1, 1);
    field = *(s32 *)r2;
    return (s8 *)r2 + ((c * field) + 8);
}
