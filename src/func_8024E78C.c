#include "basetypes.h"

typedef struct {
    s32 b;
    s32 c;
    s32 d;
} Triple;

void func_8024E78C(void *arg0, Triple t, void *arg4, s32 *arg5) {
    char unused[0x150];
    *(Triple *)arg4 = t;
    *arg5 = *(s32 *)((char *)arg0 + 0x14);
}
