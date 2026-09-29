#include "basetypes.h"

extern void *func_8020C994(void *, s32);
extern void func_8020D220(void *, s32);
extern s32 D_8013B364;

typedef struct func_8020F614_S1 func_8020F614_S1;
typedef struct func_8020F614_S2 func_8020F614_S2;
typedef struct func_8020F614_S3 func_8020F614_S3;
typedef struct func_8020F614_S4 func_8020F614_S4;
struct func_8020F614_S1 {
    char pad0[0x24];
    void* unk24;
};
struct func_8020F614_S2 {
    char pad0[0xC];
    u16 unkC;
    char padC[0xE - 0xC - sizeof(u16)];
    u16 unkE;
};
struct func_8020F614_S3 {
    char pad0[0x10];
    void* unk10;
    char pad10[0x34 - 0x10 - sizeof(void*)];
    void* unk34;
};
struct func_8020F614_S4 {
    char pad0[0x1A4];
    s8 unk1A4;
};

s32 func_8020F614(void) {
    s32 *base;
    void *node;
    void *result;
    s32 count;

    base = &D_8013B364;
    node = ((func_8020F614_S1 *)(base))->unk24;
    count = 0;
    if (node != 0) {
        do {
            result = func_8020C994(base, *(s32 *)node);
            if ((((func_8020F614_S2 *)(result))->unkC & 1) &&
                ((func_8020F614_S2 *)(result))->unkE == 0x64E &&
                ((func_8020F614_S4 *)((((func_8020F614_S3 *)(node))->unk34)))->unk1A4 == 0) {
                func_8020D220(base, *(s32 *)node);
                count += 1;
            }
            node = ((func_8020F614_S3 *)(node))->unk10;
        } while (node != 0);
    }
    return count;
}
