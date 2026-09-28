#include "basetypes.h"

typedef struct { s32 a, b, c; } Triple;

extern void func_80255E78(void *arg0, void *arg1);
extern s32 func_80255CB4(void *arg0, s32 arg1);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern s32 D_800D0D50;

void *func_8025C97C(void *arg0, s32 arg1, void *arg2, void *arg3, s32 arg4) {
    void *node;
    s32 result;

    node = *(void **)arg0;
    if (node != 0) {
        func_80255E78(arg0, node);
        func_80255CB4((char *)arg0 + 0x14, (s32)node);
        *(s32 *)((char *)node + 0xC) = -1;
        *(s32 *)((char *)node + 0x8) = -1;
        result = func_8025DE74((s16)arg1, *(s32 *)((char *)arg2 + 0x0),
                                *(s32 *)((char *)arg2 + 0x4),
                                *(s32 *)((char *)arg2 + 0x8),
                                (s32)arg3, arg4);
        *(s32 *)((char *)node + 0x8) = result;
        D_800D0D50 = result;
        *(s32 *)((char *)node + 0xC) = arg1;
        *(Triple *)((char *)node + 0x10) = *(Triple *)arg2;
        *(void **)((char *)node + 0x1C) = arg3;
    }
    return node;
}
