#include "basetypes.h"

typedef struct {
    s32 b;
    s32 c;
    s32 d;
} Triple;

s32 func_80240688(void *arg0, s32 arg1, Triple t, s32 arg5, s32 arg6, void *arg7) {
    Triple unused1;
    Triple unused2;
    *(Triple *)arg7 = t;
    return *(s32 *)((char *)arg0 + 0x14);
}
