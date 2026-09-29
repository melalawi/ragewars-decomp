#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);

typedef struct func_8028D220_S1 func_8028D220_S1;
struct func_8028D220_S1 {
    char pad0[0x7C];
    void* unk7C;
};

void *func_8028D220(void *a, s32 b, s32 c) {
    void *r1;
    void *r2;
    s32 field;

    r1 = func_8028FD94(((func_8028D220_S1 *)(a))->unk7C, b);
    r2 = func_8028FD94(r1, 1);
    field = *(s32 *)r2;
    return (s8 *)r2 + ((c * field) + 8);
}
