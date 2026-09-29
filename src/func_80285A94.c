#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_80255C40(s32 *, s32, s32);
extern s32 func_80255CB4(void *, s32);
extern void func_802C2040(u32);

typedef struct func_80285A94_S1 func_80285A94_S1;
typedef struct func_80285A94_S2 func_80285A94_S2;
struct func_80285A94_S1 {
    char pad0[0x14];
    char unk14;
    char pad14[0x28 - 0x14 - sizeof(char)];
    s32 unk28;
};
struct func_80285A94_S2 {
    char pad0[0x3C];
    char unk3C;
};

void func_80285A94(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    void *p;
    u32 saved;

    p = arg1;
    saved = func_802C2020();
    func_80255C40(arg0, 0, 4);
    func_80255C40(&((func_80285A94_S1 *)(arg0))->unk14, 0, 4);
    i = 0;
    if (arg2 > 0) {
        do {
            func_80255CB4(arg0, p);
            i += 1;
            p = &((func_80285A94_S2 *)(p))->unk3C;
        } while (i < arg2);
    }
    ((func_80285A94_S1 *)(arg0))->unk28 = 0;
    func_802C2040(saved);
}
