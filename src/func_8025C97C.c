#include "basetypes.h"

typedef struct { s32 a, b, c; } Triple;

extern void func_80255E78(void *arg0, void *arg1);
extern s32 func_80255CB4(void *arg0, s32 arg1);
extern s32 func_8025DE74(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern s32 D_800D0D50;

typedef struct func_8025C97C_S1 func_8025C97C_S1;
typedef struct func_8025C97C_S2 func_8025C97C_S2;
typedef struct func_8025C97C_S3 func_8025C97C_S3;
struct func_8025C97C_S1 {
    char pad0[0x14];
    char unk14;
};
struct func_8025C97C_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    Triple unk10;
    char pad10[0x1C - 0x10 - sizeof(Triple)];
    void* unk1C;
};
struct func_8025C97C_S3 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};

void *func_8025C97C(void *arg0, s32 arg1, void *arg2, void *arg3, s32 arg4) {
    void *node;
    s32 result;

    node = *(void **)arg0;
    if (node != 0) {
        func_80255E78(arg0, node);
        func_80255CB4(&((func_8025C97C_S1 *)(arg0))->unk14, (s32)node);
        ((func_8025C97C_S2 *)(node))->unkC = -1;
        ((func_8025C97C_S2 *)(node))->unk8 = -1;
        result = func_8025DE74((s16)arg1, ((func_8025C97C_S3 *)(arg2))->unk0,
                                ((func_8025C97C_S3 *)(arg2))->unk4,
                                ((func_8025C97C_S3 *)(arg2))->unk8,
                                (s32)arg3, arg4);
        ((func_8025C97C_S2 *)(node))->unk8 = result;
        D_800D0D50 = result;
        ((func_8025C97C_S2 *)(node))->unkC = arg1;
        ((func_8025C97C_S2 *)(node))->unk10 = *(Triple *)arg2;
        ((func_8025C97C_S2 *)(node))->unk1C = arg3;
    }
    return node;
}
