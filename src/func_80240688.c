#include "basetypes.h"

typedef struct {
    s32 b;
    s32 c;
    s32 d;
} Triple;

typedef struct func_80240688_S1 func_80240688_S1;
struct func_80240688_S1 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_80240688(void *arg0, s32 arg1, Triple t, s32 arg5, s32 arg6, void *arg7) {
    Triple unused1;
    Triple unused2;
    *(Triple *)arg7 = t;
    return ((func_80240688_S1 *)(arg0))->unk14;
}
