#include "basetypes.h"

typedef struct {
    s32 b;
    s32 c;
    s32 d;
} Triple;

typedef struct func_8024E78C_S1 func_8024E78C_S1;
struct func_8024E78C_S1 {
    char pad0[0x14];
    s32 unk14;
};

void func_8024E78C(void *arg0, Triple t, void *arg4, s32 *arg5) {
    char unused[0x150];
    *(Triple *)arg4 = t;
    *arg5 = ((func_8024E78C_S1 *)(arg0))->unk14;
}
