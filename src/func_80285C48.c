#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern s32 func_80264E10(void *);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

typedef struct func_80285C48_S1 func_80285C48_S1;
typedef struct func_80285C48_S2 func_80285C48_S2;
typedef union func_80285C48_S1_U14 { void* v0; char v1; } func_80285C48_S1_U14;
struct func_80285C48_S1 {
    char pad0[0x14];
    func_80285C48_S1_U14 unk14;
};
struct func_80285C48_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x38 - 0x4 - sizeof(void*)];
    s32* unk38;
};

void func_80285C48(void *arg0) {
    void *node;
    void *next;
    s32 flag;
    u32 saved;
    s32 *inner;

    saved = func_802C2020();
    for (node = ((func_80285C48_S1 *)(arg0))->unk14.v0; node != 0; node = next) {
        next = ((func_80285C48_S2 *)(node))->unk4;
        flag = 0;
        if (func_80264E10((char *)node + 0x20) != 0 || func_80264E10((char *)node + 0x2C) != 0) {
            flag = 1;
        }
        if (flag == 0) {
            continue;
        }
        inner = ((func_80285C48_S2 *)(node))->unk38;
        if (inner != 0) {
            *inner = 0;
        }
        func_80255E78(&((func_80285C48_S1 *)(arg0))->unk14.v1, node);
        func_80255CB4(arg0, node);
    }
    func_802C2040(saved);
}
