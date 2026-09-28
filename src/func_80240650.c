#include "basetypes.h"

typedef struct {
    s32 b;
    s32 c;
    s32 d;
} Triple;

s32 func_80240650(void *arg0, Triple t, s32 arg4, s32 arg5, void *arg6) {
    char unused[0xB60];
    *(Triple *)arg6 = t;
    return 1;
}
